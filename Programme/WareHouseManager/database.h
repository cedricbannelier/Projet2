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

#include "article.h"
#include "utilisateur.h"
#include "emballage.h"
#include "fournisseur.h"
#include "livraison.h"

/**
 * @brief Classe Database permettant de gerer les requetes SQL.
 * Dans cette classe toutes les requetes sont présentes.
 */
class Database
{
public:
    /**
     * @brief Database
     * Constructeur vide
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
     * Permet la création des tables. Les tables seront créées dans le repetoire courant
     * Lors de l'installation les tables sont créées dès le lancement.
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
     * Récupere la derniere insertion dans la table article
     * Insert à zéro dans la table consulter
     */
    void InsertStockAZeroApresInsertProduit();

    /**
     * @brief UpdateProduit
     * Permet de mettre à jour un produit de la base de données
     * @param produit
     */
    void UpdateProduit(Article &produit);

    /**
     * @brief AfficheUnProduit
     * Permet de récuperer les informations d'un article
     * @param codeArticle
     * @return l'objet article
     */
    Article * AfficheUnProduit(QString codeArticle);

    /**
     * @brief GetDroitUtilisateur
     * Permet de récuperer les droits et le login d'un utilisateur
     * @param nouvelUtilisateur
     * @return l'objet utilisateur
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
     * @return l'ID de l'article
     */
    int RecupererIdArticle(QString codeArticle);

    /**
     * @brief RecupererIdFournisseur
     * Recupere l'ID du fournisseur
     * @param nomFournisseur
     * @return l'ID du fournisseur
     */
    int RecupererIdFournisseur(QString nomFournisseur);

    /**
     * @brief AjoutEmballage
     * Permet d'ajout un nouvel emballage
     * @param nouvelEmballage
     * @return
     */
    void AjoutEmballage(Emballage& nouvelEmballage);

    /**
     * @brief ArticlePresentDansLaBddAvecId
     * Permet de savoir si l'article est présent dans la base de données
     * @param codeArticle
     * @return Faux = Présent / Vrai = Non Présent
     */
    bool ArticlePresentDansLaBddAvecId(QString codeArticle);

    /**
     * @brief ArticlePresentDansLaBddAvecLeCodeArticle
     * Permet de savoir si l'article est présent dans la base de données
     * @param codeArticle
     * @return Faux = Non présent / Vrai = Présent
     */
    bool ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle);

    /**
     * @brief AjoutFournisseur
     * Permet d'ajout un fournisseur dans la base de données
     * @param nouvelFournisseur
     */
    void AjoutFournisseur(Fournisseur & nouvelFournisseur);

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
     * @return Faux = Non Présent / Vrai = Présent
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
     * @return La quantité total (Quantité livrée - Quantité expédiée)
     */
    int QantiteTotal(int idArticle);

    /**
     * @brief PresenceUtilisateur
     * Permet de savoir si un utilisateur est présent.
     * Si l'utilisateur est déjà présent il ne sera pas créé. Si non présent l'utilisateur sera crée
     * @param login
     * @return Faux = Non Présent / Vrai = Présent
     */
    bool PresenceUtilisateur(QString login);

    /**
     * @brief ListeDesUtilisateurs
     * Récupere la liste des utilisateurs
     * Envoi les données dans un model
     * @param modal
     */
    void ListeDesUtilisateurs(QSqlQueryModel *modal);

    /**
     * @brief ModificationDroitUtilisateur
     * Permet de modifier les droits d'un utilisateur.
     * Le choix sera entre Logisiticien ou Administrateur.
     * @param nouveauDroitUtilisateur
     * @param login
     */
    void ModificationDroitUtilisateur(int nouveauDroitUtilisateur, QString login);

    /**
     * @brief RechercheProduit
     * Permet de faire une recherche par code article dans la base de données
     * L'utilisateur peut saisir soit le code article complet soit juste une lettre.
     * @param modal
     * @param codeArticle
     */
    void RechercheProduit(QSqlQueryModel *modal, QString codeArticle);

    /**
     * @brief RechercheProduitLibelle
     * Permet de faire une recherche par libellé dans la base de données.
     * L'utilisateur peut saisir soit le libelle exacte soit une partie ou juste une lettre.
     * @param modal
     * @param libelleArticle
     */
    void RechercheProduitLibelle(QSqlQueryModel *modal, QString libelleArticle);


    bool SupprimerArticle(QString codeArticle);

    bool LivraisonPresente(int idArticle);

private:
    /**
     * @brief m_bdd
     * Création d'une variable de type QSqlDatabase
     */
    QSqlDatabase m_bdd;


};


#endif // DATABASE_H
