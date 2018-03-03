#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QDialog>
#include "Database.h"

namespace Ui {
class FenetrePrincipale;
}

class FenetrePrincipale : public QDialog
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);
    ~FenetrePrincipale();

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




private:
    Ui::FenetrePrincipale *ui;

    Database fbdd;

    //Permet de renvoyer un popup pour avertir l'utilisateur si
    //la query est bien passée ou non.
    //Param bool etatQuery
    void popupQueryIsOkOrNot(bool etatQuery);

    //Permet d'afficher tout le stock
    //En cour de dev
    void creationVuStock();
};

#endif // FENETREPRINCIPALE_H
