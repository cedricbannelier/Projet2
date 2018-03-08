#include <QtSql/QtSql>
#include <iostream>
#include <vector>
#include <QMessageBox>
 #include <QCoreApplication>

#include "Database.h"

//Constructeur
Database::Database()
{

}

void Database::OpenDatabase()
{
    m_bdd.open();
}

void Database::CloseDatabase()
{
    m_bdd.close();
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
              "idUtilisateur INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
              "`login`	TEXT NOT NULL,"
              "`motDePasseUtilisateur`TEXT NOT NULL,"
              "'droitUtilisateur' INTEGER NOT NULL"
              ");");

    query.exec("CREATE TABLE IF NOT EXISTS `article` ("
               "idArticle INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "codeArticle TEXT NOT NULL,"
               "designationArticle TEXT NOT NULL,"
               "poidsArticle REAL NOT NULL,"
               "emplacementArticle TEXT NOT NULL,"
               "idEmballage INTEGER,"
               "FOREIGN KEY(`idEmballage`) REFERENCES `emballage`(`idEmballage`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `emballage` ("
               "idEmballage INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "typeEmballage TEXT NOT NULL,"
               "hauteurEmballage REAL NOT NULL,"
               "largeurEmballage REAL NOT NULL,"
               "longueurEmballage REAL NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `fournisseur` ("
               "idFournisseur INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "nomFournisseur TEXT NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `consulter` ("
               "idConsulter INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteStock TEXT NOT NULL,"
               "idUtilisateur INTEGER NOT NULL,"
               "idArticle INTEGER NOT NULL,"
               "FOREIGN KEY(`idUtilisateur`) REFERENCES `utilisateur`(`idUtilisateur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `livrer` ("
               "idLivrer INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteLivree TEXT NOT NULL, "
               "numeroLivraison INTEGER NOT NULL, "
               "dateLivraison INTEGER NOT NULL, "
               "idArticle INTEGER NOT NULL, "
               "idFournisseur INTEGER NOT NULL, "
               "FOREIGN KEY(`idFournisseur`) REFERENCES `fournisseur`(`idFournisseur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");
   m_bdd.close();
}

void Database::InsertProduit(Article &produitAInserDansLaBdd)
{
    std::cout << "MODE DEBUG : Dans insertproduit" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage)"
                  "VALUES(:codeArticle, :designationArticle, :poisArticle, :emplacementArticle, :idEmballage);");
    query.bindValue(":codeArticle", produitAInserDansLaBdd.GetCodeArticle());
    query.bindValue(":designationArticle", produitAInserDansLaBdd.GetDesignationArticle());
    query.bindValue(":poisArticle", produitAInserDansLaBdd.GetPoidsArticle());
    query.bindValue(":emplacementArticle", produitAInserDansLaBdd.GetEmplacementArticle());
    query.bindValue(":idEmballage", produitAInserDansLaBdd.GetEmballageArticle());
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
                  "WHERE codeArticle=:codeArticle;");
    query.bindValue(":codeArticle", codeArticle.toUpper());

    if(query.exec())
           {
                m_bdd.close();
               return true;

           }
     else
           {

                m_bdd.close();
                return false;
           }
}

//En cours de dev
//Permet de faire un update

bool Database::UpdateProduit(Article &produit)
{
    std::cout << "MODE DEBUG : Dans Update un produit" << std::endl;

    m_bdd.open();

    QSqlQuery query;

    query.prepare("UPDATE article "
                  "SET designationArticle=:designationArticle,"
                  "poidsArticle=:poidsArticle,"
                  "emplacementArticle=:emplacementArticle "
                  "WHERE codeArticle=:codeArticle;");

    query.bindValue(":designationArticle", produit.GetDesignationArticle());
    query.bindValue(":poidsArticle", produit.GetPoidsArticle());
    query.bindValue(":emplacementArticle", produit.GetEmplacementArticle());
    query.bindValue(":codeArticle", produit.GetCodeArticle());
    query.exec();

    m_bdd.close();

    return true;
}

