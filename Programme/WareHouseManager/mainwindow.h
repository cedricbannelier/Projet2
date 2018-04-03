#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/**
  * @file mainwindow.h
  * @brief fenetre principale de l'application
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
     * En cours de developpement
     * Permettra de pouvoir se deconnecter et de revenir à la page de login
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
     * Permet de valider les modidifications et de les envoyes dans la base de données
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
     * Permet d'affiche tout le stock de la base de données dans un TabView
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
     * Permet d'ajouter une founisseur dans la base de données
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
     * Permet d'exporter le stock dans un fichier CSV
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
     * Test les droits de connection et grise les fonctionnalités en fonction des droits
     * Permet aussi la mise à jour des combobox
     */
    void on_tabWidget_currentChanged();

    /**
     * @brief on_actionA_props_triggered
     * Permet d'afficher une fenetre d'information sur le logiciel
     */
    void on_actionA_props_triggered();

    /**
     * @brief on_actionAfficheStock_triggered
     * Permet de sélectionner l'onglet Consulter stock de la tabWidget grace au menu
     */
    void on_actionAfficheStock_triggered();

    /**
     * @brief on_actionAjouter_triggered
     * Permet de sélectionner l'onglet Ajouter utilisateur de la tabWidget grace au menu
     */
    void on_actionAjouterUtilisateur_triggered();

    /**
     * @brief on_actionArticle_triggered
     * Permet de sélectionner l'onglet Ajouter article de la tabWidget grace au menu
     */
    void on_actionAjouterArticle_triggered();

    /**
     * @brief on_actionEmballage_triggered
     * Permet de sélectionner l'onglet Ajouter emballage de la tabWidget grace au menu
     */
    void on_actionAjouterEmballage_triggered();

    /**
     * @brief on_actionAjouterFournisseur_triggered
     * Permet de sélectionner l'onglet Ajouter fournisseur de la tabWidget grace au menu
     */
    void on_actionAjouterFournisseur_triggered();

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
     * Permet de faire une recherche par libelle
     */
    void on_pushButtonRechercherLibelle_clicked();

    /**
     * @brief on_comboBoxCodeArticle_currentIndexChanged
     * Lors de la selection d'un élement dans la combox, les linesedits se remplissent
     */
    void on_comboBoxCodeArticle_currentIndexChanged();

    /**
     * @brief on_comboBoxModifierArticle_currentIndexChanged
     * Lors de la selection d'un élement dans la combox, les linesedits se remplissent
     */
    void on_comboBoxModifierArticle_currentIndexChanged();

    void on_pushButtonSupprimerArticle_clicked();

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

    //Création de la bdd de type Database
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
