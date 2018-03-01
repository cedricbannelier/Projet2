#include "login.h"
#include "ui_login.h"
#include "fenetreprincipale.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    bdd.CreateDatabase();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    this->hide();
    FenetrePrincipale fenetrePrincipale;
    fenetrePrincipale.setModal(true);
    fenetrePrincipale.exec();

}
