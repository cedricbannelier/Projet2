#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtSql/QtSql>
#include <vector>

#include "article.h"
#include "utilisateur.h"
#include "emballage.h"
#include "fournisseur.h"

class Database
{
public:
    Database();

    //Création de m_bdd
    QSqlDatabase m_bdd;

    void VuStockModal(QSqlQueryModel *modal);

    //Création de la base de donnée
    void CreateDatabase();

    //Ouverture de la base de donnée
    void OpenDatabase();

    //Fermeture de la base de donnée
    void CloseDatabase();

    //Permet d'inserer un produit
    //Param codeArticle, designationArticle, poidsArticle, emplacementArticle
    void InsertProduit(Article &produitAInserDansLaBdd);

    void InsertStockAZeroApresInsertProduit();

    //Permet de supprimer un produit
    //Param codeArticle
    bool DeleteProduit(const QString &codeArticle);

    int DroitUtilisateur();

    //Permet de mettre à jour un produit (en cours de dev)
    bool UpdateProduit(Article &produit);

    //Création d'un vecteur de vecteur de produit
    //Param nom
    QVector<Article*>* AfficheUnProduit(QString codeArticle);

    //Création d'un vecteur de vecteur d'utilisateur
    int GetDroitUtilisateur(QString loginSaisie, QString mdpSaisie);

    //Permet d'ajouter un utilistateur
    //En cours de dev il manque les droits !!
    void AjoutUtilisateur(Utilisateur& user);

    int RecupererIdArticle(QString codeArticle);

    int RecupererIdFournisseur(QString nomFournisseur);

    bool AjoutEmballage(Emballage& nouvelEmballage);

    void AfficheLeStock();

    bool ArticlePresentDansLaBddAvecId(QString codeArticle);
    bool ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle);

    bool AjoutFournisseur(Fournisseur & nouvelFournisseur);

    void ReceptionLivraison(QString qteLivree, QString numeroLivraison, int dateLivraison, int idArticle, int idFournisseur);

    bool FournisseurPresentDansLaBdd(QString nomFournisseur);

private:



};


#endif // DATABASE_H
