#include "login.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
//    Database bdd;
//    Database fbdd;
    Login w;
    w.show();
     std::cout << "hello" << std::endl;
    return a.exec();
}
