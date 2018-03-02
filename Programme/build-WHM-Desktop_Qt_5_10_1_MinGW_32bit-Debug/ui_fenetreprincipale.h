/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
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
    QPushButton *pushButtonValidationModification;
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

    void setupUi(QDialog *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName(QStringLiteral("FenetrePrincipale"));
        FenetrePrincipale->resize(903, 568);
        tabWidget = new QTabWidget(FenetrePrincipale);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 861, 471));
        tabConsulter = new QWidget();
        tabConsulter->setObjectName(QStringLiteral("tabConsulter"));
        tabWidget->addTab(tabConsulter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_5 = new QWidget(tab_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 10, 291, 129));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
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

        pushButtonValidationModification = new QPushButton(tabModifier);
        pushButtonValidationModification->setObjectName(QStringLiteral("pushButtonValidationModification"));
        pushButtonValidationModification->setGeometry(QRect(180, 220, 75, 23));
        tabWidget->addTab(tabModifier, QString());
        tabRechercher = new QWidget();
        tabRechercher->setObjectName(QStringLiteral("tabRechercher"));
        gridLayoutWidget = new QWidget(tabRechercher);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 291, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
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
        gridLayoutWidget_4->setGeometry(QRect(70, 60, 652, 150));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
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

        retranslateUi(FenetrePrincipale);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QDialog *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        tabConsulter->setToolTip(QApplication::translate("FenetrePrincipale", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabConsulter), QApplication::translate("FenetrePrincipale", "Consulter stock", nullptr));
        lineEditAjoutDesignationArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Libelle", nullptr));
        lineEditAjoutPoidsArticle->setInputMask(QApplication::translate("FenetrePrincipale", "9999.99", nullptr));
        lineEditAjoutPoidsArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Poids", nullptr));
        boutonAjoutArticle->setText(QApplication::translate("FenetrePrincipale", "Ajout", nullptr));
        lineEditAjoutCodeArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Article", nullptr));
        lineEditAjoutEmplacementArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Emplacement", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FenetrePrincipale", "Ajouter", nullptr));
        lineEditSupprimerArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Produit", nullptr));
        boutonSupprimer->setText(QApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSupprimer), QApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        lineEditModifierArticle->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Article", nullptr));
        boutonModifier->setText(QApplication::translate("FenetrePrincipale", "Modifier", nullptr));
        ModificationEmplacement_2->setText(QApplication::translate("FenetrePrincipale", "D\303\251signation", nullptr));
        ModificationCodeArticle->setText(QApplication::translate("FenetrePrincipale", "Code article", nullptr));
        ModificationEmplacement->setText(QApplication::translate("FenetrePrincipale", "Emplacement", nullptr));
        ModificationEmplacement_3->setText(QApplication::translate("FenetrePrincipale", "Poids", nullptr));
        pushButtonValidationModification->setText(QApplication::translate("FenetrePrincipale", "Valider", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabModifier), QApplication::translate("FenetrePrincipale", "Modifier", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Article ou emplacement", nullptr));
        boutonRechercher->setText(QApplication::translate("FenetrePrincipale", "Rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRechercher), QApplication::translate("FenetrePrincipale", "Rechercher", nullptr));
        lineEditRechercher->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Article", nullptr));
        boutonConsulterFicheProduit->setText(QApplication::translate("FenetrePrincipale", "Rechercher", nullptr));
        label_4->setText(QApplication::translate("FenetrePrincipale", "D\303\251signation", nullptr));
        label->setText(QApplication::translate("FenetrePrincipale", "Poids", nullptr));
        label_5->setText(QApplication::translate("FenetrePrincipale", "Emplacement", nullptr));
        codeArticle->setText(QApplication::translate("FenetrePrincipale", "Code article", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FenetrePrincipale", "Consulter fiche produit", nullptr));
        lineEditeCreationLogin->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Login", nullptr));
        lineEditeCreationMotDePasse->setPlaceholderText(QApplication::translate("FenetrePrincipale", "Mot de passe", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(0, QApplication::translate("FenetrePrincipale", "Logisticien", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(1, QApplication::translate("FenetrePrincipale", "Administrateur", nullptr));

        pushButtonCreationUtilisateur->setText(QApplication::translate("FenetrePrincipale", "Validez", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("FenetrePrincipale", "Creation d'utilisateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
