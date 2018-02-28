#include <QtSql/QtSql>
#include <iostream>
#include <vector>
#include <QMessageBox>

#include "database.h"

//Constructeur
database::database()
{

}

bool database::openDatabase()
{
    m_bdd.open();
    return true;
}

bool database::closeDatabase()
{
    m_bdd.close();
    return true;
}

void database::createDatabase()
{
    //Création du répertoire si non créer pour la base de données
    QString chemin("c:/warehousebd");
    QDir dir = QDir::root();
    dir.mkdir(chemin);

    //Création de la base de données
    m_bdd = QSqlDatabase::addDatabase("QSQLITE");
    m_bdd.setDatabaseName("c:/warehousebd/warehousedb.db");
    openDatabase();
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
               "FOREIGN KEY(`idEmballage`) REFERENCES `emballage`(`idEmballage`)"
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
               "FOREIGN KEY(`idUtilisateur`) REFERENCES `utilisateur`(`idUtilisateur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `livrer` ("
               "qteLivree TEXT NOT NULL,"
               "`idArticle` INTEGER NOT NULL,"
               "`idConstructeur` INTEGER NOT NULL,"
               "FOREIGN KEY(`idConstructeur`) REFERENCES `constructeur`(`idConstructeur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    closeDatabase();
}

void database::insertProduit(Produit& produitAInserDansLaBdd)
{
    std::cout << "dans insertproduit" << std::endl;
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

bool database::deleteProduit(const QString& codeArticle)
{
    std::cout << "MODE DEBUG : Dans Delete Produit dans database.cpp" << std::endl;
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

bool database::updateProduit(Produit* produit)
{
    std::cout << "MODE DEBUG : Dans updateproduit" << std::endl;
    m_bdd.open();

    QSqlQuery query;

    query.prepare("UPDATE article "
                  "SET codeArticle=:codeArticle "
                  "WHERE rowid=1");

 //   query.prepare("UPDATE produits SET nom=?, libelle=?, prix=? WHERE rowid=?");
    query.bindValue(":'codeArticle'", produit->GetCodeArticle());
    query.exec();

    m_bdd.close();

    return true;
}

//Permet de récuperer la table des produits
QVector<Produit*>* database::getAllProduits(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans la methode getAllProduits" << std::endl;

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

QVector<Utilisateur *> *database::getDroitUtilisateur()
{
    std::cout << "MODE DEBUG : Droit utilisateur" << std::endl;

    m_bdd.open();

    QVector<Utilisateur*>* users = new QVector<Utilisateur*>;
    QSqlQuery query;
    query.exec("SELECT ROWID, * "
               "FROM utilisateur "
               "WHERE login = 'cedric1' and motDePasseUtilisateur = 'cedric';");
    do
    {
        if(query.next())
        {
            Utilisateur * user = new Utilisateur();
            users->push_back(user);
            user->SetId(query.value(0).toInt());
            user->SetLogin (query.value(1).toString());
            user->SetMotDePasse(query.value(2).toString());
            user->SetDroit(query.value(3).toInt());
        }
    }while(query.next());

    m_bdd.close();

    return users;
}

void database::ajoutUtilisateur(Utilisateur &user)
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









