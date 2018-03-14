#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "Database.h"
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

    bool test();

    enum droit
    {
        Logisiticien = 1,
        Administrateur
    };
private slots:
//    void on_buttonBox_accepted();

private:
    Ui::Login *ui;

    //Création de la bdd de type Database
    Database bdd;
};

#endif // LOGIN_H
