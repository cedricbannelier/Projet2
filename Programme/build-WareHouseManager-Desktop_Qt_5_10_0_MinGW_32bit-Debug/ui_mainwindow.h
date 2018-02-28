/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabConsulter;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditAjoutDesignationArticle;
    QLineEdit *lineEditAjoutPoidsArticle;
    QPushButton *boutonAjoutArticle;
    QLineEdit *lineEditAjoutCodeArticle;
    QLineEdit *lineEditAjoutEmplacementArticle;
    QWidget *tabSupprimer;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEditSupprimerArticle;
    QPushButton *boutonSupprimer;
    QWidget *tabModifier;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditModifierArticle;
    QPushButton *boutonModifier;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QLabel *ModificationEmplacement_2;
    QLineEdit *lineEditModificationDesignationArticle;
    QLineEdit *lineEditModificationPoidsArticle;
    QLabel *ModificationCodeArticle;
    QLineEdit *lineEditModificationEmplacementArticle;
    QLineEdit *lineEditModificationCodeArticle;
    QLabel *ModificationEmplacement;
    QLabel *ModificationEmplacement_3;
    QWidget *tabRechercher;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *boutonRechercher;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditRechercher;
    QPushButton *boutonConsulterFicheProduit;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QTextBrowser *afficheEmplacementArticle;
    QTextBrowser *afficheDesignationArticle;
    QTextBrowser *affichePoidsArticle;
    QLabel *codeArticle;
    QTextBrowser *afficheCodeArticle;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditeCreationLogin;
    QLineEdit *lineEditeCreationMotDePasse;
    QComboBox *comboBoxChoixDroitUtilisateur;
    QPushButton *pushButtonCreationUtilisateur;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(905, 675);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 901, 601));
        tabConsulter = new QWidget();
        tabConsulter->setObjectName(QStringLiteral("tabConsulter"));
        tabWidget->addTab(tabConsulter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_5 = new QWidget(tab_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 10, 291, 129));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEditAjoutDesignationArticle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutDesignationArticle->setObjectName(QStringLiteral("lineEditAjoutDesignationArticle"));

        gridLayout_5->addWidget(lineEditAjoutDesignationArticle, 1, 0, 1, 1);

        lineEditAjoutPoidsArticle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutPoidsArticle->setObjectName(QStringLiteral("lineEditAjoutPoidsArticle"));

        gridLayout_5->addWidget(lineEditAjoutPoidsArticle, 2, 0, 1, 1);

        boutonAjoutArticle = new QPushButton(gridLayoutWidget_5);
        boutonAjoutArticle->setObjectName(QStringLiteral("boutonAjoutArticle"));
        boutonAjoutArticle->setEnabled(true);
        boutonAjoutArticle->setMouseTracking(false);

        gridLayout_5->addWidget(boutonAjoutArticle, 4, 0, 1, 1);

        lineEditAjoutCodeArticle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutCodeArticle->setObjectName(QStringLiteral("lineEditAjoutCodeArticle"));

        gridLayout_5->addWidget(lineEditAjoutCodeArticle, 0, 0, 1, 1);

        lineEditAjoutEmplacementArticle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutEmplacementArticle->setObjectName(QStringLiteral("lineEditAjoutEmplacementArticle"));

        gridLayout_5->addWidget(lineEditAjoutEmplacementArticle, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tabSupprimer = new QWidget();
        tabSupprimer->setObjectName(QStringLiteral("tabSupprimer"));
        gridLayoutWidget_6 = new QWidget(tabSupprimer);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(20, 20, 291, 31));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEditSupprimerArticle = new QLineEdit(gridLayoutWidget_6);
        lineEditSupprimerArticle->setObjectName(QStringLiteral("lineEditSupprimerArticle"));

        gridLayout_6->addWidget(lineEditSupprimerArticle, 0, 0, 1, 1);

        boutonSupprimer = new QPushButton(gridLayoutWidget_6);
        boutonSupprimer->setObjectName(QStringLiteral("boutonSupprimer"));

        gridLayout_6->addWidget(boutonSupprimer, 0, 1, 1, 1);

        tabWidget->addTab(tabSupprimer, QString());
        tabModifier = new QWidget();
        tabModifier->setObjectName(QStringLiteral("tabModifier"));
        gridLayoutWidget_2 = new QWidget(tabModifier);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 291, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditModifierArticle = new QLineEdit(gridLayoutWidget_2);
        lineEditModifierArticle->setObjectName(QStringLiteral("lineEditModifierArticle"));

        gridLayout_2->addWidget(lineEditModifierArticle, 0, 0, 1, 1);

        boutonModifier = new QPushButton(gridLayoutWidget_2);
        boutonModifier->setObjectName(QStringLiteral("boutonModifier"));

        gridLayout_2->addWidget(boutonModifier, 0, 1, 1, 1);

        gridLayoutWidget_7 = new QWidget(tabModifier);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(70, 90, 251, 119));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        ModificationEmplacement_2 = new QLabel(gridLayoutWidget_7);
        ModificationEmplacement_2->setObjectName(QStringLiteral("ModificationEmplacement_2"));

        gridLayout_7->addWidget(ModificationEmplacement_2, 2, 0, 1, 1);

        lineEditModificationDesignationArticle = new QLineEdit(gridLayoutWidget_7);
        lineEditModificationDesignationArticle->setObjectName(QStringLiteral("lineEditModificationDesignationArticle"));

        gridLayout_7->addWidget(lineEditModificationDesignationArticle, 2, 1, 1, 1);

        lineEditModificationPoidsArticle = new QLineEdit(gridLayoutWidget_7);
        lineEditModificationPoidsArticle->setObjectName(QStringLiteral("lineEditModificationPoidsArticle"));

        gridLayout_7->addWidget(lineEditModificationPoidsArticle, 4, 1, 1, 1);

        ModificationCodeArticle = new QLabel(gridLayoutWidget_7);
        ModificationCodeArticle->setObjectName(QStringLiteral("ModificationCodeArticle"));

        gridLayout_7->addWidget(ModificationCodeArticle, 0, 0, 1, 1);

        lineEditModificationEmplacementArticle = new QLineEdit(gridLayoutWidget_7);
        lineEditModificationEmplacementArticle->setObjectName(QStringLiteral("lineEditModificationEmplacementArticle"));

        gridLayout_7->addWidget(lineEditModificationEmplacementArticle, 5, 1, 1, 1);

        lineEditModificationCodeArticle = new QLineEdit(gridLayoutWidget_7);
        lineEditModificationCodeArticle->setObjectName(QStringLiteral("lineEditModificationCodeArticle"));

        gridLayout_7->addWidget(lineEditModificationCodeArticle, 0, 1, 1, 1);

        ModificationEmplacement = new QLabel(gridLayoutWidget_7);
        ModificationEmplacement->setObjectName(QStringLiteral("ModificationEmplacement"));

        gridLayout_7->addWidget(ModificationEmplacement, 5, 0, 1, 1);

        ModificationEmplacement_3 = new QLabel(gridLayoutWidget_7);
        ModificationEmplacement_3->setObjectName(QStringLiteral("ModificationEmplacement_3"));

        gridLayout_7->addWidget(ModificationEmplacement_3, 4, 0, 1, 1);

        tabWidget->addTab(tabModifier, QString());
        tabRechercher = new QWidget();
        tabRechercher->setObjectName(QStringLiteral("tabRechercher"));
        gridLayoutWidget = new QWidget(tabRechercher);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 291, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        boutonRechercher = new QPushButton(gridLayoutWidget);
        boutonRechercher->setObjectName(QStringLiteral("boutonRechercher"));

        gridLayout->addWidget(boutonRechercher, 0, 1, 1, 1);

        tabWidget->addTab(tabRechercher, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 291, 31));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditRechercher = new QLineEdit(gridLayoutWidget_3);
        lineEditRechercher->setObjectName(QStringLiteral("lineEditRechercher"));

        gridLayout_3->addWidget(lineEditRechercher, 0, 0, 1, 1);

        boutonConsulterFicheProduit = new QPushButton(gridLayoutWidget_3);
        boutonConsulterFicheProduit->setObjectName(QStringLiteral("boutonConsulterFicheProduit"));

        gridLayout_3->addWidget(boutonConsulterFicheProduit, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(tab);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(70, 60, 652, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 2, 1, 1);

        afficheEmplacementArticle = new QTextBrowser(gridLayoutWidget_4);
        afficheEmplacementArticle->setObjectName(QStringLiteral("afficheEmplacementArticle"));

        gridLayout_4->addWidget(afficheEmplacementArticle, 1, 3, 1, 1);

        afficheDesignationArticle = new QTextBrowser(gridLayoutWidget_4);
        afficheDesignationArticle->setObjectName(QStringLiteral("afficheDesignationArticle"));

        gridLayout_4->addWidget(afficheDesignationArticle, 0, 3, 1, 1);

        affichePoidsArticle = new QTextBrowser(gridLayoutWidget_4);
        affichePoidsArticle->setObjectName(QStringLiteral("affichePoidsArticle"));

        gridLayout_4->addWidget(affichePoidsArticle, 1, 1, 1, 1);

        codeArticle = new QLabel(gridLayoutWidget_4);
        codeArticle->setObjectName(QStringLiteral("codeArticle"));

        gridLayout_4->addWidget(codeArticle, 0, 0, 1, 1);

        afficheCodeArticle = new QTextBrowser(gridLayoutWidget_4);
        afficheCodeArticle->setObjectName(QStringLiteral("afficheCodeArticle"));

        gridLayout_4->addWidget(afficheCodeArticle, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 20, 160, 103));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditeCreationLogin = new QLineEdit(verticalLayoutWidget);
        lineEditeCreationLogin->setObjectName(QStringLiteral("lineEditeCreationLogin"));

        verticalLayout->addWidget(lineEditeCreationLogin);

        lineEditeCreationMotDePasse = new QLineEdit(verticalLayoutWidget);
        lineEditeCreationMotDePasse->setObjectName(QStringLiteral("lineEditeCreationMotDePasse"));
        lineEditeCreationMotDePasse->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditeCreationMotDePasse);

        comboBoxChoixDroitUtilisateur = new QComboBox(verticalLayoutWidget);
        comboBoxChoixDroitUtilisateur->addItem(QString());
        comboBoxChoixDroitUtilisateur->addItem(QString());
        comboBoxChoixDroitUtilisateur->setObjectName(QStringLiteral("comboBoxChoixDroitUtilisateur"));

        verticalLayout->addWidget(comboBoxChoixDroitUtilisateur);

        pushButtonCreationUtilisateur = new QPushButton(verticalLayoutWidget);
        pushButtonCreationUtilisateur->setObjectName(QStringLiteral("pushButtonCreationUtilisateur"));

        verticalLayout->addWidget(pushButtonCreationUtilisateur);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        tabConsulter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabConsulter), QApplication::translate("MainWindow", "Consulter stock", nullptr));
        lineEditAjoutDesignationArticle->setPlaceholderText(QApplication::translate("MainWindow", "Libelle", nullptr));
        lineEditAjoutPoidsArticle->setInputMask(QApplication::translate("MainWindow", "9999.99", nullptr));
        lineEditAjoutPoidsArticle->setPlaceholderText(QApplication::translate("MainWindow", "Poids", nullptr));
        boutonAjoutArticle->setText(QApplication::translate("MainWindow", "Ajout", nullptr));
        lineEditAjoutCodeArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        lineEditAjoutEmplacementArticle->setPlaceholderText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajouter", nullptr));
        lineEditSupprimerArticle->setPlaceholderText(QApplication::translate("MainWindow", "Produit", nullptr));
        boutonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSupprimer), QApplication::translate("MainWindow", "Supprimer", nullptr));
        lineEditModifierArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonModifier->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        ModificationEmplacement_2->setText(QApplication::translate("MainWindow", "D\303\251signation", nullptr));
        ModificationCodeArticle->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        ModificationEmplacement->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        ModificationEmplacement_3->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabModifier), QApplication::translate("MainWindow", "Modifier", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Article ou emplacement", nullptr));
        boutonRechercher->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRechercher), QApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEditRechercher->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonConsulterFicheProduit->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "D\303\251signation", nullptr));
        label->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        codeArticle->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Consulter fiche produit", nullptr));
        lineEditeCreationLogin->setPlaceholderText(QApplication::translate("MainWindow", "Login", nullptr));
        lineEditeCreationMotDePasse->setPlaceholderText(QApplication::translate("MainWindow", "Mot de passe", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(0, QApplication::translate("MainWindow", "Logisticien", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(1, QApplication::translate("MainWindow", "Administrateur", nullptr));

        pushButtonCreationUtilisateur->setText(QApplication::translate("MainWindow", "Validez", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Creation d'utilisateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
