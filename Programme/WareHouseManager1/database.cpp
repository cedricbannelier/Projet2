#include <QtSql/QtSql>
#include <iostream>
#include <vector>
#include <QMessageBox>

#include "Database.h"

//Constructeur
Database::Database()
{

}

bool Database::OpenDatabase()
{
    m_bdd.open();
    return true;
}

bool Database::CloseDatabase()
{
    m_bdd.close();
    return true;
}

void Database::CreateDatabase()
{
    //Création du répertoire si non créer pour la base de données
    QString chemin("c:/warehousebd");
    QDir dir = QDir::root();
    dir.mkdir(chemin);

    //Création de la base de données
    m_bdd = QSqlDatabase::addDatabase("QSQLITE");
    m_bdd.setDatabaseName("c:/warehousebd/warehousedb.db");
    m_bdd.open();
    QSqlQuery query;

   query.exec("CREATE TABLE IF NOT EXISTS `utilisateur` ("
               "`login`	TEXT NOT NULL,"
               "`motDePasseUtilisateur`TEXT NOT NULL,"
               "'droitUtilisateur' INTEGER NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `article` ("
               "`codeArticle` TEXT NOT NULL,"
               "`designationArticle` TEXT NOT NULL,"
               "`poidsArticle` REAL NOT NULL,"
               "`emplacementArticle` TEXT NOT NULL,"
               "`idEmballage` INTEGER,"
               "FOREIGN KEY(`idEmballage`) REFERENCES `emballage`(`ROWID`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `emballage` ("
               "hauteurEmballage REAL NOT NULL,"
               "largeurEmballage REAL NOT NULL,"
               "profondeurEmballage REAL NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `constructeur` ("
               "nomConstructeur TEXT NOT NULL,"
               "referenceConstructeur TEXT NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `consulter` ("
               "qteStock TEXT NOT NULL,"
               "`idUtilisateur` INTEGER NOT NULL,"
               "`idArticle` INTEGER NOT NULL,"
               "FOREIGN KEY(`idUtilisateur`) REFERENCES `utilisateur`(`ROWID`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`ROWID`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `livrer` ("
               "qteLivree TEXT NOT NULL,"
               "`idArticle` INTEGER NOT NULL,"
               "`idConstructeur` INTEGER NOT NULL,"
               "FOREIGN KEY(`idConstructeur`) REFERENCES `constructeur`(`ROWID`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`ROWID`)"
               ");");

   m_bdd.close();
}

void Database::InsertProduit(Produit& produitAInserDansLaBdd)
{
    std::cout << "MODE DEBUG : Dans insertproduit" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle)"
                  "VALUES(:codeArticle, :designationArticle, :poisArticle, :emplacementArticle);");
    query.bindValue(":codeArticle", produitAInserDansLaBdd.GetCodeArticle());
    query.bindValue(":designationArticle", produitAInserDansLaBdd.GetDesignationArticle());
    query.bindValue(":poisArticle", produitAInserDansLaBdd.GetPoidsArticle());
    query.bindValue(":emplacementArticle", produitAInserDansLaBdd.GetEmplacementArticle());
    query.exec();
    m_bdd.close();
}

//Permet de supprimer un produit
//En paramètre le nom du produit//

bool Database::DeleteProduit(const QString& codeArticle)
{
    std::cout << "MODE DEBUG : Dans Delete Produit dans Database.cpp" << std::endl;
    m_bdd.open();

    QSqlQuery query;
    query.prepare("DELETE FROM article "
                  "WHERE codeArticle=:codeArticle");
    query.bindValue(":codeArticle", codeArticle);

    if(query.exec())
           {
               return true;
               m_bdd.close();
           }
     else
           {
                qDebug() << "add product error !"
                         << query.lastError();
           }
    m_bdd.close();
    return false;

}
//En cours de dev
//Permet de faire un update

