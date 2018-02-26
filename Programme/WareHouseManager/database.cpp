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
               "`idUtilisateur`	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
               "`login`	TEXT NOT NULL,"
               "`motDePasseUtilisateur`TEXT NOT NULL,"
               "'droitUtilisateur' INTEGER NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `article` ("
               "`idArticle` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
               "`codeArticle` TEXT NOT NULL,"
               "`designationArticle` TEXT NOT NULL,"
               "`poidsArticle` REAL NOT NULL,"
               "`emplacementArticle` TEXT NOT NULL,"
               "`idEmballage`	INTEGER NOT NULL,"
               "FOREIGN KEY(`idEmballage`) REFERENCES `emballage`(`idEmballage`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `emballage` ("
               "idEmballage INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "hauteurEmballage REAL NOT NULL,"
               "largeurEmballage REAL NOT NULL,"
               "profondeurEmballage REAL NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `constructeur` ("
               "idConstructeur INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "nomConstructeur TEXT NOT NULL,"
               "referenceConstructeur TEXT NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `consulter` ("
               "idConsulter INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteStock TEXT NOT NULL,"
               "`idUtilisateur` INTEGER NOT NULL,"
               "`idArticle` INTEGER NOT NULL,"
               "FOREIGN KEY(`idUtilisateur`) REFERENCES `utilisateur`(`idUtilisateur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `livrer` ("
               "idLivrer INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteLivree TEXT NOT NULL,"
               "`idArticle` INTEGER NOT NULL,"
               "`idConstructeur` INTEGER NOT NULL,"
               "FOREIGN KEY(`idConstructeur`) REFERENCES `constructeur`(`idConstructeur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    closeDatabase();
}

bool database::insertProduit(const QString& nom, const QString& libelle, const QString &prix)
{
    std::cout << "dans insertproduit" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("INSERT INTO produits (nom, libelle, prix) VALUES(:name, :libelle, :prix)");
    query.bindValue(":name", nom);
    query.bindValue(":libelle", libelle);
    query.bindValue(":prix", prix);
    query.exec();
/*    if(query.exec())
       {
           return true;
       }
       else
       {
            qDebug() << "add product error !"
                     << query.lastError();
       }
*/
       return false;
}

//Permet de supprimer un produit
//En paramètre le nom du produit//

bool database::deleteProduit(const QString& nom)
{
    std::cout << "dans deleteproduit" << std::endl;
    m_bdd.open();

    QSqlQuery query;
    query.prepare("DELETE FROM produits WHERE nom=:nom");
    query.bindValue(":nom", nom);
    query.exec();
/*    if(query.exec())
       {
           return true;
       }
       else
       {
            qDebug() << "add product error !"
                     << query.lastError();
       }
*/
       m_bdd.close();
       return true;
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
QVector<Produit*>* database::getAllProduits(QString nom)
{
    std::cout << "Dans la methode getAllProduits" << std::endl;

    m_bdd.open();

    QVector<Produit*>* produits = new QVector<Produit*>;

    QSqlQuery query;
    query.prepare("SELECT rowid, * FROM produits WHERE nom = :nom");
    query.bindValue(":nom", nom);
    query.exec();

    do
    {
        if(query.next())
        {
            Produit * produit = new Produit();
            produits->push_back(produit);
            produit->id = query.value(0).toInt();
            produit->nom = query.value(1).toString();
            produit->libelle = query.value(2).toString();
            produit->prix = query.value(3).toFloat();
        }
    }while(query.next());

    m_bdd.close();

    return produits;
}

bool database::droitUtilisateur(const QString &utilisateur, const QString &motDePasse)
{
    std::cout << "Droit utilisateur" << std::endl;

    m_bdd.open();

    QSqlQuery query;
    query.prepare("SELECT droitUtilisateur FROM utilisateur WHERE login = :utilisateur and motDePasse = :motDePasse;");
    query.bindValue(":utilisateur", utilisateur);
    query.bindValue(":motDePasse", motDePasse);
    query.exec();

    do
    {
        if(query.next())
        {
            user.droit = query.value(3).toInt();
        }
    }while(query.next());

    m_bdd.close();

    return user.droit;
}










