#include "login.h"
#include "ui_login.h"
#include <iostream>
#include "utilisateur.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{


    ui->setupUi(this);
    ui->icone->setPixmap(QPixmap(":/icones/warehouse.png"));
    ui->lineEditLogin->setFocus();
    this->setWindowTitle("Login");
}

Login::~Login()
{
    delete ui;
}

bool Login::test()
{
    std::cout << "Dans la methode OK du bouton login.cpp" << std::endl;

    QString loginSaisie = ui->lineEditLogin->text();
    QString mdpSaisie = ui->lineEditMDP->text();

    int droit = bdd.GetDroitUtilisateur(loginSaisie, mdpSaisie);

 /*   nouvelleConnexion.SetLogin(loginSaisie);
    nouvelleConnexion.SetMotDePasse(mdpSaisie);
    nouvelleConnexion.SetDroit(droit);
*/
    if(droit == 1 || droit == 2)
    {
        std::cout << "Access Granted" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Acces Denied" << std::endl;
        return false;
    }
}
