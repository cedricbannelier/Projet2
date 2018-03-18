#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "Database.h"
#include "login.h"
#include <QVBoxLayout>
#include <QDialog>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QLabel>
#include <QTableView>
#include "utilisateur.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    //Bouton permettant de valider l'ajout d'un article
    void on_boutonAjoutArticle_clicked();

    //Bouton permettant de valider la suppression d'un article
    void on_boutonSupprimer_clicked();

    //Bouton permettant de consulter une fiche article
    void on_boutonConsulterFicheProduit_clicked();

    //Bouton permettant d'inserer un utilisateur dans la base de donnée
    void on_pushButtonCreationUtilisateur_clicked();

    //Bouton permettant de modifier un article
    void on_boutonModifier_clicked();

    //Bouton permettant de valider la modification d'un article
    void on_pushButtonValidationModification_clicked();

    //Bouton permettant d'ajouter un emballage
    void on_AjoutEmballage_clicked();

    //Bouton permettant d'afficher le stock complet
    void on_ButonAfficheStockComplet_clicked();

    //Permet de mettre à jour les combobox
    //A Controller
    void miseAJour();

    //Bouton permettant d'ajouter un fournisseur
    void on_butonAjoutFournisseur_clicked();

    //Bouton permettant la validation d'une réception de commande
    void on_BoutonValiderReception_clicked();

    //Bouton permettant l'export d'un fichier CSV du stock
    void on_BoutonExportExcel_clicked();


    void on_BoutonExpedition_clicked();

    void on_actionQuitter_triggered();

private:

    //Permet de vider les lineEdit
    void ViderLineEdit();

    //Création d'un pointeur ui
    Ui::MainWindow *ui;

    //Création de la bdd de type Database
    Database bdd;

    Utilisateur * user;

    QSqlQueryModel modal;

};

#endif // MAINWINDOW_H
