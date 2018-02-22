/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuwindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menuwindow)
    {
        if (menuwindow->objectName().isEmpty())
            menuwindow->setObjectName(QStringLiteral("menuwindow"));
        menuwindow->resize(800, 600);
        menubar = new QMenuBar(menuwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menuwindow->setMenuBar(menubar);
        centralwidget = new QWidget(menuwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        menuwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(menuwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        menuwindow->setStatusBar(statusbar);

        retranslateUi(menuwindow);

        QMetaObject::connectSlotsByName(menuwindow);
    } // setupUi

    void retranslateUi(QMainWindow *menuwindow)
    {
        menuwindow->setWindowTitle(QApplication::translate("menuwindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuwindow: public Ui_menuwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
