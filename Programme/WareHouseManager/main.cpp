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

    while(fenetreDeLogin.exec() == QDialog::Accepted)
    {

        std::cout << "Dans le main" << std::endl;

        if(fenetreDeLogin.test())
        {
            mainWindow.show();
            application.exec();
            application.quit();
        }

        else if(fenetreDeLogin.exec() == QDialog::Rejected) //QDialog::Rejected
        {
            application.quit();
        }
    }
    return 0;
}
