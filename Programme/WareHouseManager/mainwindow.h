#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/**
  * @file mainwindow.h
  * @brief fenêtre principale de l'application
  * @author Cédric BANNELIER
  * @version 0.1b
**/

#include <QMainWindow>
#include <QLineEdit>
#include <QDialog>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QLabel>
#include <QTableView>
#include <QStandardItemModel>
#include "utilisateur.h"
#include "database.h"
#include "login.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief Classe MainWindow qui herite de la QMainWindow. Fenêtre principale de l'application
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     Utilisateur user;

     /**
      * @brief afficheUtilisateur
      * Permet d'afficher qui est connecté avec quel droit.
      * L'affichage est fait dans la status bar
      */
     void afficheUtilisateur();

     /**
      * @brief The droits enum
      * Enumération pour 1 = Logisticien (droits restreints) / 2 = Administrateur (Tous les droits)
      * @enum
      */
     enum droits {           
       LOGISTICIEN = 1, /*!< 1 -> Droit logisiticien */
       ADMINISTRATEUR = 2, /*!< 2 -> Droit administrateur */
     };


public slots:

     /**
     * @brief on_actionSe_deconnecter_triggered
     * En cours de développement
     * Permettra de pouvoir se déconnecter et de revenir à la page de login
     * @return
     */
    int on_actionSe_deconnecter_triggered();

private slots:

    /**
     * @brief on_boutonAjoutArticle_clicked
     * Bouton permettant l'ajout d'un article en base de données
     */
    void on_boutonAjoutArticle_clicked();

    /**
     * @brief on_pushButtonCreationUtilisateur_clicked
     * Permet la création d'un utilisateur avec des droits
     * Soit administrateur
     * Soit logisticien
     */
    void on_pushButtonCreationUtilisateur_clicked();

    /**
     * @brief on_pushButtonValidationModification_clicked
     * Permet de valider les modidifications et de les envoyer dans la base de données
     * Modification possible :
     * Emplacement, Désignation, Poids
     */
    void on_pushButtonValidationModification_clicked();

    /**
     * @brief on_boutonAjoutEmballage_clicked
     * Permet d'ajouter un emballage dans la base données
     */
    void on_boutonAjoutEmballage_clicked();

    /**
     * @brief on_ButonAfficheStockComplet_clicked
     * Permet d'afficher tout le stock de la base de données dans un TabView
     */
    void on_ButonAfficheStockComplet_clicked();

    /**
     * @brief miseAJour
     * Permet la mise à jour d'un combobox
     * Cette méthode est à revoir
     */
    void miseAJour();

    /**
     * @brief on_butonAjoutFournisseur_clicked
     * Permet d'ajouter un fournisseur dans la base de données
     * Demande uniquement un nom
     */
    void on_butonAjoutFournisseur_clicked();

    /**
     * @brief on_BoutonValiderReception_clicked
     * Permet de valider une réception de commande
     */
    void on_BoutonValiderReception_clicked();

    /**
     * @brief on_BoutonExportExcel_clicked
     * Permet d'exporter le stock dans un fichier CSV qui sera dans le répertoire de l'exécutable
     */
    void on_BoutonExportExcel_clicked();

    /**
     * @brief on_BoutonExpedition_clicked
     * Permet de valider une expédition de stock
     */
    void on_BoutonExpedition_clicked();

    /**
     * @brief on_actionQuitter_triggered
     * Permet de quitter l'application via le menu->quitter
     */
    void on_actionQuitter_triggered();

    /**
     * @brief on_tabWidget_currentChanged
     * Teste les droits de connection et grise les fonctionnalités en fonction des droits
     * Permet aussi la mise à jour des combobox
     */
    void on_tabWidget_currentChanged();

    /**
     * @brief on_actionA_props_triggered
     * Permet d'afficher une fenêtre d'information sur le logiciel
     */
    void on_actionA_props_triggered();

    /**
     * @brief on_pushButtonModificationDroitUtilisateur_clicked
     * Permet de modifier les droits d'un utilisateur
     */
    void on_pushButtonModificationDroitUtilisateur_clicked();

    /**
     * @brief on_pushButtonRechercher_clicked
     * Permet de faire une recherche par code article
     */
    void on_pushButtonRechercherArticle_clicked();

    /**
     * @brief on_pushButtonRechercherLibelle_clicked
     * Permet de faire une recherche par libellé
     */
    void on_pushButtonRechercherLibelle_clicked();

    /**
     * @brief on_comboBoxCodeArticle_currentIndexChanged
     * Lors de la sélection d'un élement dans la combox, les linesedits se remplissent
     */
    void on_comboBoxCodeArticle_currentIndexChanged();

    /**
     * @brief on_pushButtonSupprimerArticle_clicked
     * Permet de supprimer un article
     */
    void on_pushButtonSupprimerArticle_clicked();

    /**
     * @brief on_BoutonImport_clicked
     * Permet de faire l'import d'un fichier texte de nom de fournisseur en base de données
     */
    void on_BoutonImport_clicked();

    /**
     * @brief on_tabWidget_tabBarClicked
     * Lors du clic sur la tabbar, cela permet une mise à jour des combobox ainsi que
     * sur la tabview d'affiche le stock directement
     */
    void on_tabWidget_tabBarClicked();

    /**
     * @brief on_spinBoxTaillePolice_valueChanged
     * Permet de changer en temps réel la taille de la tableview
     */
    void on_spinBoxTaillePolice_valueChanged();

    /**
     * @brief on_pushButtonModifier_clicked
     * Permet de déverouiller les champs suivants les droits pour la modification
     */
    void on_pushButtonModifier_clicked();

private:

    /**
     * @brief ViderLineEdit
     * Permet de vider les lineEdit
     */
    void ViderLineEdit();

    /**
     * @brief dateDuJour
     * Donne la date du jour
     * @return la date du jour
     */
    QString dateDuJour();

    /**
     * @brief ui
     */
    Ui::MainWindow *ui;

    /**
     * @brief bdd
     * Création de la variable bdd pour pouvoir appeler les fonctions de la classe database
     */
    Database bdd;

    /**
     * @brief modal
     * Permet la création d'un modal
     */
    QSqlQueryModel modal;

    /**
     * @brief modalArticle
     * Permet la création d'un modal pour les articles
     */
    QSqlQueryModel modalArticle;

    /**
     * @brief modalFournisseur
     * Permet la création d'un modal pour les fournisseurs
     */
    QSqlQueryModel modalFournisseur;

    /**
     * @brief modalUtilisateur
     */
    QSqlQueryModel modalUtilisateur;

    /**
     * @brief modalRechercheArticle
     */
    QSqlQueryModel modalRechercheArticle;

    /**
     * @brief modalRechercheArticleLibelle
     */
    QSqlQueryModel modalRechercheArticleLibelle;

};

#endif // MAINWINDOW_H
