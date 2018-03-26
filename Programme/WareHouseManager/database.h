#ifndef DATABASE_H
#define DATABASE_H

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
     */
    void CreationAdministrateur();

    /**
     * @brief VuStockModal
     * @param modal
     */
    void VuStockModal(QSqlQueryModel *modal);

    /**
     * @brief CreateDatabase
     */
    void CreateDatabase();

    /**
     * @brief OpenDatabase
     */
    void OpenDatabase();

    /**
     * @brief CloseDatabase
     */
    void CloseDatabase();

    /**
     * @brief InsertProduit
     * @param produitAInserDansLaBdd
     */
    void InsertProduit(Article &produitAInserDansLaBdd);

    /**
     * @brief InsertStockAZeroApresInsertProduit
     */
    void InsertStockAZeroApresInsertProduit();

    /**
     * @brief DeleteProduit
     * @param codeArticle
     * @return
     */
    bool DeleteProduit(const QString &codeArticle);

    /**
     * @brief DroitUtilisateur
     * @return
     */
    int DroitUtilisateur();

    /**
     * @brief UpdateProduit
     * @param produit
     * @return
     */
    bool UpdateProduit(Article &produit);

    /**
     * @brief AfficheUnProduit
     * @param codeArticle
     * @return
     */
    QVector<Article*>* AfficheUnProduit(QString codeArticle);

    /**
     * @brief GetDroitUtilisateur
     * @param nouvelUtilisateur
     * @return
     */
    Utilisateur *GetDroitUtilisateur(Utilisateur *nouvelUtilisateur);

    /**
     * @brief AjoutUtilisateur
     * @param user
     */
    void AjoutUtilisateur(Utilisateur& user);

    /**
     * @brief RecupererIdArticle
     * @param codeArticle
     * @return
     */
    int RecupererIdArticle(QString codeArticle);

    /**
     * @brief RecupererIdFournisseur
     * @param nomFournisseur
     * @return
     */
    int RecupererIdFournisseur(QString nomFournisseur);

    /**
     * @brief AjoutEmballage
     * @param nouvelEmballage
     * @return
     */
    bool AjoutEmballage(Emballage& nouvelEmballage);

    /**
     * @brief AfficheLeStock
     */
    void AfficheLeStock();

    /**
     * @brief ArticlePresentDansLaBddAvecId
     * @param codeArticle
     * @return
     */
    bool ArticlePresentDansLaBddAvecId(QString codeArticle);

    /**
     * @brief ArticlePresentDansLaBddAvecLeCodeArticle
     * @param codeArticle
     * @return
     */
    bool ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle);

    /**
     * @brief AjoutFournisseur
     * @param nouvelFournisseur
     * @return
     */
    bool AjoutFournisseur(Fournisseur & nouvelFournisseur);

    /**
     * @brief ReceptionLivraison
     * @param nouvelleLivraionsDansBdd
     */
    void ReceptionLivraison(Livraison & nouvelleLivraionsDansBdd);

    /**
     * @brief FournisseurPresentDansLaBdd
     * @param nomFournisseur
     * @return
     */
    bool FournisseurPresentDansLaBdd(QString nomFournisseur);

    /**
     * @brief NouvelleExpedition
     * @param quantiteExpedition
     * @param numeroExpedition
     * @param idArticle
     */
    void NouvelleExpedition(int quantiteExpedition, QString numeroExpedition, int idArticle);

    /**
     * @brief ListeDesArticlesEnBdd
     * @param modal
     */
    void ListeDesArticlesEnBdd(QSqlQueryModel *modal);

    /**
     * @brief ListeDesFournisseursEnBdd
     * @param modal
     */
    void ListeDesFournisseursEnBdd(QSqlQueryModel *modal);

    /**
     * @brief QantiteTotal
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
