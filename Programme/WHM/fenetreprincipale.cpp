#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#include <QMessageBox>
#include <QMenu>
#include <QVector>
#include <iostream>
#include "produit.h"

FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetrePrincipale)
{
    ui->setupUi(this);
}

FenetrePrincipale::~FenetrePrincipale()
{
    delete ui;
}


//Affiche une fenêtre pour savoir si la requete de suppression est bien passé.
void FenetrePrincipale::popupQueryIsOkOrNot(bool etatQuery)
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

//Ajout d'un article utilisation du constructeur.
//Appel la méthode insertProduit
void FenetrePrincipale::on_boutonAjoutArticle_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton ajout d'un article" << std::endl;

    Produit* produit = new Produit(ui->lineEditAjoutCodeArticle->text(),
                                   ui->lineEditAjoutDesignationArticle->text(),
                                   ui->lineEditAjoutPoidsArticle->text(),
                                   ui->lineEditAjoutEmplacementArticle->text());

    fbdd.InsertProduit(*produit);

}

//Supprime un article dans la base de donnée
void FenetrePrincipale::on_boutonSupprimer_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton supprimer d'un article" << std::endl;

//    bdd.deleteProduit(ui->lineEditSupprimerArticle->text());

    popupQueryIsOkOrNot(fbdd.DeleteProduit(ui->lineEditSupprimerArticle->text()));
}
//En cours de dev

void FenetrePrincipale::on_boutonModifier_clicked()
{
    std::cout << "MODE DEBUG : Dans le bouton modifier d'un article" << std::endl;

    QString codeArticle = ui->lineEditModifierArticle->text();

    QVector<Produit*>* produits = fbdd.AfficheUnProduit(codeArticle);
    fbdd.AfficheUnProduit(codeArticle);

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

void FenetrePrincipale::on_boutonConsulterFicheProduit_clicked()
{
    QString codeArticle = ui->lineEditRechercher->text();
    QVector<Produit*>* produits = fbdd.AfficheUnProduit(codeArticle);

    for (int i = 0; i < produits->size(); i++)
    {
        ui->afficheCodeArticle->setText((*produits)[i]->GetCodeArticle());
        ui->afficheDesignationArticle ->setText((*produits)[i]->GetDesignationArticle());
        ui->affichePoidsArticle->setText((*produits)[i]->GetPoidsArticle());
        ui->afficheEmplacementArticle->setText((*produits)[i]->GetEmplacementArticle());
    }
}

void FenetrePrincipale::on_pushButtonCreationUtilisateur_clicked()
{
     std::cout << "MODE DEBUG : Dans la methode creation utilisateur" << std::endl;

     Utilisateur* nouvelUtilistateur = new Utilisateur(ui->lineEditeCreationLogin->text(),
                                                       ui->lineEditeCreationMotDePasse->text());

     fbdd.AjoutUtilisateur(*nouvelUtilistateur);

}

void FenetrePrincipale::on_pushButtonValidationModification_clicked()
{
    std::cout << "MODE DEBUG : Dans la methode Validation de modification" << std::endl;

    Produit* produit = new Produit(ui->lineEditModificationCodeArticle->text(),
                                   ui->lineEditModificationDesignationArticle->text(),
                                   ui->lineEditModificationPoidsArticle->text(),
                                   ui->lineEditModificationEmplacementArticle->text());

    fbdd.UpdateProduit(*produit);
}
