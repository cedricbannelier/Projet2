#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "database.h"
#include "mainwindow.h"
#include "utilisateur.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

    bool autorisation();
    Utilisateur user;
    void lireFichier();

private:
    Ui::Login *ui;

    Database bdd;

    void enregistrementLogin();

};

#endif // LOGIN_H
