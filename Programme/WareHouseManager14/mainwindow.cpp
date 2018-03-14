#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <iostream>
#include <QInputDialog>
#include <QFile>

#include "article.h"
#include "Database.h"
#include "utilisateur.h"
#include "emballage.h"
#include "fournisseur.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{

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

        ui->labelFournisseurInformations->hide();
        ui->labelAjoutArticleInformations->hide();

        ui->statusBar->showMessage(user->GetLogin());

 //       this->miseAJour();

}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
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

    fenetreLogin->setLayout(boxLayout);

    if(fenetreLogin->exec() == QDialog::Accepted)
    {
        if(verificationLogin() == false)
        {
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
*/
//Affiche une fenêtre pour savoir si la requete de suppression est bien passé.
void MainWindow::popupQueryIsOkOrNot(bool etatQuery)
{
    if(etatQuery)
    {
        QMessageBox::information(this, "Etat de la requete",
                                 "Article supprimé !",QMessageBox::Ok);

    }
    else
    {
        QMessageBox::warning(this, "Etat de la requete",
                             "La requete n'est pas passée !",QMessageBox::Ok);
   }
}
/*
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
        return 0;
}
*/
void MainWindow::on_boutonConsulterFicheProduit_clicked()
{
    std::cout << "MODE DEBUG : Dans consulter une fiche produit mainwindow.CPP" << std::endl;

        QString codeArticle = ui->lineEditRechercher->text().toUpper();
        QVector<Article*>* articles = bdd.AfficheUnProduit(codeArticle);

        for (int i = 0; i < articles->size(); i++)
        {
            ui->afficheCodeArticle->setText((*articles)[i]->GetCodeArticle());
            ui->afficheDesignationArticle ->setText((*articles)[i]->GetDesignationArticle());
            ui->affichePoidsArticle->setText(QString::number((*articles)[i]->GetPoidsArticle()));
            ui->afficheEmplacementArticle->setText((*articles)[i]->GetEmplacementArticle());
            ui->afficheEmballageArticle->setText((*articles)[i]->GetEmballageArticle());
        }
}

//Ajout d'un article utilisation du constructeur.
//Appel la méthode insertProduit
void MainWindow::on_boutonAjoutArticle_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article mainwindow.CPP" << std::endl;


    Article* article = new Article(ui->lineEditAjoutCodeArticle->text().toUpper(),
                                   ui->lineEditAjoutDesignationArticle->text(),
                                   ui->lineEditAjoutPoidsArticle->text().toInt(),
                                   ui->lineEditAjoutEmplacementArticle->text(),
                                   ui->comboBoxDimensionEmballage->currentText());

    if(ui->lineEditAjoutCodeArticle->text() == NULL ||
       ui->lineEditAjoutDesignationArticle->text() == NULL ||
       ui->lineEditAjoutPoidsArticle->text() == NULL ||
       ui->lineEditAjoutEmplacementArticle->text() == NULL)
    {
        ui->labelAjoutArticleInformations->setText("<font color=\"#FF0000\">Veuillez remplir tous les champs</font>");
        ui->labelAjoutArticleInformations->setAlignment(Qt::AlignCenter);
        ui->labelAjoutArticleInformations->show();
    }
    else
        if(bdd.ArticlePresentDansLaBddAvecLeCodeArticle(ui->lineEditAjoutCodeArticle->text().toUpper()) == false)
        {
        ui->labelAjoutArticleInformations->setText("<font color=\"#FF0000\">Le code article est déjà présent dans la base de données</font>");
        ui->labelAjoutArticleInformations->setAlignment(Qt::AlignCenter);
        ui->labelAjoutArticleInformations->show();
    }
    else
    {
        bdd.InsertProduit(*article);

        //Vide les champs après l'insertion
        ui->lineEditAjoutCodeArticle->clear();
        ui->lineEditAjoutDesignationArticle->clear();
        ui->lineEditAjoutPoidsArticle->clear();
        ui->lineEditAjoutEmplacementArticle->clear();

        ui->labelAjoutArticleInformations->setText("<font color=\"#088A08\">Votre article a bien été ajouté dans la base de données</font>");
        ui->labelAjoutArticleInformations->setAlignment(Qt::AlignCenter);
        ui->labelAjoutArticleInformations->show();
    }
}

//Supprime un article dans la base de donnée
void MainWindow::on_boutonSupprimer_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton supprimer d'un article mainwindow.CPP" << std::endl;

    if(ui->lineEditSupprimerArticle->text().toUpper() == NULL)
    {
        QMessageBox::warning(this, "Warning", "Veuillez saisir un code article",QMessageBox::Ok);
    }
    else
    if(bdd.ArticlePresentDansLaBddAvecId(ui->lineEditSupprimerArticle->text().toUpper()) == false)
    {
        QMessageBox::warning(this, "Warning", "Le code article saisi n'est pas dans la base de données",QMessageBox::Ok);
    }
    else
    {
        bdd.DeleteProduit(ui->lineEditSupprimerArticle->text().toUpper());
        QMessageBox::information(this, "Information", "Votre article a été supprimé avec succès",QMessageBox::Ok);
    }

 //   popupQueryIsOkOrNot(bdd.DeleteProduit(ui->lineEditSupprimerArticle->text()));
}

