#ifndef LOGIN_H
#define LOGIN_H

/**
  * @file login.h
  * @brief Gestion des logins
  * @author Cédric BANNELIER
  * @version 0.1b
**/

#include <QDialog>
#include "database.h"
#include "mainwindow.h"
#include "utilisateur.h"

namespace Ui {

class Login;
}

/**
 * @brief Classe Login qui hérite de QDialog permet de gerer la fenetre login
 */

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
