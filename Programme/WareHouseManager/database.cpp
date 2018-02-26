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
    query.exec("CREATE TABLE IF NOT EXISTS produits (nom TEXT, libelle TEXT, prix REAL);");
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

bool database::deleteProduit(const QString& nom)
{
    std::cout << "dans deleteproduit" << std::endl;
    m_bdd.open();

    QSqlQuery query;
    query.prepare("DELETE FROM produits WHERE nom=:nom");
    query.bindValue(":nom", nom);
    if(query.exec())
       {
           return true;
       }
       else
       {
            qDebug() << "add product error !"
                     << query.lastError();
       }

       return true;

    m_bdd.close();
}

bool database::updateProduit(const QString &nom)
{
    std::cout << "dans updateproduit" << std::endl;
    m_bdd.open();
    QSqlQuery query;
    query.prepare("UPDATE produits SET nom=:nom");
    query.bindValue(":nom", nom);
    if(query.exec())
       {
           return true;
       }
       else
       {
            qDebug() << "add product error !"
                     << query.lastError();
       }

    m_bdd.close();

    return true;
}

QVector<Produit*>* database::getAllProduits(QString nom)
{
    std::cout << "Dans la methode getAllProduits" << std::endl;

    m_bdd.open();

    QVector<Produit*>* produits = new QVector<Produit*>;
    QSqlQuery query;
    query.prepare("SELECT * FROM produits WHERE nom=:nom");
    query.bindValue(":nom", nom);
    query.exec();

   do
    {
        if(query.next())
        {
            Produit * produit = new Produit();
            produits->push_back(produit);
//            int id = query.value(0).toInt();
//            QString nom = query.value(1).toString();
//            produit->id = query.value(0).toInt();
            produit->libelle = query.value(1).toString();
//            QMessageBox::information(0,QObject::tr("Info recup"), "id : " + QString::number(id) + "\nLibellé : " + nom);
        }
    } while(query.next());

    m_bdd.close();
    return produits;
}










