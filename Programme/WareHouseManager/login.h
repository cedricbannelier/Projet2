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

    /**
     * @brief autorisation
     * Permet de savoir si le login et le mot de passe est dans la base de données.
     * Si non présent il sera impossible de se connecter
     * @return
     */
    bool autorisation();

    /**
     * @brief user
     * Création de la variable user de type Utilisateur
     */
    Utilisateur user;

    /**
     * @brief lireFichier
     * Permet de lire le fichier pour récuperer le login dans le fichier
     */
    void lireFichier();

private:
    Ui::Login *ui;

    /**
     * @brief bdd
     * Création d'une variable bdd de type database
     */
    Database bdd;

    /**
     * @brief enregistrementLogin
     * Permet de faire l'enregistrement du login si la case est cochée
     */
    void enregistrementLogin();

};

#endif // LOGIN_H
