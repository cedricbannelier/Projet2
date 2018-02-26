#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtSql/QtSql>
#include <vector>
#include "produit.h"
#include "utilisateur.h"

class database
{
public:
    database();
    void createDatabase();
    bool openDatabase();
    bool closeDatabase();
    bool insertProduit(const QString &nom, const QString &libelle, const QString &prix);
    bool deleteProduit(const QString &nom);
    bool droitUtilisateur(const QString &utilisateur, const QString &motDePasse);
//    bool updateProduit(Produit* produit);
    QVector<Produit*>* getAllProduits(QString nom);


private:
    QSqlDatabase m_bdd;//(mattribut c'est une convention de nommage pour les attributs de classe, tu rajoutes m devant)
    utilisateur user;

};


#endif // DATABASE_H