//En cours de dev
void MainWindow::on_boutonModifier_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton modifier d'un article mainwindow.CPP" << std::endl;

    QString codeArticle = ui->lineEditModifierArticle->text().toUpper();

    QVector<Article*>* articles = bdd.AfficheUnProduit(codeArticle);

    for (int i = 0; i < articles->size(); i++)
    {
        ui->lineEditModificationCodeArticle->
                setText((*articles)[i]->GetCodeArticle());
        ui->lineEditModificationDesignationArticle->
                setText((*articles)[i]->GetDesignationArticle());
        ui->lineEditModificationPoidsArticle->
                setText(QString::number((*articles)[i]->GetPoidsArticle()));
        ui->lineEditModificationEmplacementArticle->
                setText((*articles)[i]->GetEmplacementArticle());
        ui->comboBoxModifierDimensionEmballage->addItem((*articles)[i]->GetEmballageArticle());
    }
}

//Création d'un utilisateur
void MainWindow::on_pushButtonCreationUtilisateur_clicked()
{
     std::cout << "MODE DEBUG : Dans la methode creation utilisateur mainwindow.CPP" << std::endl;

     Utilisateur* nouvelUtilistateur = new Utilisateur(ui->lineEditeCreationLogin->text(),
                                                       ui->lineEditeCreationMotDePasse->text(),
                                                       ui->comboBoxChoixDroitUtilisateur->currentIndex()+1);

     bdd.AjoutUtilisateur(*nouvelUtilistateur);
}

//Mise à jour d'un article
void MainWindow::on_pushButtonValidationModification_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Validation de modification mainwindow.CPP" << std::endl;

    Article* article = new Article(ui->lineEditModificationCodeArticle->text().toUpper(),
                                   ui->lineEditModificationDesignationArticle->text(),
                                   ui->lineEditModificationPoidsArticle->text().toInt(),
                                   ui->lineEditModificationEmplacementArticle->text(),
                                   ui->comboBoxModifierDimensionEmballage->currentText());

    bdd.UpdateProduit(*article);
}

void MainWindow::on_AjoutEmballage_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode ajouter emballage mainwindow.CPP" << std::endl;

    Emballage* nouvelEmballage = new Emballage(ui->comboBoxTypeEmballage->currentText(),
                                               ui->comboBoxHauteurEmballage->currentText().toInt(),
                                               ui->comboBoxLargeurEmballage->currentText().toInt(),
                                               ui->comboBoxLongueurEmballage->currentText().toInt());
    bdd.AjoutEmballage(*nouvelEmballage);
    miseAJour();
}

//Affiche tout le stock meme avec des quantités à NULL ou à zéro
void MainWindow::on_ButonAfficheStockComplet_clicked()
{

//    bdd.OpenDatabase();
    QSqlQuery * query = new QSqlQuery();

    query->prepare("SELECT "
                   "SUM(consulter.qteStock + livrer.qteLivree) AS 'Qte Phy Totale',"
                   "SUM(livrer.qteLivree) AS 'QTE LIVRE', "
                   "article.codeArticle as Référence, "
                   "article.designationArticle as Libelle, "
                   "article.poidsArticle as Poids, "
                   "article.emplacementArticle as Empl, "
                   "emballage.typeEmballage as Type, "
                   "emballage.hauteurEmballage as H, "
                   "emballage.largeurEmballage as l, "
                   "longueurEmballage as L "
                   "FROM article "
                   "LEFT JOIN consulter ON article.idArticle = consulter.idArticle "
                   "LEFT JOIN emballage ON article.idEmballage = emballage.idEmballage "
                   "LEFT JOIN livrer ON article.idArticle = livrer.idArticle");
    query->exec();    
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    ui->tableView->resizeColumnsToContents();
//    bdd.CloseDatabase();
}

//Permet de selectionner tous les types d'emballage et affiche l'ID
void MainWindow::miseAJour()
{
//        bdd.OpenDatabase();

    QSqlQuery query;

        query.exec("SELECT largeurEmballage || longueurEmballage || hauteurEmballage AS 'l * L * h' FROM emballage;");
        int i = 0;

        //On vide la combobox
        ui->comboBoxDimensionEmballage->clear();

        //On remplit la comobox
        while(query.next())
        {
            ui->comboBoxDimensionEmballage->addItem(query.value(0).toString(), i);
            i++;

        }
//        bdd.CloseDatabase();
}

