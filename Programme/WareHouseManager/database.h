#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtSql/QtSql>
#include <vector>
#include "produit.h"

class database
{
public:
    database();
    void createDatabase();
    bool openDatabase();
    bool closeDatabase();
    bool insertProduit(const QString &nom, const QString &libelle, const QString &prix);
    bool deleteProduit(const QString &nom);
    bool updateProduit(const QString &nom);
    QVector<Produit*>* getAllProduits(QString nom);


private:
    QSqlDatabase m_bdd;//(mattribut c'est une convention de nommage pour les attributs de classe, tu rajoutes m devant)

};


#endif // DATABASE_H
