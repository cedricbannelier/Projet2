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

    Utilisateur * nouvelleConnexion = new Utilisateur();

    bdd.CreateDatabase();

    Login fenetreDeLogin;

    do
    {
        if (fenetreDeLogin.exec() == QDialog::Accepted)
        {
            std::cout << "Dans le main" << std::endl;

            if(fenetreDeLogin.test())
            {
                mainWindow.show();
                return application.exec();
            }

        }
        else
        {
            application.quit();
        }


    }while(fenetreDeLogin.test() == false);


    return 0;
}
