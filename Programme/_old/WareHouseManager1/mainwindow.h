#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "Database.h"
#include <QVBoxLayout>
#include <QDialog>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QLabel>

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

//    void on_boutonConsulterFicheProduit_clicked();

//    void on_boutonModifier_clicked();

    //Bouton permettant de consulter une fiche article
    void on_boutonConsulterFicheProduit_clicked();

    //Bouton permettant d'inserer un utilisateur dans la base de donnée
    void on_pushButtonCreationUtilisateur_clicked();

    void on_boutonModifier_clicked();

    void on_pushButtonValidationModification_clicked();

    void on_pushButtonRecupererRowId_clicked();

private:
    //Permet d'afficher la fenetre login au démarrage de l'application
    void afficheFenetreLogin();

    //Permet de vérifier si le login est bien dans la base de donnée
    //En cours de dev
    void verificationLogin();

    //Permet d'afficher tout le stock
    //En cour de dev
    void creationVuStock();

    //Permet de renvoyer un popup pour avertir l'utilisateur si
    //la query est bien passée ou non.
    //Param bool etatQuery
    void popupQueryIsOkOrNot(bool etatQuery);

    //Création d'un pointeur ui
    Ui::MainWindow *ui;

    //Création de la bdd de type Database
    Database bdd;

    //Permet de créer la fenetre du login au démarrage de l'application
    QDialog * fenetreLogin = new QDialog();
    QLabel * labelBienvenue = new QLabel();
    QVBoxLayout * vbox = new QVBoxLayout();
    QLineEdit * login = new QLineEdit();
    QLineEdit * motDePasse = new QLineEdit();
    QDialogButtonBox * buttonBox = new QDialogButtonBox(
                QDialogButtonBox::Ok | QDialogButtonBox::Cancel
                );

};

#endif // MAINWINDOW_H
