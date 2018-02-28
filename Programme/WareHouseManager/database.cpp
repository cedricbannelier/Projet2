#include "database.h"
#include <QtSql/QtSql>
#include <iostream>
#include <vector>
#include <QMessageBox>

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

void database::insertProduit(const QString& codeArticle, const QString& designationArticle, const QString& poidsArticle, const QString& emplacementArticle)
{
    std::cout << "dans insertproduit" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle)"
                      "VALUES(:codeArticle, :designationArticle, :poisArticle, :emplacementArticle);");
    query.bindValue(":codeArticle", codeArticle);
    query.bindValue(":designationArticle", designationArticle);
    query.bindValue(":poisArticle", poidsArticle);
    query.bindValue(":emplacementArticle", emplacementArticle);
    query.exec();
    m_bdd.close();
}

//Permet de supprimer un produit
//En paramètre le nom du produit//

bool database::deleteProduit(const QString& codeArticle)
{
    std::cout << "dans deleteproduit" << std::endl;
    m_bdd.open();

    QSqlQuery query;
    query.prepare("DELETE FROM article WHERE codeArticle=:codeArticle");
    query.bindValue(":codeArticle", codeArticle);
 //   query.exec();


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
/*
bool database::updateProduit(Produit* produit)
{
    std::cout << "dans updateproduit" << std::endl;
    m_bdd.open();

    QSqlQuery query;

 //   query.exec("UPDATE produits SET nom='pomme' WHERE rowid=1");

    query.prepare("UPDATE produits SET nom=?, libelle=?, prix=? WHERE rowid=?");
    query.bindValue(":'nom'", produit->nom);
    query.bindValue(":'libelle'", produit->libelle);
    query.bindValue(":prix", produit->prix);
    query.bindValue(":rowid", produit->id);
    query.exec();

    m_bdd.close();

    return true;
}
*/
//Permet de récuperer la table des produits
QVector<Produit*>* database::getAllProduits(QString codeArticle)
{
    std::cout << "Dans la methode getAllProduits" << std::endl;

    m_bdd.open();

    QVector<Produit*>* produits = new QVector<Produit*>;

    QSqlQuery query;
    query.prepare("SELECT rowid, * FROM article WHERE codeArticle = :codeArticle");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    do
    {
        if(query.next())
        {
            Produit * produit = new Produit();
            produits->push_back(produit);
            produit->id = query.value(0).toInt();
            produit->codeArticle = query.value(1).toString();
            produit->designationArticle = query.value(2).toString();
            produit->poidsArticle = query.value(3).toFloat();
            produit->emplacementArticle = query.value(4).toString();
        }
    }while(query.next());

    m_bdd.close();

    return produits;
}

QVector<utilisateur*>* database::getDroitUtilisateur()
{
    std::cout << "Droit utilisateur" << std::endl;

    m_bdd.open();

    QVector<utilisateur*>* users = new QVector<utilisateur*>;

    QSqlQuery query;
    query.exec("SELECT droitUtilisateur FROM utilisateur WHERE login = ""cedric"" and motDePasseUtilisateur = ""cedric"";");
/*  query.bindValue(":utilisateur", utilisateur);
    query.bindValue(":motDePasse", motDePasse);
    query.exec();
*/
    do
    {
        if(query.next())
        {
            utilisateur * user = new utilisateur();
            users->push_back(user);
            user->login = query.value(1).toString();
            user->droit = query.value(3).toInt();
        }
    }while(query.next());

    m_bdd.close();

    return users;
}

void database::ajoutUtilisateur(const QString login, const QString motDePasseUtilisateur)
{
    std::cout << "dans ajout utilisateur" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO utilisateur (login, motDePasseUtilisateur, droitUtilisateur)"
                      "VALUES(:login, :motDePasseUtilisateur, 1);");
    query.bindValue(":login", login);
    query.bindValue(":motDePasseUtilisateur", motDePasseUtilisateur);
    query.exec();
    m_bdd.close();
}









