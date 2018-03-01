#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include "Database.h"
#include <iostream>
#include "produit.h"
#include <string>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    bdd.CreateDatabase();

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

    vbox->addWidget(labelBienvenue);
    vbox->addWidget(login);
    vbox->addWidget(motDePasse);
    vbox->addWidget(buttonBox);


    labelBienvenue->setText("WareHouseManager");
    labelBienvenue->setFont(QFont( "Helvetica", 24));

    login->setPlaceholderText("Login");
    motDePasse->setPlaceholderText("Mot de passe");

    login->setFocus();

    fenetreLogin->setLayout(vbox);

    int result = fenetreLogin->exec();
    if(result == QDialog::Accepted)
    {
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
       QMessageBox::warning(this, "Etat de la requete",
                            "La requete n'est pas passée !",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this, "Etat de la requete",
                                 "Article supprimée !",QMessageBox::Ok);
   }
}

void MainWindow::verificationLogin()
{
        QVector<Utilisateur*>* users = bdd.GetDroitUtilisateur();
        for (int i = 0; i < users->size(); i++)
        {
            std::cout << (*users)[i]->GetId() << std::endl;
            std::cout << (*users)[i]->GetDroit() << std::endl;
        }

}

//Ajout d'un article utilisation du constructeur.
//Appel la méthode insertProduit
void MainWindow::on_boutonAjoutArticle_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article" << std::endl;

    Produit* produit = new Produit(ui->lineEditAjoutCodeArticle->text(),
                                   ui->lineEditAjoutDesignationArticle->text(),
                                   ui->lineEditAjoutPoidsArticle->text(),
                                   ui->lineEditAjoutEmplacementArticle->text());

    bdd.InsertProduit(*produit);
}

//Supprime un article dans la base de donnée
void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton supprimer d'un article" << std::endl;

//    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());

    popupQueryIsOkOrNot(bdd.DeleteProduit(ui->lineEditSupprimerArticle->text()));
}
//En cours de dev

void MainWindow::on_boutonModifier_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton modifier d'un article" << std::endl;

    QString codeArticle = ui->lineEditModifierArticle->text();

    QVector<Produit*>* produits = bdd.AfficheUnProduit(codeArticle);
    bdd.AfficheUnProduit(codeArticle);

    for (int i = 0; i < produits->size(); i++)
    {
        ui->lineEditModificationCodeArticle->
                setText((*produits)[i]->GetCodeArticle());
        ui->lineEditModificationDesignationArticle->
                setText((*produits)[i]->GetDesignationArticle());
        ui->lineEditModificationPoidsArticle->
                setText((*produits)[i]->GetPoidsArticle());
        ui->lineEditModificationEmplacementArticle->
                setText((*produits)[i]->GetEmplacementArticle());
    }
}

void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    QString codeArticle = ui->lineEditRechercher->text();
    QVector<Produit*>* produits = bdd.AfficheUnProduit(codeArticle);

    for (int i = 0; i < produits->size(); i++)
    {
        ui->afficheCodeArticle->setText((*produits)[i]->GetCodeArticle());
        ui->afficheDesignationArticle ->setText((*produits)[i]->GetDesignationArticle());
        ui->affichePoidsArticle->setText((*produits)[i]->GetPoidsArticle());
        ui->afficheEmplacementArticle->setText((*produits)[i]->GetEmplacementArticle());
    }
}

void MainWindow::on_pushButtonCreationUtilisateur_clicked()
{
     std::cout << "MODE DEBUG : Dans la methode creation utilisateur" << std::endl;

     Utilisateur* nouvelUtilistateur = new Utilisateur(ui->lineEditeCreationLogin->text(),
                                                       ui->lineEditeCreationMotDePasse->text());

     bdd.AjoutUtilisateur(*nouvelUtilistateur);
}

void MainWindow::on_pushButtonValidationModification_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Validation de modification" << std::endl;

    Produit* produit = new Produit(ui->lineEditModificationCodeArticle->text(),
                                   ui->lineEditModificationDesignationArticle->text(),
                                   ui->lineEditModificationPoidsArticle->text(),
                                   ui->lineEditModificationEmplacementArticle->text());

    bdd.UpdateProduit(*produit);
}

void MainWindow::on_pushButtonRecupererRowId_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Recuperer RowId" << std::endl;



int id = bdd.RecupererRowIdTableArticle(/*ui->lineEditCodeArticlePourRowId->text()*/);

        std::cout << id << std::endl;
}
