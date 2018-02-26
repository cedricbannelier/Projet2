#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include "database.h"
#include <iostream>
#include "produit.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    bdd.createDatabase();

    ui->setupUi(this);
        QMenu *menuFichier = menuBar()->addMenu("&Fichier");
        QAction *actionQuitter = new QAction("&Quitter", this);
        menuFichier->addAction(actionQuitter);

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boutonAjoutProduit_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article" << std::endl;

    ui->boutonAjoutProduit->setEnabled(true);
    bdd.insertProduit(ui->lineEditAjoutArticle->text(),ui->lineEditAjoutArticleLibelle->text(), ui->lineEditAjoutArticlePrix->text());





}
/*
void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    std::cout << "Dans le bouton consulter une fiche produit" << std::endl;
    bdd.selectProduit("produit2");
}
*/

void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "Dans le bouton supprimer d'un article" << std::endl;
    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());
}

void MainWindow::on_boutonModifier_clicked()
{
    std::cout << "Dans le bouton modifier d'un article" << std::endl;
    bdd.updateProduit(ui->lineEditModifierArticle->text());
}


void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    QVector<Produit*>* produits = bdd.getAllProduits(ui->lineEditRechercher->text());

    ui->labelId->setText((QString)(*produits)[1]->id);

 /*   for (int i = 0; i < produits->size(); i++)
    {
        std::cout << (*produits)[i]->nom;
    }
*/
}
