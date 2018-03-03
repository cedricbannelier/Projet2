#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

#include <iostream>

#include <QInputDialog>

#include "produit.h"
#include "Database.h"
#include "utilisateur.h"

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

        this->hide();
        this->afficheFenetreLogin();


        if (this->fermeFenetre)
        {
            this->close();
        }
        else
        {
            this->show();
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficheFenetreLogin()
{
    QObject::connect(buttonBox, SIGNAL(accepted()), fenetreLogin, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), fenetreLogin, SLOT(reject()));

    boxLayout->addWidget(labelBienvenue);
    boxLayout->addWidget(labelAvertissement);
    boxLayout->addWidget(login);
    boxLayout->addWidget(motDePasse);
    boxLayout->addWidget(buttonBox);


    labelBienvenue->setText("WareHouseManager");
    labelBienvenue->setFont(QFont( "Helvetica", 24));

    labelAvertissement->hide();

    login->setPlaceholderText("Login");
    motDePasse->setPlaceholderText("Mot de passe");
    motDePasse->setEchoMode(QLineEdit::Password);

    login->setFocus();

    fenetreLogin->setLayout(boxLayout);

    int result = fenetreLogin->exec();
    MainWindow::hide();



    if(result == QDialog::Accepted)
    {
        bool a = verificationLogin();
        qDebug() << "OK";
        if(a)
        {
            MainWindow::show();
        }
        else{
            labelAvertissement->show();
            labelAvertissement->setText("Mauvais login ou mot de passe");
        }

    }
    else
    {
        fermeFenetre= true;
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

bool MainWindow::verificationLogin()
{
        std::cout << "MODE DEBUG : Dans verification login mainwindow.CPP" << std::endl;

        QString loginEntreParUtilisateur = login->text();
        QString motDePasseEntreParUtilisateur = motDePasse->text();

        QVector<Utilisateur*>* users = bdd.GetDroitUtilisateur(loginEntreParUtilisateur,
                                                               motDePasseEntreParUtilisateur);

        //On parcourt et on affiche uniquement le login dans la status bar
        for (int i = 0; i < users->size(); i++)
        {
            if((*users)[i]->GetLogin() == NULL)
            {
                return false;
            }
            else
            {
                ui->statusBar->showMessage("Connexion : " + (QString)((*users)[i]->GetLogin()));
                return true;
            }

        }
}

void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    std::cout << "MODE DEBUG : Dans consulter une fiche produit mainwindow.CPP" << std::endl;

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

//Ajout d'un article utilisation du constructeur.
//Appel la méthode insertProduit
void MainWindow::on_boutonAjoutArticle_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article mainwindow.CPP" << std::endl;

    Produit* produit = new Produit(ui->lineEditAjoutCodeArticle->text(),
                                   ui->lineEditAjoutDesignationArticle->text(),
                                   ui->lineEditAjoutPoidsArticle->text(),
                                   ui->lineEditAjoutEmplacementArticle->text());

    bdd.InsertProduit(*produit);

}

//Supprime un article dans la base de donnée
void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton supprimer d'un article mainwindow.CPP" << std::endl;

//    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());

    popupQueryIsOkOrNot(bdd.DeleteProduit(ui->lineEditSupprimerArticle->text()));
}
//En cours de dev

void MainWindow::on_boutonModifier_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton modifier d'un article mainwindow.CPP" << std::endl;

    QString codeArticle = ui->lineEditModifierArticle->text();

    QVector<Produit*>* produits = bdd.AfficheUnProduit(codeArticle);

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

void MainWindow::on_pushButtonCreationUtilisateur_clicked()
{
     std::cout << "MODE DEBUG : Dans la methode creation utilisateur mainwindow.CPP" << std::endl;

     Utilisateur* nouvelUtilistateur = new Utilisateur(ui->lineEditeCreationLogin->text(),
                                                       ui->lineEditeCreationMotDePasse->text(),
                                                       ui->comboBoxChoixDroitUtilisateur->currentIndex());

     bdd.AjoutUtilisateur(*nouvelUtilistateur);
}

void MainWindow::on_pushButtonValidationModification_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Validation de modification mainwindow.CPP" << std::endl;

    Produit* produit = new Produit(ui->lineEditModificationCodeArticle->text(),
                                   ui->lineEditModificationDesignationArticle->text(),
                                   ui->lineEditModificationPoidsArticle->text(),
                                   ui->lineEditModificationEmplacementArticle->text());

    bdd.UpdateProduit(*produit);
}

void MainWindow::on_pushButtonRecupererRowId_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Recuperer RowId mainwindow.CPP" << std::endl;

    int id = bdd.RecupererRowIdTableArticle(ui->lineEditCodeArticlePourRowId->text());

    std::cout << id << std::endl;
}
