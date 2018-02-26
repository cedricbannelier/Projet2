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
    }
    else
    {
        qDebug() << "Cancel";
    }
}

void MainWindow::verificationLogin()
{
        bdd.droitUtilisateur("cedric", "cedric");
}


void MainWindow::on_boutonAjoutProduit_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article" << std::endl;

    ui->boutonAjoutProduit->setEnabled(true);
    bdd.insertProduit(ui->lineEditAjoutArticle->text(),ui->lineEditAjoutArticleLibelle->text(), ui->lineEditAjoutArticlePrix->text());
}

void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "Dans le bouton supprimer d'un article" << std::endl;

    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());
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
        ui->afficheCodeArticle->setText((*produits)[i]->nom);
        ui->afficheLibelle ->setText((QString)(*produits)[i]->libelle);
        ui->affichePrix->setText(QString::number((*produits)[0]->prix));
    }
}
