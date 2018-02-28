#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include "database.h"
#include <iostream>
#include "produit.h"
#include <string>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    bdd.createDatabase();

    ui->setupUi(this);
        QMenu *menuFichier = menuBar()->addMenu("&Fichier");
        QAction *actionQuitter = new QAction("&Quitter", this);
        menuFichier->addAction(actionQuitter);
        connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));

        QMenu *menuEdition = menuBar()->addMenu("&Edition");
        QAction *actionCopier = new QAction("&Copier", this);
        menuEdition->addAction(actionCopier);

        QAction *actionColler = new QAction("&Coller", this);
        menuEdition->addAction(actionColler);

        QAction *actionCouper = new QAction("&Couper", this);
        menuEdition->addAction(actionCouper);

        QMenu *menuOptions = menuBar()->addMenu("&Options");
        QAction *option1 = new QAction("&option1", this);
        menuOptions->addAction(option1);

        QMenu *menuAide = menuBar()->addMenu("&Aide");
        QAction *aide1 = new QAction("&aide1", this);
        menuAide->addAction(aide1);

        afficheFenetreLogin();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficheFenetreLogin()
{
    QObject::connect(buttonBox, SIGNAL(accepted()), fenetreLogin, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), fenetreLogin, SLOT(reject()));

    vbox->addWidget(login);
    vbox->addWidget(motDePasse);
    vbox->addWidget(buttonBox);

    fenetreLogin->setLayout(vbox);

    int result = fenetreLogin->exec();
    if(result == QDialog::Accepted)
    {
        // handle values from fenetreLogin
        qDebug() << "OK";
        verificationLogin();
    }
    else
    {
        qDebug() << "Cancel";
    }
}

//Affiche une fenêtre pour savoir si la requete de suppression est bien passé.

void MainWindow::popupQueryIsOkOrNot(bool etatQuery)
{
    if(etatQuery)
    {
       QMessageBox::warning(this, "Etat de la requete", "La requete n'est pas passée !",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this, "Etat de la requete", "Article supprimée !",QMessageBox::Ok);
   }
}

void MainWindow::verificationLogin()
{
        QVector<utilisateur*>* users = bdd.getDroitUtilisateur();
        for (int i = 0; i < users->size(); i++)
        {
                std::cout << (*users)[i]->droit << std::endl;
        }
}


void MainWindow::on_boutonAjoutArticle_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article" << std::endl;

    bdd.insertProduit(ui->lineEditAjoutCodeArticle->text(),
                      ui->lineEditAjoutDesignationArticle->text(),
                      ui->lineEditAjoutPoidsArticle->text(),
                      ui->lineEditAjoutEmplacementArticle->text());

}
//Supprime un article dans la base de donnée
void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "Dans le bouton supprimer d'un article" << std::endl;

    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());

    popupQueryIsOkOrNot(false);


}
//En cours de dev
/*
void MainWindow::on_boutonModifier_clicked()
{
    std::cout << "Dans le bouton modifier d'un article" << std::endl;
    QVector<Produit*>* produits;
    (*produits)[0]->nom = "toto";
    bdd.updateProduit(ui->lineEditModifierArticle->text());
}
*/
void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    QVector<Produit*>* produits = bdd.getAllProduits(ui->lineEditRechercher->text());

    for (int i = 0; i < produits->size(); i++)
    {
        ui->afficheCodeArticle->setText((*produits)[i]->codeArticle);
        ui->afficheDesignationArticle ->setText((QString)(*produits)[i]->designationArticle);
        ui->affichePoidsArticle->setText(QString::number((*produits)[i]->poidsArticle));
        ui->afficheEmplacementArticle->setText((*produits)[i]->emplacementArticle);
    }
}

void MainWindow::on_pushButtonValidationUtilisateur_clicked()
{
     std::cout << "Dans la methode creation utilisateur" << std::endl;
     bdd.ajoutUtilisateur(ui->lineEditeCreationLogin->text(), ui->lineEditeCreationMotDePasse->text());
}