//Permet de récuperer la table des produits
QVector<Article *> *Database::AfficheUnProduit(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans la methode AfficheUnProduit database.CPP" << std::endl;
    m_bdd.open();
    QVector<Article*>* articles = new QVector<Article*>;
    QSqlQuery query;
    query.prepare("SELECT codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage "
                  "FROM article "
                  "WHERE codeArticle = :codeArticle;");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();
    do
    {
        if(query.next())
        {
            Article * article = new Article();
            articles->push_back(article);
            article->SetCodeArticle(query.value(0).toString());
            article->SetDesignationArticle(query.value(1).toString());
            article->SetPoidsArticle(query.value(2).toInt());
            article->SetEmplacementArticle(query.value(3).toString());
            article->SetEmballageArticle(query.value(4).toString());

        }
    }while(query.next());
    m_bdd.close();
    return articles;
}

//Permet de récuperer la table complete ARTICLE
//En cours de dev
void Database::AfficheLeStock()
{
    std::cout << "MODE DEBUG : Dans la methode AfficheUnProduit database.CPP" << std::endl;

    QSqlQueryModel * modal = new QSqlQueryModel();

    m_bdd.open();



    QSqlQuery query;
    query.prepare("SELECT * FROM article;");
    query.exec();

    modal->setQuery(query);

    m_bdd.close();

}

QVector<Utilisateur*>* Database::GetDroitUtilisateur(QString loginEntreParUtilisateur,
                                                     QString motDePasseEntreParUtilisateur)
{
    std::cout << "MODE DEBUG : Droit utilisateur dans database.CPP" << std::endl;
    m_bdd.open();
    QVector<Utilisateur*>* users = new QVector<Utilisateur*>;
    QSqlQuery query;
    query.prepare("SELECT * FROM utilisateur "
                  "WHERE login =:loginEntreParUtilisateur "
                  "AND motDePasseUtilisateur=:motDePasseEntreParUtilisateur ;");
    query.bindValue(":loginEntreParUtilisateur", loginEntreParUtilisateur);
    query.bindValue(":motDePasseEntreParUtilisateur", motDePasseEntreParUtilisateur);
    query.exec();
    do
    {
        if(query.next())
        {
            Utilisateur * user = new Utilisateur();
            users->push_back(user);
            user->SetLogin(query.value(0).toString());
            user->SetMotDePasse(query.value(1).toString());
            user->SetDroit(query.value(2).toInt());
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
                  "VALUES(:login, :motDePasseUtilisateur, :droit);");
    query.bindValue(":login", user.GetLogin());
    query.bindValue(":motDePasseUtilisateur", user.GetMotDePasse());
    query.bindValue(":droit", user.GetDroit());

    query.exec();

    m_bdd.close();
}

int Database::RecupererIdArticle(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Recuperer ID article database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT idArticle FROM article WHERE codeArticle=:codeArticle");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    query.next();
    int idArticle = query.value(0).toInt();

    m_bdd.close();

    return idArticle;
}

int Database::RecupererIdFournisseur(QString nomFournisseur)
{
    std::cout << "MODE DEBUG : Dans Recuperer ID Fournisseur database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT idFournisseur FROM fournisseur WHERE nomFournisseur=:nomFournisseur");
    query.bindValue(":nomFournisseur", nomFournisseur);
    query.exec();

    query.next();
    int idFournisseur = query.value(0).toInt();

    m_bdd.close();

    return idFournisseur;
}

bool Database::AjoutEmballage(Emballage&nouvelEmballage)
{
    std::cout << "MODE DEBUG : Dans ajouter nouvel emballage database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("INSERT INTO emballage (typeEmballage, hauteurEmballage, largeurEmballage, longueurEmballage)"
                  "VALUES(:typeEmballage, :hauteurEmballage, :largeurEmballage, :longueurEmballage);");
    query.bindValue(":typeEmballage", nouvelEmballage.GetTypeEmballage());
    query.bindValue(":hauteurEmballage", nouvelEmballage.GetHauteurEmballage());
    query.bindValue(":largeurEmballage", nouvelEmballage.GetLargeurEmballage());
    query.bindValue(":longueurEmballage", nouvelEmballage.GetLongueurEmballage());

    query.exec();

    m_bdd.close();

    return true;
}

bool Database::ArticlePresentDansLaBddAvecId(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Verification si article present dans la BDD database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT idArticle "
                  "FROM article "
                  "WHERE codeArticle=:codeArticle;");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    query.next();

    int presenceDansLaBdd = query.value(0).toInt();

    if(presenceDansLaBdd == 0)
     {
        m_bdd.close();
        return false;
     }
     else
     {

        m_bdd.close();
        return true;
     }
}

