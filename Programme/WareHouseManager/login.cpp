#include "login.h"
#include "ui_login.h"
#include <iostream>
#include "database.h"

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

void Login::on_buttonBox_accepted()
{
    std::cout << "Dans la methode OK du bouton" << std::endl;
}
