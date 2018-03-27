#ifndef DATABASE_H
#define DATABASE_H

/**
  * @file database.h
  * @brief Gestion de toutes les requetes SQL
  * @author Cédric BANNELIER
  * @version 0.1b
**/

#include <QString>
#include <QtSql/QtSql>
#include <vector>

#include "article.h"
#include "utilisateur.h"
#include "emballage.h"
#include "fournisseur.h"
#include "livraison.h"

/**
 * @brief Classe Database permettant de gerer les requetes SQL.
 */
class Database
{
public:
    /**
     * @brief Database
     */
    Database();

    /**
     * @brief CreationAdministrateur
     * Permet l'insertion d'un utilisateur par défaut dans la base de données
     */
    void CreationAdministrateur();

    /**
     * @brief VuStockModal
     * Permet l'affichage de tout le stock qui est en base données.
     * Affiche la quantité en stock (Quantité livrée - quantité expédiée).
     * Affiche le code article, la designation, ...
     * @param modal
     */
    void VuStockModal(QSqlQueryModel *modal);

    /**
     * @brief CreateDatabase
     * Permet la création des tables
     */
    void CreateDatabase();

    /**
     * @brief OpenDatabase
     * Permet d'ouvrir la base données
     */
    void OpenDatabase();

    /**
     * @brief CloseDatabase
     * Permet de fermer la base données
     */
    void CloseDatabase();

    /**
     * @brief InsertProduit
     * Permet l'insertion d'un produit dans la base de données.
     * @param produitAInserDansLaBdd
     */
    void InsertProduit(Article &produitAInserDansLaBdd);

    /**
     * @brief InsertStockAZeroApresInsertProduit
     * Récupere la derniere insertion dans la table  article
     * Insert à zéro dans la table consulter
     */
    void InsertStockAZeroApresInsertProduit();

    /**
     * @brief DeleteProduit
     * Permet supprimer un eproduit dans la base de données
     * En cours de developpement
     * @param codeArticle
     * @return
     */
    bool DeleteProduit(const QString &codeArticle);

    /**
     * @brief UpdateProduit
     * Permet de mettre à jour un produit de la base de données
     * @param produit
     * @return
     */
    bool UpdateProduit(Article &produit);

    /**
     * @brief AfficheUnProduit
     * Permet d'afficher un produit
     * @param codeArticle
     * @return
     */
    QVector<Article*>* AfficheUnProduit(QString codeArticle);

    /**
     * @brief GetDroitUtilisateur
     * Permet de récuperer les droits et le login d'un utilisateur
     * @param nouvelUtilisateur
     * @return
     */
    Utilisateur *GetDroitUtilisateur(Utilisateur *nouvelUtilisateur);

    /**
     * @brief AjoutUtilisateur
     * Permet d'ajouter un utilisateur
     * @param user
     */
    void AjoutUtilisateur(Utilisateur& user);

    /**
     * @brief RecupererIdArticle
     * Permet de récuperer l'ID d'un article
     * @param codeArticle
     * @return
     */
    int RecupererIdArticle(QString codeArticle);

    /**
     * @brief RecupererIdFournisseur
     * Recupere l'ID du fournisseur
     * @param nomFournisseur
     * @return
     */
    int RecupererIdFournisseur(QString nomFournisseur);

    /**
     * @brief AjoutEmballage
     * Permet d'ajout un nouvel emballage
     * @param nouvelEmballage
     * @return
     */
    bool AjoutEmballage(Emballage& nouvelEmballage);

    /**
     * @brief ArticlePresentDansLaBddAvecId
     * Permet de savoir si l'article est présent dans la base de données
     * @param codeArticle
     * @return
     */
    bool ArticlePresentDansLaBddAvecId(QString codeArticle);

    /**
     * @brief ArticlePresentDansLaBddAvecLeCodeArticle
     * Permet de savoir si l'article est présent dans la base de données
     * @param codeArticle
     * @return
     */
    bool ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle);

    /**
     * @brief AjoutFournisseur
     * Permet d'ajout un fournisseur dans la base de données
     * @param nouvelFournisseur
     * @return
     */
    bool AjoutFournisseur(Fournisseur & nouvelFournisseur);

    /**
     * @brief ReceptionLivraison
     * Permet de faire une nouvelle livraison et l'enregistrer dans la base de données
     * @param nouvelleLivraionsDansBdd
     */
    void ReceptionLivraison(Livraison & nouvelleLivraionsDansBdd);

    /**
     * @brief FournisseurPresentDansLaBdd
     * Permet de savoir si le fournisseur est présent dans la base de données
     * @param nomFournisseur
     * @return
     */
    bool FournisseurPresentDansLaBdd(QString nomFournisseur);

    /**
     * @brief NouvelleExpedition
     * Permet de créer une nouvelle expédition et l'enregistrer dans la base de données
     * @param quantiteExpedition
     * @param numeroExpedition
     * @param idArticle
     */
    void NouvelleExpedition(int quantiteExpedition, QString numeroExpedition, int idArticle);

    /**
     * @brief ListeDesArticlesEnBdd
     * Permet de selectionner les articles en base de données
     * @param modal
     */
    void ListeDesArticlesEnBdd(QSqlQueryModel *modal);

    /**
     * @brief ListeDesFournisseursEnBdd
     * Permet de selectionner les fournisseurs en base de données
     * @param modal
     */
    void ListeDesFournisseursEnBdd(QSqlQueryModel *modal);

    /**
     * @brief QantiteTotal
     * Permet de sélectionner la quantité total en stock (Quantité réceptionnée - Quantité livrée)
     * @param idArticle
     * @return
     */
    int QantiteTotal(int idArticle);

private:
    /**
     * @brief m_bdd
     */
    QSqlDatabase m_bdd;

};


#endif // DATABASE_H
