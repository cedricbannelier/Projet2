#include "login.h"
#include "ui_login.h"
#include <iostream>
#include "utilisateur.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->icone->setPixmap(QPixmap(":/warehouse.png"));
    this->setWindowIcon(QIcon(":/warehouse.png"));
    ui->lineEditLogin->setFocus();
    this->setWindowTitle("Login");
}

Login::~Login()
{
    delete ui;
}

bool Login::autorisation()
{
    user.SetLogin(ui->lineEditLogin->text());
    user.SetMotDePasse(ui->lineEditMDP->text());

    enregistrementLogin();
    lireFichier();

    if(user.GetLogin().isEmpty() || user.GetMotDePasse().isEmpty())
    {
        return false;
    }
    else
    {
        Utilisateur* test = bdd.GetDroitUtilisateur(&user);

        if( test->GetDroit() == 1 ||  test->GetDroit() == 2)
        {
            user.SetDroit(test->GetDroit());
            std::cout << user.GetDroit();
        }
        else
        {
            return false;
        }
    }
}

void Login::enregistrementLogin()
{
    if(ui->seSouvenir->isChecked())
    {
        QFile fichier("seSouvenir.txt");
        fichier.open(QIODevice::WriteOnly);
        QTextStream out(&fichier);
        out << ui->lineEditLogin->text();
    }
}

void Login::lireFichier()
{
    QFile fichier("seSouvenir.txt");
    fichier.open(QIODevice::ReadOnly);
    QTextStream in(&fichier);
    QString ligne;
    while(!in.atEnd())
    {
        ligne = in.readLine();
    }
    if(ligne.isEmpty())
    {
        ui->lineEditLogin->setText("");
    }
    else
    {
        ui->lineEditLogin->setText(ligne);
    }
}