bool Database::UpdateProduit(Produit &produit)
{
    std::cout << "MODE DEBUG : Dans Update un produit" << std::endl;


    QString article = produit.GetCodeArticle();
    QString designation = produit.GetDesignationArticle();
    QString poids = produit.GetPoidsArticle();
    QString emplacement = produit.GetEmplacementArticle();

    m_bdd.open();

    QSqlQuery query;

/*    query.prepare("UPDATE article "
                      "SET designationArticle='dsfqsfqsdf',"
                      "poidsArticle=52,"
                      "emplacementArticle='A1B2C'"
                      "WHERE codeArticle='a';");
*/
    query.prepare("UPDATE article "
                  "SET designationArticle=:designationArticle,"
                  "poidsArticle=:poidsArticle,"
                  "emplacementArticle=:emplacementArticle"
                  "WHERE codeArticle=:codeArticle;");

    query.bindValue(":'designationArticle'", designation);
    query.bindValue(":'poidsArticle'", poids);
    query.bindValue(":'emplacementArticle'", emplacement);
    query.bindValue(":'codeArticle'", article);
    query.exec();

    m_bdd.close();

    return true;
}

//Permet de récuperer la table des produits
QVector<Produit*>* Database::AfficheUnProduit(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans la methode AfficheUnProduit" << std::endl;

    m_bdd.open();

    QVector<Produit*>* produits = new QVector<Produit*>;

    QSqlQuery query;
    query.prepare("SELECT * FROM article WHERE codeArticle = :codeArticle");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    do
    {
        if(query.next())
        {
            Produit * produit = new Produit();
            produits->push_back(produit);
            produit->SetCodeArticle(query.value(0).toString());
            produit->SetDesignationArticle(query.value(1).toString());
            produit->SetPoidsArticle(query.value(2).toString());
            produit->SetEmplacementArticle(query.value(3).toString());

        }
    }while(query.next());

    m_bdd.close();

    return produits;
}

QVector<Utilisateur *> *Database::GetDroitUtilisateur(QString loginEntreParUtilisateur, QString motDePasseEntreParUtilisateur)
{
    std::cout << "MODE DEBUG : Droit utilisateur dans database.CPP" << std::endl;

    m_bdd.open();

    QVector<Utilisateur*>* users = new QVector<Utilisateur*>;
    QSqlQuery query;
    query.prepare("SELECT droitUtilisateur "
               "FROM utilisateur "
               "WHERE login =:loginEntreParUtilisateur and motDePasseUtilisateur =:motDePasseEntreParUtilisateur;");
    query.bindValue(":loginEntreParUtilisateur", loginEntreParUtilisateur);
    query.bindValue(":motDePasseEntreParUtilisateur", motDePasseEntreParUtilisateur);
    do
    {
        if(query.next())
        {
            Utilisateur * user = new Utilisateur();
            users->push_back(user);
            user->SetDroit(query.value(0).toInt());
        }
    }while(query.next());

    m_bdd.close();

    return users;
}

void Database::AjoutUtilisateur(Utilisateur &user)
{
    std::cout << "MODE DEBUG : Dans ajout utilisateur" << std::endl;

    /* //Hach du mot de passe
    QString chaine=user.GetMotDePasse();
    QByteArray motDePasseHache = QCryptographicHash::hash(chaine.toUtf8(), QCryptographicHash::Sha1);
    */

    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO utilisateur (login, motDePasseUtilisateur, droitUtilisateur)"
                  "VALUES(:login, :motDePasseUtilisateur, 1);");
    query.bindValue(":login", user.GetLogin());
    query.bindValue(":motDePasseUtilisateur", user.GetMotDePasse());
    query.exec();
    m_bdd.close();
}

int Database::RecupererRowIdTableArticle(/*QString codeArticle*/)
{
    std::cout << "MODE DEBUG : Dans Recuperer ROW ID database.CPP" << std::endl;

    m_bdd.open();
    QSqlQuery query;
    query.prepare("SELECT rowid FROM article WHERE codeArticle='b';");
    //query.bindValue(":'codeArticle'", codeArticle);
    query.exec();

    int rowid = query.value(1).toInt();

    m_bdd.close();

    std::cout << rowid << std::endl;

    return rowid;
}









