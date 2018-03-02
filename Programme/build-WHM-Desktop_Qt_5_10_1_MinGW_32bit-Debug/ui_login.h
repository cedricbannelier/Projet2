/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditMotDePasse;
    QPushButton *pushButton;
    QLabel *labelLogin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(406, 194);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 50, 261, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditLogin = new QLineEdit(verticalLayoutWidget);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        verticalLayout->addWidget(lineEditLogin);

        lineEditMotDePasse = new QLineEdit(verticalLayoutWidget);
        lineEditMotDePasse->setObjectName(QStringLiteral("lineEditMotDePasse"));
        lineEditMotDePasse->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditMotDePasse);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        labelLogin = new QLabel(centralWidget);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));
        labelLogin->setGeometry(QRect(10, 10, 381, 31));
        QFont font;
        font.setPointSize(14);
        labelLogin->setFont(font);
        labelLogin->setAlignment(Qt::AlignCenter);
        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 406, 21));
        Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        lineEditLogin->setPlaceholderText(QApplication::translate("Login", "Identifiant", nullptr));
        lineEditMotDePasse->setPlaceholderText(QApplication::translate("Login", "Mot de passe", nullptr));
        pushButton->setText(QApplication::translate("Login", "Connexion", nullptr));
        labelLogin->setText(QApplication::translate("Login", "WareHouseManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
