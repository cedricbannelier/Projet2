#ifndef DATABASE_H
#define DATABASE_H

#include "produit.h"
#include "utilisateur.h"
#include <QtSql/QtSql>

class Database
{
public:
    Database();

    //Création de la base de donnée
    void CreateDatabase();

    //Ouverture de la base de donnée
    bool OpenDatabase();

    //Fermeture de la base de donnée
    bool CloseDatabase();

    //Permet d'inserer un produit
    //Param codeArticle, designationArticle, poidsArticle, emplacementArticle
    void InsertProduit(Produit &produitAInserDansLaBdd);

    //Permet de supprimer un produit
    //Param codeArticle
    bool DeleteProduit(const QString &codeArticle);

    int DroitUtilisateur();

    //Permet de mettre à jour un produit (en cours de dev)
    bool UpdateProduit(Produit &produit);

    //Création d'un vecteur de vecteur de produit
    //Param nom
    QVector<Produit*>* AfficheUnProduit(QString codeArticle);

    //Création d'un vecteur de vecteur d'utilisateur
    QVector<Utilisateur*>* GetDroitUtilisateur();

    //Permet d'ajouter un utilistateur
    //En cours de dev il manque les droits !!
    void AjoutUtilisateur(Utilisateur& user);

    static Database bdd1;

private:

    //Création de m_bdd
    QSqlDatabase m_bdd;


    //Création d'un user
    Utilisateur user;

};

#endif // DATABASE_H