void MainWindow::on_butonAjoutFournisseur_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode ajouter un fournisseur mainwindow.CPP" << std::endl;

    Fournisseur* nouvelFournisseur = new Fournisseur(ui->lineEditAjoutFournisseur->text().toUpper());

    if(ui->lineEditAjoutFournisseur->text().toUpper() == NULL)
    {
        ui->labelFournisseurInformations->setText("<font color=\"#FF0000\">Veuillez saisir un fournisseur</font>");
        ui->labelFournisseurInformations->setAlignment(Qt::AlignCenter);
        ui->labelFournisseurInformations->show();
    }
    else
        if(bdd.FournisseurPresentDansLaBdd(ui->lineEditAjoutFournisseur->text().toUpper()) == false)
        {
            ui->labelFournisseurInformations->setText("<font color=\"#FF0000\">Le fournisseur est déjà présent dans la base de données</font>");
            ui->labelFournisseurInformations->setAlignment(Qt::AlignCenter);
            ui->labelFournisseurInformations->show();
    }
    else
    {
        bdd.AjoutFournisseur(*nouvelFournisseur);

        //Vide les champs après l'insertion
        ui->lineEditAjoutFournisseur->clear();

        ui->labelFournisseurInformations->setText("<font color=\"#088A08\">Le fournisseur a été créé</font>");
        ui->labelFournisseurInformations->setAlignment(Qt::AlignCenter);
        ui->labelFournisseurInformations->show();
    }
}

void MainWindow::on_BoutonValiderReception_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode reception commande mainwindow.CPP" << std::endl;

    int idArticle = bdd.RecupererIdArticle(ui->lineEditArticleLivre->text().toUpper());

    int idFournisseur = bdd.RecupererIdFournisseur(ui->lineEditFournisseurLivraison->text().toUpper());


    if(idArticle == 0)
    {
        QMessageBox::warning(this, "Code Article INCONNU", "Le code article saisi n'est pas dans la base de données. ""<br>"""
                                                           "Veuillez l'ajouter avant de faire la réception",QMessageBox::Ok);
    }
    else
        if(idFournisseur == 0)

   {
       QMessageBox::warning(this, "Code Fournisseur INCONNU", "Le fournisseur saisi n'est pas dans la base de données.""<br>"" "
                                                              "Veuillez l'ajouter avant de faire la réception",QMessageBox::Ok);
    }
        else
        {
            bdd.ReceptionLivraison(ui->lineEditQteLivree->text(),
                                   ui->lineEditNumeroLivraison->text(),
                                   ui->lineEditDateLivraison->text().toInt(),
                                   idArticle,
                                   idFournisseur);

            ui->lineEditQteLivree->clear();
            ui->lineEditNumeroLivraison->clear();
            ui->lineEditDateLivraison->clear();
            ui->lineEditFournisseurLivraison->clear();
            ui->lineEditArticleLivre->clear();

            QMessageBox::information(this, "Réception faite", "La réception a été validée",QMessageBox::Ok);
        }

}

void MainWindow::on_BoutonExportExcel_clicked()
{
    on_ButonAfficheStockComplet_clicked();

    QString textData;
    int lignes = modal->rowCount();
    int colonnes = modal->columnCount();

    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
                textData += modal->data(modal->index(i,j)).toString();
                textData += "; ";      // ; pour la séparation
        }
        textData += "\n";             // retour à la ligne
    }
    QFile csvFile("test.csv");

    if(csvFile.open(QIODevice::WriteOnly | QIODevice::Append)) {

        QTextStream out(&csvFile);
        out << textData;

        csvFile.close();
    }
}

/*
SELECT
SUM(consulter.qteStock + livrer.qteLivree) AS 'QteT',
consulter.qteStock AS 'QTE consulter',
SUM(livrer.qteLivree) AS 'QTE LIVRE',
consulter.qteStock as QTE,
article.codeArticle as Référence,
article.designationArticle as Libelle,
article.poidsArticle as Poids,
article.emplacementArticle as Empl,
emballage.typeEmballage as Type,
emballage.hauteurEmballage as H,
emballage.largeurEmballage as l,
longueurEmballage as L
FROM article
LEFT JOIN consulter ON article.idArticle = consulter.idArticle
LEFT JOIN emballage ON article.idEmballage = emballage.idEmballage
LEFT JOIN livrer ON article.idArticle = livrer.idArticle
WHERE article.idArticle=14;
*/
