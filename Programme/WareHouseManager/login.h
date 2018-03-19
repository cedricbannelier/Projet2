#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "Database.h"
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

private:
    Ui::Login *ui;

    Database bdd;

};

#endif // LOGIN_H
