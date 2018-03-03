#include "mainwindow.h"
#include <QApplication>
#include <login.h>
#include <database.h>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    MainWindow mainWindow;

    Login fenetreDeLogin;
//    Database bdd;

//    bdd.CreateDatabase();
    if (fenetreDeLogin.exec() == QDialog::Accepted)
    {
        mainWindow.show();
        return application.exec();
    }
    else
    {
        application.quit();
    }
    return 0;
}
