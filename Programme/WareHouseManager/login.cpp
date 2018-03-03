#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <iostream>
#include "database.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_buttonBox_accepted()
{
    std::cout << "Dans la methode OK du bouton" << std::endl;



}
