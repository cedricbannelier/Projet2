#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <iostream>
#include <QInputDialog>
#include <QFile>
#include <QFileDialog>

#include "article.h"
#include "database.h"
#include "utilisateur.h"
#include "emballage.h"
#include "fournisseur.h"
#include "livraison.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setWindowIcon(QIcon(":/warehouse.png"));
    ui->setupUi(this);
    ui->pushButtonModifier->setIcon(QIcon(":/icones/crayon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficheUtilisateur()
{
    ui->statusBar->showMessage("Connecté en tant que : " + user.GetLogin() + " | "
                               + "Droit : " + QString::number(user.GetDroit()));
}

void MainWindow::on_boutonAjoutArticle_clicked()
{
    Article* article = new Article(ui->lineEditAjoutCodeArticle->text().toUpper(),
                                   ui->lineEditAjoutDesignationArticle->text(),
                                   ui->lineEditAjoutPoidsArticle->text().toInt(),
                                   ui->lineEditAjoutEmplacementArticle->text(),
                                   ui->comboBoxDimensionEmballage->currentText());

    if(ui->lineEditAjoutCodeArticle->text().isEmpty() ||
       ui->lineEditAjoutDesignationArticle->text().isEmpty() ||
       ui->lineEditAjoutPoidsArticle->text().isEmpty() ||
       ui->lineEditAjoutEmplacementArticle->text().isEmpty() ||
       ui->comboBoxDimensionEmballage->currentText().isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Veuillez remplir tous les champs",QMessageBox::Ok);
    }
    else if(bdd.ArticlePresentDansLaBddAvecLeCodeArticle(ui->lineEditAjoutCodeArticle->text().toUpper()) == false)
    {
        QMessageBox::warning(this, "Warning", "Le code article est déjà présent dans la base de données",QMessageBox::Ok);
    }
    else
    {
        bdd.InsertProduit(*article);
        ViderLineEdit();
        QMessageBox::information(this, "Information", "Votre article a bien été ajouté dans la base de données",QMessageBox::Ok);
    }
}

void MainWindow::on_pushButtonCreationUtilisateur_clicked()
{
     Utilisateur* nouvelUtilistateur = new Utilisateur(ui->lineEditeCreationLogin->text(),
                                                       ui->lineEditeCreationMotDePasse->text(),
                                                       ui->comboBoxChoixDroitUtilisateur->currentIndex()+1);

     if(ui->lineEditeCreationLogin->text().isEmpty() || ui->lineEditeCreationMotDePasse->text().isEmpty())
     {
        QMessageBox::warning(this, "Warning", "Veuillez remplir tous les champs",QMessageBox::Ok);
     }
     else if(bdd.PresenceUtilisateur(ui->lineEditeCreationLogin->text()))
     {
         bdd.AjoutUtilisateur(*nouvelUtilistateur);
         QMessageBox::information(this, "Information", "L'utilisateur a été crée",QMessageBox::Ok);
     }
     else
     {
        QMessageBox::warning(this, "Warning", "L'utilisateur est déjà dans la base de données",QMessageBox::Ok);
     }
}

void MainWindow::on_boutonAjoutEmballage_clicked()
{
    Emballage* nouvelEmballage = new Emballage(ui->comboBoxTypeEmballage->currentText(),
                                               ui->comboBoxHauteurEmballage->currentText().toInt(),
                                               ui->comboBoxLargeurEmballage->currentText().toInt(),
                                               ui->comboBoxLongueurEmballage->currentText().toInt());
    bdd.AjoutEmballage(*nouvelEmballage);
    miseAJour();
}

void MainWindow::on_ButonAfficheStockComplet_clicked()
{
    ui->tableView->setFont(QFont("Tahoma",ui->spinBoxTaillePolice->value()));
    bdd.VuStockModal(&this->modal);
    ui->tableView->setModel(&this->modal);
}

//Permet de selectionner tous les types d'emballage et affiche l'ID
//A revoir
void MainWindow::miseAJour()
{
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
}

void MainWindow::on_butonAjoutFournisseur_clicked()
{
    Fournisseur* nouvelFournisseur = new Fournisseur(ui->lineEditAjoutFournisseur->text().toUpper());

    if(ui->lineEditAjoutFournisseur->text().toUpper() == NULL)
    {
        QMessageBox::warning(this, "Warning", "Veuillez saisir un fournisseur",QMessageBox::Ok);
    }
    else
        if(bdd.FournisseurPresentDansLaBdd(ui->lineEditAjoutFournisseur->text().toUpper()) == false)
        {

            QMessageBox::warning(this, "Warning", "Le fournisseur est déjà présent dans la base de données",QMessageBox::Ok);
        }
    else
    {
        bdd.AjoutFournisseur(*nouvelFournisseur);
        ViderLineEdit();
        QMessageBox::information(this, "Warning", "Le fournisseur a été créé",QMessageBox::Ok);
    }
}

void MainWindow::on_BoutonValiderReception_clicked()
{
    int idArticle = bdd.RecupererIdArticle(ui->comboBoxCodeArticleReceptionCommande->currentText());
    int idFournisseur = bdd.RecupererIdFournisseur(ui->comboBoxFournisseur->currentText());
    int qteSaisie = ui->lineEditQteLivree->text().toInt();

    if(ui->lineEditNumeroLivraison->text().isEmpty() ||
       ui->lineEditQteLivree->text().isEmpty() ||
       ui->comboBoxCodeArticleReceptionCommande->currentText().isEmpty() ||
       ui->comboBoxFournisseur->currentText().isEmpty())
    {
        QMessageBox::warning(this, "Champs", "Veuillez saisir tous les champs",QMessageBox::Ok);
    }
    //On test si la quantité est à zéro ou négative
    else if(qteSaisie <= 0)
    {
        QMessageBox::warning(this, "Qantité", "La quantité saisie est erronnée",QMessageBox::Ok);
    }
    else
    {
        Livraison * nouvelleLivraison = new Livraison(ui->lineEditQteLivree->text().toInt(),
                                                      ui->lineEditNumeroLivraison->text(),
                                                      ui->calendarWidget->selectedDate().toString(),
                                                      idArticle,
                                                      idFournisseur);
        bdd.ReceptionLivraison(*nouvelleLivraison);

        ViderLineEdit();

        QMessageBox::information(this, "Réception faite", "La réception a été validée",QMessageBox::Ok);
    }
}

void MainWindow::on_BoutonExportExcel_clicked()
{
    on_ButonAfficheStockComplet_clicked();

    QFile csvFile("exportStock.csv");

    if(!(csvFile.open(QIODevice::WriteOnly)))
        return;

    QTextStream out(&csvFile);

    int lignes = modal.rowCount();
    int colonnes = modal.columnCount();

    out << "Qte Phy Total;" << "Qte Livree;" << "Qte Exp;" << "Reference;"
        << "Libelle;" << "Poids unitaire;" << "Emplacement;" << "\n";

    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
                out << modal.data(modal.index(i,j)).toString();
                out << "; ";      // ; pour la séparation
        }
        out << "\n";             // retour à la ligne
    }

    QMessageBox::information(this, "Export", "Export stock OK");
}

