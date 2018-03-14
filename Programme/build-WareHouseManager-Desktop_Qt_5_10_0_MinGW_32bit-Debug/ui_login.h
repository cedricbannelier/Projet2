/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelFenetreLoginBienvenue;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditMDP;
    QLabel *icone;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(489, 228);
        buttonBox = new QDialogButtonBox(Login);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        labelFenetreLoginBienvenue = new QLabel(Login);
        labelFenetreLoginBienvenue->setObjectName(QStringLiteral("labelFenetreLoginBienvenue"));
        labelFenetreLoginBienvenue->setGeometry(QRect(20, 10, 441, 71));
        QFont font;
        font.setPointSize(26);
        labelFenetreLoginBienvenue->setFont(font);
        labelFenetreLoginBienvenue->setAlignment(Qt::AlignCenter);
        lineEditLogin = new QLineEdit(Login);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(90, 110, 301, 31));
        lineEditMDP = new QLineEdit(Login);
        lineEditMDP->setObjectName(QStringLiteral("lineEditMDP"));
        lineEditMDP->setGeometry(QRect(90, 150, 301, 31));
        icone = new QLabel(Login);
        icone->setObjectName(QStringLiteral("icone"));
        icone->setGeometry(QRect(10, 10, 471, 211));
        icone->raise();
        buttonBox->raise();
        labelFenetreLoginBienvenue->raise();
        lineEditLogin->raise();
        lineEditMDP->raise();

        retranslateUi(Login);
        QObject::connect(buttonBox, SIGNAL(accepted()), Login, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Login, SLOT(reject()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        labelFenetreLoginBienvenue->setText(QApplication::translate("Login", "WareHouseManager", nullptr));
        lineEditLogin->setPlaceholderText(QApplication::translate("Login", "Login", nullptr));
        lineEditMDP->setPlaceholderText(QApplication::translate("Login", "Mot de passe", nullptr));
        icone->setText(QApplication::translate("Login", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
