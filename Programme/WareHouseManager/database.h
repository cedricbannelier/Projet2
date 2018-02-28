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

    //Création de la base de donnée
    void createDatabase();

    //Ouverture de la base de donnée
    bool openDatabase();

    //Fermeture de la base de donnée
    bool closeDatabase();

    //Permet d'inserer un produit
    //Param codeArticle, designationArticle, poidsArticle, emplacementArticle
    void insertProduit(const QString &codeArticle, const QString &designationArticle, const QString &poidsArticle, const QString &emplacementArticle);

    //Permet de supprimer un produit
    //Param codeArticle
    bool deleteProduit(const QString &codeArticle);

    int droitUtilisateur();

    //Permet de mettre à jour un produit (en cours de dev)
//    bool updateProduit(Produit* produit);

    //Création d'un vecteur de vecteur de produit
    //Param nom
    QVector<Produit*>* getAllProduits(QString nom);

    //Création d'un vecteur de vecteur d'utilisateur
    QVector<utilisateur*>* getDroitUtilisateur();

    //Permet d'ajouter un utilistateur
    //En cours de dev il manque les droits !!
    void ajoutUtilisateur(const QString loginUtilisateur, const QString motDePasseUtilisateur);


private:

    //Création de m_bdd
    QSqlDatabase m_bdd;

    //Création d'un user
    utilisateur user;

};


#endif // DATABASE_H