bool Database::ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Verification si article present dans la BDD database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT codeArticle "
                  "FROM article "
                  "WHERE codeArticle=:codeArticle;");
    query.bindValue(":codeArticle", codeArticle.toUpper());
    query.exec();

    query.next();

    QString presenceDansLaBdd = query.value(0).toString().toUpper();

    if(presenceDansLaBdd.toUpper() == codeArticle.toUpper())
     {
        m_bdd.close();
        return false;
     }
     else
     {

        m_bdd.close();
        return true;
     }
}

bool Database::AjoutFournisseur(Fournisseur & nouvelFournisseur)
{
    std::cout << "MODE DEBUG : Dans ajouter nouveau fournisseur database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("INSERT INTO fournisseur (nomFournisseur)"
                  "VALUES(:nomFournisseur);");
    query.bindValue(":nomFournisseur", nouvelFournisseur.GetNomFournisseur());

    if(query.exec())
           {
               m_bdd.close();
               return true;

           }
     else
           {

                m_bdd.close();
                return false;
           }
}



void Database::ReceptionLivraison(QString qteLivree, QString numeroLivraison, int dateLivraison, int idArticle, int idFournisseur)
{
    std::cout << "MODE DEBUG : Dans reception commande database.CPP" << std::endl;


    m_bdd.open();

    QSqlQuery query;
    query.prepare("INSERT INTO livrer (qteLivree, numeroLivraison, dateLivraison, idArticle, idFournisseur)"
                  "VALUES(:qteLivree, :numeroLivraison, :dateLivraison, :idArticle, :idFournisseur);");
    query.bindValue(":qteLivree", qteLivree);
    query.bindValue(":numeroLivraison", numeroLivraison);
    query.bindValue(":dateLivraison", dateLivraison);
    query.bindValue(":idArticle", idArticle);
    query.bindValue(":idFournisseur", idFournisseur);

    query.exec();

    m_bdd.close();

}

bool Database::FournisseurPresentDansLaBdd(QString nomFournisseur)
{
    std::cout << "MODE DEBUG : Dans Verification si fournisseur est present dans la BDD database.CPP" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT nomFournisseur "
                  "FROM fournisseur "
                  "WHERE nomFournisseur=:nomFournisseur;");
    query.bindValue(":nomFournisseur", nomFournisseur.toUpper());
    query.exec();

    query.next();

    QString presenceDansLaBdd = query.value(0).toString().toUpper();

    if(presenceDansLaBdd.toUpper() == nomFournisseur.toUpper())
     {
        m_bdd.close();
        return false;
     }
     else
     {

        m_bdd.close();
        return true;
     }
}


/*
INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage)
VALUES ('pomme', 'pomme verte', 10, 'A1B2C', 1);

INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage)
VALUES ('poire', 'poire rouge', 10, 'B1A2C', 2);


INSERT INTO emballage (typeEmballage, hauteurEmballage, largeurEmballage, longueurEmballage)
VALUES ('carton',100,750,50);
INSERT INTO emballage (typeEmballage, hauteurEmballage, largeurEmballage, longueurEmballage)
VALUES ('carton',50,25,50);

SELECT codeArticle as Référence, designationArticle as Libelle, poidsArticle as Poids, emplacementArticle as 'Empl.', typeEmballage as Type, hauteurEmballage as H, largeurEmballage as l, profondeurEmballage as P
FROM article, emballage
WHERE article.idEmballage = emballage.idEmballage

SELECT distinct largeurEmballage, longueurEmballage, hauteurEmballage
FROM emballage
WHERE typeEmballage ='Carton';

SELECT
livrer.qteLivree + consulter.qteStock AS 'Qte reelle',
consulter.qteStock AS Qte,
SUM(livrer.qteLivree) as 'QTE Livrée',
article.codeArticle as Référence,
article.designationArticle as Libelle,
article.poidsArticle as Poids, article.emplacementArticle as Empl
FROM article
inner join consulter ON article.idArticle = consulter.idArticle
inner JOIN livrer ON article.idArticle = livrer.idArticle

*/