void MainWindow::ViderLineEdit()
{
    foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>())
    {
       lineEdit->clear();
    }

}

void MainWindow::on_BoutonExpedition_clicked()
{
    int quantiteExpedition = ui->lineEditQuantiteExpedition->text().toInt();
    QString numeroExpedition = ui->lineEditNumeroExpedition->text();
    int idArticle = bdd.RecupererIdArticle(ui->comboBoxCodeArticleExpedition->currentText());
    int quantiteEnStock = bdd.QantiteTotal(idArticle);
    QString message = QString("La quantité saisie doit être inf. à la quanité en stock. Il reste que : %1 en stock").arg(quantiteEnStock);

    if (ui->lineEditQuantiteExpedition->text().isEmpty() ||
        ui->lineEditNumeroExpedition->text().isEmpty() ||
        ui->comboBoxCodeArticleExpedition->currentText().isEmpty())
    {
        QMessageBox::warning(this, "Champs", "Veuillez saisir tous les champs",QMessageBox::Ok);
    }
    else if (quantiteExpedition <= 0)
    {
        QMessageBox::warning(this, "Quantité", "La quantité saisie doit être sup. à 0",QMessageBox::Ok);
    }
    else if (quantiteExpedition > quantiteEnStock)
    {
        QMessageBox::warning(this, "Quantité", message ,QMessageBox::Ok);
    }
    else
    {
        bdd.NouvelleExpedition(quantiteExpedition, numeroExpedition, idArticle);
        QMessageBox::information(this, "Expédition faite", "L'expédition a été validée",QMessageBox::Ok);
        ViderLineEdit();
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    qApp->quit();
}

//En cours de dev
int MainWindow::on_actionSe_deconnecter_triggered()
{
    int a = 1;
    return a;
}

void MainWindow::on_tabWidget_currentChanged()
{
    if(user.GetDroit() == LOGISTICIEN)
    {
        ui->pushButtonModifier->setDisabled(true);
        ui->tabCreationUtilisateur->setDisabled(true);
        ui->tabAjouter->setDisabled(true);
        ui->tabSupprimerArticle->setDisabled(true);
    }

    bdd.ListeDesArticlesEnBdd(&this->modalArticle);
    ui->comboBoxCodeArticle->setModel(&this->modalArticle);
    ui->comboBoxCodeArticleReceptionCommande->setModel(&this->modalArticle);
    ui->comboBoxCodeArticleExpedition->setModel(&this->modalArticle);
    ui->comboBoxArticleSupprimer->setModel(&this->modalArticle);

    bdd.ListeDesFournisseursEnBdd(&this->modalFournisseur);
    ui->comboBoxFournisseur->setModel(&this->modalFournisseur);

    bdd.ListeDesUtilisateurs(&this->modalUtilisateur);
    ui->comboBoxUtilisateur->setModel(&this->modalUtilisateur);

//    ui->comboBoxModifierDimensionEmballage->setModel(&this->modalArticle);

    ui->calendarWidget->setMaximumDate(QDate::currentDate());
    ui->calendarWidget->setGridVisible(true);
}

QString MainWindow::dateDuJour()
{
    QString dateDuJour = QDateTime::currentDateTime().toString("dddd dd MMMM yyyy");
    return dateDuJour;
}

void MainWindow::on_pushButtonModificationDroitUtilisateur_clicked()
{
    QString login = ui->comboBoxUtilisateur->currentText();
    int nouveauDroit = ui->comboBoxChoixDroitUtilisateurModif->currentIndex()+1;

    bdd.ModificationDroitUtilisateur(nouveauDroit, login);

    QMessageBox::information(this, "Modification", "Les droits ont été modifié");

}

void MainWindow::on_actionA_props_triggered()
{
    QMessageBox::about(this, "A propos", "Logiciel developpé par Cédric BANNELIER \n"
                       "Créé avec QT 5.10 \r\n"
                       "QT Creator 4.10");
}

void MainWindow::on_pushButtonRechercherArticle_clicked()
{
    QString codeArticle = ui->lineEditRechercheArticle->text();
    if(codeArticle.isEmpty())
    {
       QMessageBox::warning(this, "Code article", "Veuillez saisir une lettre du code article");
    }
    else
    {
        bdd.RechercheProduit(&this->modalRechercheArticle, codeArticle);
        ui->tableView->setModel(&this->modalRechercheArticle);
    }

}

void MainWindow::on_pushButtonRechercherLibelle_clicked()
{
    QString libelleArticle = ui->lineEditRechercheLibelle->text();
    if(libelleArticle.isEmpty())
    {
        QMessageBox::warning(this, "Libellé", "Veuillez saisir une lettre du libellé recherché");
    }
    else
    {
        bdd.RechercheProduitLibelle(&this->modalRechercheArticleLibelle, libelleArticle);
        ui->tableView->setModel(&this->modalRechercheArticleLibelle);
    }

}

void MainWindow::on_comboBoxCodeArticle_currentIndexChanged()
{
    QString codeArticle = ui->comboBoxCodeArticle->currentText();

    Article* articleEnBdd = bdd.AfficheUnProduit(codeArticle);

    ui->afficheCodeArticle->setText(articleEnBdd->GetCodeArticle());
    ui->afficheDesignationArticle->setText(articleEnBdd->GetDesignationArticle());
    ui->affichePoidsArticle->setText(QString::number(articleEnBdd->GetPoidsArticle()));
    ui->afficheEmplacementArticle->setText(articleEnBdd->GetEmplacementArticle());
    ui->afficheEmballageArticle->setText(articleEnBdd->GetEmballageArticle());
}

void MainWindow::on_pushButtonSupprimerArticle_clicked()
{
    QString articleSaisieUtilisateur = ui->comboBoxArticleSupprimer->currentText();

    bool validationSuppressionArticle = bdd.SupprimerArticle(articleSaisieUtilisateur);

    if(validationSuppressionArticle)
    {
        QMessageBox::information(this, "Suppression", "Votre article a été supprimé de la base de données");
    }
    else
    {
        QMessageBox::warning(this, "Suppression", "Vous avez une livraison attachée à cette article, "
                                                  "l'article ne sera pas supprimée");
    }
}

void MainWindow::on_BoutonImport_clicked()
{
   QVector<QString> listeFournisseursVector;
   QFile listeFournisseurs(QFileDialog::getOpenFileName(this, tr("Selectionnez la liste des fournisseurs")));
   listeFournisseurs.open(QIODevice::ReadOnly);
   QTextStream in(&listeFournisseurs);
   QString ligne;
   while(!in.atEnd())
   {
       ligne = in.readLine();
       listeFournisseursVector.push_back(ligne);
   }
   bdd.AjoutFournisseurImport(listeFournisseursVector);

   QMessageBox::information(this, "Insertion", "Vos fournisseurs ont bien été insérés dans la base de données");
}

void MainWindow::on_tabWidget_tabBarClicked()
{
   on_ButonAfficheStockComplet_clicked();
   miseAJour();
   ui->afficheDesignationArticle->setReadOnly(true);
   ui->afficheEmballageArticle->setReadOnly(true);
   ui->afficheEmplacementArticle->setReadOnly(true);
   ui->affichePoidsArticle->setReadOnly(true);

   ui->afficheDesignationArticle->setStyleSheet("background: #f4f4f4");
   ui->afficheEmballageArticle->setStyleSheet("background: #f4f4f4");
   ui->afficheEmplacementArticle->setStyleSheet("background: #f4f4f4");
   ui->affichePoidsArticle->setStyleSheet("background: #f4f4f4");
}

void MainWindow::on_spinBoxTaillePolice_valueChanged()
{
    on_ButonAfficheStockComplet_clicked();
}

void MainWindow::on_pushButtonModifier_clicked()
{
    ui->afficheDesignationArticle->setReadOnly(false);
    ui->afficheEmplacementArticle->setReadOnly(false);
    ui->affichePoidsArticle->setReadOnly(false);

    ui->afficheDesignationArticle->setStyleSheet("background: lightgreen");
    ui->afficheEmplacementArticle->setStyleSheet("background: lightgreen");
    ui->affichePoidsArticle->setStyleSheet("background: lightgreen");

}

void MainWindow::on_pushButtonValidationModification_clicked()
{
    Article* article = new Article(ui->comboBoxCodeArticle->currentText(),
                                   ui->afficheDesignationArticle->text(),
                                   ui->affichePoidsArticle->text().toInt(),
                                   ui->afficheEmplacementArticle->text(),
                                   ui->afficheEmballageArticle->text());

    if (ui->afficheDesignationArticle->text().isEmpty() ||
        ui->affichePoidsArticle->text().isEmpty() ||
        ui->afficheEmplacementArticle->text().isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Veuillez saisir tous les champs",QMessageBox::Ok);
    }
    else
    {
         bdd.UpdateProduit(*article);
         QMessageBox::information(this, "Information", "La modification a été faite",QMessageBox::Ok);
    }
}
