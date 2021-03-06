#include "mainwindow.h"
#include <QApplication>
#include <login.h>
#include <database.h>
#include <iostream>
#include "utilisateur.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    MainWindow mainWindow;

    Database bdd;

    bdd.CreateDatabase();

    Login fenetreDeLogin;

    fenetreDeLogin.lireFichier();

    while(fenetreDeLogin.exec() == QDialog::Accepted)
    {
        if(fenetreDeLogin.autorisation())
        {
            mainWindow.user.SetDroit(fenetreDeLogin.user.GetDroit());
            mainWindow.user.SetLogin(fenetreDeLogin.user.GetLogin());
            mainWindow.afficheUtilisateur();
            mainWindow.show();
            application.exec();
            application.quit();
        }
        else if(fenetreDeLogin.exec() == QDialog::Rejected)
        {
            application.quit();
        }
    }

    application.quit();
    return 0;
}
