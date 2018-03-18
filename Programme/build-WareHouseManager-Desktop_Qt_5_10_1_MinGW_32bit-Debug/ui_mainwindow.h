/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabConsulter;
    QPushButton *ButonAfficheStockComplet;
    QTableView *tableView;
    QPushButton *BoutonExportExcel;
    QSpinBox *spinBoxTaillePolice;
    QLabel *labelTaillePoliceTableView;
    QWidget *tab_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditAjoutCodeArticle;
    QLineEdit *lineEditAjoutPoidsArticle;
    QLineEdit *lineEditAjoutDesignationArticle;
    QLabel *labelAjouterPoidsArticle;
    QLineEdit *lineEditAjoutEmplacementArticle;
    QLabel *labelAjouterCodeArticle;
    QLabel *labelAjouterDesignationArticle;
    QComboBox *comboBoxDimensionEmballage;
    QLabel *labelAjouterEmplacementArticle;
    QLabel *labelAjouterDimensionEmballage;
    QPushButton *boutonAjoutArticle;
    QLabel *labelAjoutArticleInformations;
    QWidget *page_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QComboBox *comboBoxLongueurEmballage;
    QComboBox *comboBoxLargeurEmballage;
    QComboBox *comboBoxHauteurEmballage;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_10;
    QComboBox *comboBoxTypeEmballage;
    QPushButton *AjoutEmballage;
    QWidget *page_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAjoutNomFournisseur;
    QLineEdit *lineEditAjoutFournisseur;
    QPushButton *butonAjoutFournisseur;
    QLabel *labelFournisseurInformations;
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
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEditModificationDesignationArticle;
    QLabel *ModificationEmplacement_2;
    QLabel *ModificationCodeArticle;
    QLineEdit *lineEditModificationPoidsArticle;
    QLineEdit *lineEditModificationEmplacementArticle;
    QLineEdit *lineEditModificationCodeArticle;
    QLabel *ModificationEmplacement_3;
    QLabel *ModificationEmplacement;
    QLabel *labelModifierDimensionEmballage;
    QComboBox *comboBoxModifierDimensionEmballage;
    QPushButton *pushButtonValidationModification;
    QWidget *tabRechercher;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *boutonRechercher;
    QWidget *tab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditRechercher;
    QPushButton *boutonConsulterFicheProduit;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *afficheCodeArticle;
    QLabel *label_4;
    QLineEdit *affichePoidsArticle;
    QLabel *codeArticle;
    QLabel *label_5;
    QLineEdit *afficheEmplacementArticle;
    QLineEdit *afficheDesignationArticle;
    QLabel *label_2;
    QLineEdit *afficheEmballageArticle;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditeCreationLogin;
    QLineEdit *lineEditeCreationMotDePasse;
    QComboBox *comboBoxChoixDroitUtilisateur;
    QPushButton *pushButtonCreationUtilisateur;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEditNumeroLivraison;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditDateLivraison;
    QLineEdit *lineEditArticleLivre;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *lineEditQteLivree;
    QLineEdit *lineEditFournisseurLivraison;
    QLabel *label_13;
    QPushButton *BoutonValiderReception;
    QWidget *tab_4;
    QPushButton *BoutonExpedition;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_8;
    QLabel *labelCodeArticleExpedition;
    QLineEdit *lineEditCodeArticleExpedition;
    QLabel *labelQuantiteExpedition;
    QLineEdit *lineEditQuantiteExpedition;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(905, 614);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 901, 531));
        tabConsulter = new QWidget();
        tabConsulter->setObjectName(QStringLiteral("tabConsulter"));
        ButonAfficheStockComplet = new QPushButton(tabConsulter);
        ButonAfficheStockComplet->setObjectName(QStringLiteral("ButonAfficheStockComplet"));
        ButonAfficheStockComplet->setGeometry(QRect(340, 10, 121, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ButonAfficheStockComplet->setFont(font);
        tableView = new QTableView(tabConsulter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 40, 881, 501));
        BoutonExportExcel = new QPushButton(tabConsulter);
        BoutonExportExcel->setObjectName(QStringLiteral("BoutonExportExcel"));
        BoutonExportExcel->setGeometry(QRect(810, 10, 75, 23));
        BoutonExportExcel->setFont(font);
        spinBoxTaillePolice = new QSpinBox(tabConsulter);
        spinBoxTaillePolice->setObjectName(QStringLiteral("spinBoxTaillePolice"));
        spinBoxTaillePolice->setGeometry(QRect(92, 14, 76, 20));
        labelTaillePoliceTableView = new QLabel(tabConsulter);
        labelTaillePoliceTableView->setObjectName(QStringLiteral("labelTaillePoliceTableView"));
        labelTaillePoliceTableView->setGeometry(QRect(10, 10, 76, 29));
        tabWidget->addTab(tabConsulter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 881, 371));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 881, 290));
        verticalLayoutWidget_3 = new QWidget(page);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(170, 0, 521, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lineEditAjoutCodeArticle = new QLineEdit(verticalLayoutWidget_3);
        lineEditAjoutCodeArticle->setObjectName(QStringLiteral("lineEditAjoutCodeArticle"));

        gridLayout_5->addWidget(lineEditAjoutCodeArticle, 0, 1, 1, 1);

        lineEditAjoutPoidsArticle = new QLineEdit(verticalLayoutWidget_3);
        lineEditAjoutPoidsArticle->setObjectName(QStringLiteral("lineEditAjoutPoidsArticle"));

        gridLayout_5->addWidget(lineEditAjoutPoidsArticle, 2, 1, 1, 1);

        lineEditAjoutDesignationArticle = new QLineEdit(verticalLayoutWidget_3);
        lineEditAjoutDesignationArticle->setObjectName(QStringLiteral("lineEditAjoutDesignationArticle"));

        gridLayout_5->addWidget(lineEditAjoutDesignationArticle, 1, 1, 1, 1);

        labelAjouterPoidsArticle = new QLabel(verticalLayoutWidget_3);
        labelAjouterPoidsArticle->setObjectName(QStringLiteral("labelAjouterPoidsArticle"));

        gridLayout_5->addWidget(labelAjouterPoidsArticle, 2, 0, 1, 1);

        lineEditAjoutEmplacementArticle = new QLineEdit(verticalLayoutWidget_3);
        lineEditAjoutEmplacementArticle->setObjectName(QStringLiteral("lineEditAjoutEmplacementArticle"));

        gridLayout_5->addWidget(lineEditAjoutEmplacementArticle, 3, 1, 1, 1);

        labelAjouterCodeArticle = new QLabel(verticalLayoutWidget_3);
        labelAjouterCodeArticle->setObjectName(QStringLiteral("labelAjouterCodeArticle"));

        gridLayout_5->addWidget(labelAjouterCodeArticle, 0, 0, 1, 1);

        labelAjouterDesignationArticle = new QLabel(verticalLayoutWidget_3);
        labelAjouterDesignationArticle->setObjectName(QStringLiteral("labelAjouterDesignationArticle"));

        gridLayout_5->addWidget(labelAjouterDesignationArticle, 1, 0, 1, 1);

        comboBoxDimensionEmballage = new QComboBox(verticalLayoutWidget_3);
        comboBoxDimensionEmballage->setObjectName(QStringLiteral("comboBoxDimensionEmballage"));
        comboBoxDimensionEmballage->setEditable(false);
        comboBoxDimensionEmballage->setModelColumn(0);

        gridLayout_5->addWidget(comboBoxDimensionEmballage, 4, 1, 1, 1);

        labelAjouterEmplacementArticle = new QLabel(verticalLayoutWidget_3);
        labelAjouterEmplacementArticle->setObjectName(QStringLiteral("labelAjouterEmplacementArticle"));

        gridLayout_5->addWidget(labelAjouterEmplacementArticle, 3, 0, 1, 1);

        labelAjouterDimensionEmballage = new QLabel(verticalLayoutWidget_3);
        labelAjouterDimensionEmballage->setObjectName(QStringLiteral("labelAjouterDimensionEmballage"));

        gridLayout_5->addWidget(labelAjouterDimensionEmballage, 4, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        boutonAjoutArticle = new QPushButton(verticalLayoutWidget_3);
        boutonAjoutArticle->setObjectName(QStringLiteral("boutonAjoutArticle"));
        boutonAjoutArticle->setEnabled(true);
        boutonAjoutArticle->setFont(font);
        boutonAjoutArticle->setMouseTracking(false);

        verticalLayout_3->addWidget(boutonAjoutArticle);

        labelAjoutArticleInformations = new QLabel(page);
        labelAjoutArticleInformations->setObjectName(QStringLiteral("labelAjoutArticleInformations"));
        labelAjoutArticleInformations->setGeometry(QRect(170, 220, 521, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        labelAjoutArticleInformations->setFont(font1);
        toolBox->addItem(page, QStringLiteral("Ajout Article"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 30));
        verticalLayoutWidget_4 = new QWidget(page_2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(230, 10, 361, 271));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        comboBoxLongueurEmballage = new QComboBox(verticalLayoutWidget_4);
        comboBoxLongueurEmballage->addItem(QString());
        comboBoxLongueurEmballage->addItem(QString());
        comboBoxLongueurEmballage->addItem(QString());
        comboBoxLongueurEmballage->setObjectName(QStringLiteral("comboBoxLongueurEmballage"));

        gridLayout_4->addWidget(comboBoxLongueurEmballage, 3, 1, 1, 1);

        comboBoxLargeurEmballage = new QComboBox(verticalLayoutWidget_4);
        comboBoxLargeurEmballage->addItem(QString());
        comboBoxLargeurEmballage->addItem(QString());
        comboBoxLargeurEmballage->addItem(QString());
        comboBoxLargeurEmballage->setObjectName(QStringLiteral("comboBoxLargeurEmballage"));

        gridLayout_4->addWidget(comboBoxLargeurEmballage, 2, 1, 1, 1);

        comboBoxHauteurEmballage = new QComboBox(verticalLayoutWidget_4);
        comboBoxHauteurEmballage->addItem(QString());
        comboBoxHauteurEmballage->addItem(QString());
        comboBoxHauteurEmballage->addItem(QString());
        comboBoxHauteurEmballage->setObjectName(QStringLiteral("comboBoxHauteurEmballage"));

        gridLayout_4->addWidget(comboBoxHauteurEmballage, 1, 1, 1, 1);

        label_11 = new QLabel(verticalLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(verticalLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 3, 0, 1, 1);

        label_10 = new QLabel(verticalLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        comboBoxTypeEmballage = new QComboBox(verticalLayoutWidget_4);
        comboBoxTypeEmballage->addItem(QString());
        comboBoxTypeEmballage->addItem(QString());
        comboBoxTypeEmballage->setObjectName(QStringLiteral("comboBoxTypeEmballage"));

        gridLayout_4->addWidget(comboBoxTypeEmballage, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        AjoutEmballage = new QPushButton(verticalLayoutWidget_4);
        AjoutEmballage->setObjectName(QStringLiteral("AjoutEmballage"));
        AjoutEmballage->setFont(font);

        verticalLayout_4->addWidget(AjoutEmballage);

        toolBox->addItem(page_2, QStringLiteral("Ajout Emballage"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 100, 30));
        horizontalLayoutWidget = new QWidget(page_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 10, 441, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAjoutNomFournisseur = new QLabel(horizontalLayoutWidget);
        labelAjoutNomFournisseur->setObjectName(QStringLiteral("labelAjoutNomFournisseur"));

        horizontalLayout->addWidget(labelAjoutNomFournisseur);

        lineEditAjoutFournisseur = new QLineEdit(horizontalLayoutWidget);
        lineEditAjoutFournisseur->setObjectName(QStringLiteral("lineEditAjoutFournisseur"));

        horizontalLayout->addWidget(lineEditAjoutFournisseur);

        butonAjoutFournisseur = new QPushButton(horizontalLayoutWidget);
        butonAjoutFournisseur->setObjectName(QStringLiteral("butonAjoutFournisseur"));
        butonAjoutFournisseur->setFont(font);

        horizontalLayout->addWidget(butonAjoutFournisseur);

        labelFournisseurInformations = new QLabel(page_3);
        labelFournisseurInformations->setObjectName(QStringLiteral("labelFournisseurInformations"));
        labelFournisseurInformations->setGeometry(QRect(160, 90, 441, 51));
        labelFournisseurInformations->setFont(font1);
        toolBox->addItem(page_3, QStringLiteral("Ajout Fournisseur"));
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
        boutonSupprimer->setFont(font);

        gridLayout_6->addWidget(boutonSupprimer, 0, 1, 1, 1);

        tabWidget->addTab(tabSupprimer, QString());
        tabModifier = new QWidget();
        tabModifier->setObjectName(QStringLiteral("tabModifier"));
        gridLayoutWidget_2 = new QWidget(tabModifier);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 441, 31));
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
        boutonModifier->setFont(font);

        gridLayout_2->addWidget(boutonModifier, 0, 1, 1, 1);

        verticalLayoutWidget_5 = new QWidget(tabModifier);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 50, 441, 241));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        lineEditModificationDesignationArticle = new QLineEdit(verticalLayoutWidget_5);
        lineEditModificationDesignationArticle->setObjectName(QStringLiteral("lineEditModificationDesignationArticle"));

        gridLayout_7->addWidget(lineEditModificationDesignationArticle, 2, 1, 1, 1);

        ModificationEmplacement_2 = new QLabel(verticalLayoutWidget_5);
        ModificationEmplacement_2->setObjectName(QStringLiteral("ModificationEmplacement_2"));

        gridLayout_7->addWidget(ModificationEmplacement_2, 2, 0, 1, 1);

        ModificationCodeArticle = new QLabel(verticalLayoutWidget_5);
        ModificationCodeArticle->setObjectName(QStringLiteral("ModificationCodeArticle"));

        gridLayout_7->addWidget(ModificationCodeArticle, 0, 0, 1, 1);

        lineEditModificationPoidsArticle = new QLineEdit(verticalLayoutWidget_5);
        lineEditModificationPoidsArticle->setObjectName(QStringLiteral("lineEditModificationPoidsArticle"));
        lineEditModificationPoidsArticle->setFrame(true);

        gridLayout_7->addWidget(lineEditModificationPoidsArticle, 4, 1, 1, 1);

        lineEditModificationEmplacementArticle = new QLineEdit(verticalLayoutWidget_5);
        lineEditModificationEmplacementArticle->setObjectName(QStringLiteral("lineEditModificationEmplacementArticle"));

        gridLayout_7->addWidget(lineEditModificationEmplacementArticle, 5, 1, 1, 1);

        lineEditModificationCodeArticle = new QLineEdit(verticalLayoutWidget_5);
        lineEditModificationCodeArticle->setObjectName(QStringLiteral("lineEditModificationCodeArticle"));

        gridLayout_7->addWidget(lineEditModificationCodeArticle, 0, 1, 1, 1);

        ModificationEmplacement_3 = new QLabel(verticalLayoutWidget_5);
        ModificationEmplacement_3->setObjectName(QStringLiteral("ModificationEmplacement_3"));

        gridLayout_7->addWidget(ModificationEmplacement_3, 4, 0, 1, 1);

        ModificationEmplacement = new QLabel(verticalLayoutWidget_5);
        ModificationEmplacement->setObjectName(QStringLiteral("ModificationEmplacement"));

        gridLayout_7->addWidget(ModificationEmplacement, 5, 0, 1, 1);

        labelModifierDimensionEmballage = new QLabel(verticalLayoutWidget_5);
        labelModifierDimensionEmballage->setObjectName(QStringLiteral("labelModifierDimensionEmballage"));

        gridLayout_7->addWidget(labelModifierDimensionEmballage, 6, 0, 1, 1);

        comboBoxModifierDimensionEmballage = new QComboBox(verticalLayoutWidget_5);
        comboBoxModifierDimensionEmballage->setObjectName(QStringLiteral("comboBoxModifierDimensionEmballage"));

        gridLayout_7->addWidget(comboBoxModifierDimensionEmballage, 6, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_7);

        pushButtonValidationModification = new QPushButton(verticalLayoutWidget_5);
        pushButtonValidationModification->setObjectName(QStringLiteral("pushButtonValidationModification"));
        pushButtonValidationModification->setFont(font);

        verticalLayout_5->addWidget(pushButtonValidationModification);

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
        boutonRechercher->setFont(font);

        gridLayout->addWidget(boutonRechercher, 0, 1, 1, 1);

        tabWidget->addTab(tabRechercher, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 30, 431, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditRechercher = new QLineEdit(verticalLayoutWidget_2);
        lineEditRechercher->setObjectName(QStringLiteral("lineEditRechercher"));

        verticalLayout_2->addWidget(lineEditRechercher);

        boutonConsulterFicheProduit = new QPushButton(verticalLayoutWidget_2);
        boutonConsulterFicheProduit->setObjectName(QStringLiteral("boutonConsulterFicheProduit"));
        boutonConsulterFicheProduit->setFont(font);

        verticalLayout_2->addWidget(boutonConsulterFicheProduit);

        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(189, 160, 431, 161));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        afficheCodeArticle = new QLineEdit(gridLayoutWidget_3);
        afficheCodeArticle->setObjectName(QStringLiteral("afficheCodeArticle"));
        afficheCodeArticle->setReadOnly(true);

        gridLayout_3->addWidget(afficheCodeArticle, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        affichePoidsArticle = new QLineEdit(gridLayoutWidget_3);
        affichePoidsArticle->setObjectName(QStringLiteral("affichePoidsArticle"));
        affichePoidsArticle->setReadOnly(true);

        gridLayout_3->addWidget(affichePoidsArticle, 2, 1, 1, 1);

        codeArticle = new QLabel(gridLayoutWidget_3);
        codeArticle->setObjectName(QStringLiteral("codeArticle"));

        gridLayout_3->addWidget(codeArticle, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        afficheEmplacementArticle = new QLineEdit(gridLayoutWidget_3);
        afficheEmplacementArticle->setObjectName(QStringLiteral("afficheEmplacementArticle"));
        afficheEmplacementArticle->setReadOnly(true);

        gridLayout_3->addWidget(afficheEmplacementArticle, 3, 1, 1, 1);

        afficheDesignationArticle = new QLineEdit(gridLayoutWidget_3);
        afficheDesignationArticle->setObjectName(QStringLiteral("afficheDesignationArticle"));
        afficheDesignationArticle->setReadOnly(true);

        gridLayout_3->addWidget(afficheDesignationArticle, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 4, 0, 1, 1);

        afficheEmballageArticle = new QLineEdit(gridLayoutWidget_3);
        afficheEmballageArticle->setObjectName(QStringLiteral("afficheEmballageArticle"));
        afficheEmballageArticle->setReadOnly(true);

        gridLayout_3->addWidget(afficheEmballageArticle, 4, 1, 1, 1);

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
        pushButtonCreationUtilisateur->setFont(font);

        verticalLayout->addWidget(pushButtonCreationUtilisateur);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget_6 = new QWidget(tab_5);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(170, 30, 501, 157));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        lineEditNumeroLivraison = new QLineEdit(verticalLayoutWidget_6);
        lineEditNumeroLivraison->setObjectName(QStringLiteral("lineEditNumeroLivraison"));

        gridLayout_9->addWidget(lineEditNumeroLivraison, 2, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_9->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_9->addWidget(label_8, 3, 0, 1, 1);

        lineEditDateLivraison = new QLineEdit(verticalLayoutWidget_6);
        lineEditDateLivraison->setObjectName(QStringLiteral("lineEditDateLivraison"));

        gridLayout_9->addWidget(lineEditDateLivraison, 3, 1, 1, 1);

        lineEditArticleLivre = new QLineEdit(verticalLayoutWidget_6);
        lineEditArticleLivre->setObjectName(QStringLiteral("lineEditArticleLivre"));

        gridLayout_9->addWidget(lineEditArticleLivre, 0, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_9->addWidget(label_6, 1, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        lineEditQteLivree = new QLineEdit(verticalLayoutWidget_6);
        lineEditQteLivree->setObjectName(QStringLiteral("lineEditQteLivree"));

        gridLayout_9->addWidget(lineEditQteLivree, 1, 1, 1, 1);

        lineEditFournisseurLivraison = new QLineEdit(verticalLayoutWidget_6);
        lineEditFournisseurLivraison->setObjectName(QStringLiteral("lineEditFournisseurLivraison"));

        gridLayout_9->addWidget(lineEditFournisseurLivraison, 4, 1, 1, 1);

        label_13 = new QLabel(verticalLayoutWidget_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_9->addWidget(label_13, 4, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_9);

        BoutonValiderReception = new QPushButton(verticalLayoutWidget_6);
        BoutonValiderReception->setObjectName(QStringLiteral("BoutonValiderReception"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(true);
        BoutonValiderReception->setFont(font2);

        verticalLayout_7->addWidget(BoutonValiderReception);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        BoutonExpedition = new QPushButton(tab_4);
        BoutonExpedition->setObjectName(QStringLiteral("BoutonExpedition"));
        BoutonExpedition->setGeometry(QRect(310, 160, 75, 23));
        gridLayoutWidget_4 = new QWidget(tab_4);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(270, 70, 160, 80));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        labelCodeArticleExpedition = new QLabel(gridLayoutWidget_4);
        labelCodeArticleExpedition->setObjectName(QStringLiteral("labelCodeArticleExpedition"));

        gridLayout_8->addWidget(labelCodeArticleExpedition, 0, 0, 1, 1);

        lineEditCodeArticleExpedition = new QLineEdit(gridLayoutWidget_4);
        lineEditCodeArticleExpedition->setObjectName(QStringLiteral("lineEditCodeArticleExpedition"));

        gridLayout_8->addWidget(lineEditCodeArticleExpedition, 0, 1, 1, 1);

        labelQuantiteExpedition = new QLabel(gridLayoutWidget_4);
        labelQuantiteExpedition->setObjectName(QStringLiteral("labelQuantiteExpedition"));

        gridLayout_8->addWidget(labelQuantiteExpedition, 1, 0, 1, 1);

        lineEditQuantiteExpedition = new QLineEdit(gridLayoutWidget_4);
        lineEditQuantiteExpedition->setObjectName(QStringLiteral("lineEditQuantiteExpedition"));

        gridLayout_8->addWidget(lineEditQuantiteExpedition, 1, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, ButonAfficheStockComplet);
        QWidget::setTabOrder(ButonAfficheStockComplet, tableView);
        QWidget::setTabOrder(tableView, lineEditAjoutCodeArticle);
        QWidget::setTabOrder(lineEditAjoutCodeArticle, lineEditAjoutDesignationArticle);
        QWidget::setTabOrder(lineEditAjoutDesignationArticle, lineEditAjoutPoidsArticle);
        QWidget::setTabOrder(lineEditAjoutPoidsArticle, lineEditAjoutEmplacementArticle);
        QWidget::setTabOrder(lineEditAjoutEmplacementArticle, comboBoxDimensionEmballage);
        QWidget::setTabOrder(comboBoxDimensionEmballage, boutonAjoutArticle);
        QWidget::setTabOrder(boutonAjoutArticle, lineEditSupprimerArticle);
        QWidget::setTabOrder(lineEditSupprimerArticle, boutonSupprimer);
        QWidget::setTabOrder(boutonSupprimer, lineEditModifierArticle);
        QWidget::setTabOrder(lineEditModifierArticle, boutonModifier);
        QWidget::setTabOrder(boutonModifier, lineEditModificationCodeArticle);
        QWidget::setTabOrder(lineEditModificationCodeArticle, lineEditModificationDesignationArticle);
        QWidget::setTabOrder(lineEditModificationDesignationArticle, lineEditModificationPoidsArticle);
        QWidget::setTabOrder(lineEditModificationPoidsArticle, lineEditModificationEmplacementArticle);
        QWidget::setTabOrder(lineEditModificationEmplacementArticle, comboBoxModifierDimensionEmballage);
        QWidget::setTabOrder(comboBoxModifierDimensionEmballage, pushButtonValidationModification);
        QWidget::setTabOrder(pushButtonValidationModification, lineEdit);
        QWidget::setTabOrder(lineEdit, boutonRechercher);
        QWidget::setTabOrder(boutonRechercher, lineEditRechercher);
        QWidget::setTabOrder(lineEditRechercher, boutonConsulterFicheProduit);
        QWidget::setTabOrder(boutonConsulterFicheProduit, afficheCodeArticle);
        QWidget::setTabOrder(afficheCodeArticle, afficheDesignationArticle);
        QWidget::setTabOrder(afficheDesignationArticle, affichePoidsArticle);
        QWidget::setTabOrder(affichePoidsArticle, afficheEmplacementArticle);
        QWidget::setTabOrder(afficheEmplacementArticle, afficheEmballageArticle);
        QWidget::setTabOrder(afficheEmballageArticle, lineEditeCreationLogin);
        QWidget::setTabOrder(lineEditeCreationLogin, lineEditeCreationMotDePasse);
        QWidget::setTabOrder(lineEditeCreationMotDePasse, comboBoxChoixDroitUtilisateur);
        QWidget::setTabOrder(comboBoxChoixDroitUtilisateur, pushButtonCreationUtilisateur);
        QWidget::setTabOrder(pushButtonCreationUtilisateur, AjoutEmballage);
        QWidget::setTabOrder(AjoutEmballage, comboBoxTypeEmballage);
        QWidget::setTabOrder(comboBoxTypeEmballage, comboBoxHauteurEmballage);
        QWidget::setTabOrder(comboBoxHauteurEmballage, comboBoxLargeurEmballage);
        QWidget::setTabOrder(comboBoxLargeurEmballage, comboBoxLongueurEmballage);
        QWidget::setTabOrder(comboBoxLongueurEmballage, lineEditAjoutFournisseur);
        QWidget::setTabOrder(lineEditAjoutFournisseur, butonAjoutFournisseur);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WareHouseManager", nullptr));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuitter->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tabConsulter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButonAfficheStockComplet->setText(QApplication::translate("MainWindow", "Afficher le stock", nullptr));
        BoutonExportExcel->setText(QApplication::translate("MainWindow", "Export CSV", nullptr));
        labelTaillePoliceTableView->setText(QApplication::translate("MainWindow", "Taille Police", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConsulter), QApplication::translate("MainWindow", "Consulter stock", nullptr));
        lineEditAjoutCodeArticle->setInputMask(QString());
        lineEditAjoutCodeArticle->setText(QString());
        lineEditAjoutCodeArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        lineEditAjoutPoidsArticle->setInputMask(QString());
        lineEditAjoutPoidsArticle->setText(QString());
        lineEditAjoutPoidsArticle->setPlaceholderText(QApplication::translate("MainWindow", "Poids", nullptr));
        lineEditAjoutDesignationArticle->setPlaceholderText(QApplication::translate("MainWindow", "Libelle", nullptr));
        labelAjouterPoidsArticle->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        lineEditAjoutEmplacementArticle->setPlaceholderText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        labelAjouterCodeArticle->setText(QApplication::translate("MainWindow", "Code Article", nullptr));
        labelAjouterDesignationArticle->setText(QApplication::translate("MainWindow", "Libelle", nullptr));
        labelAjouterEmplacementArticle->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        labelAjouterDimensionEmballage->setText(QApplication::translate("MainWindow", "Dimension L * l * h", nullptr));
        boutonAjoutArticle->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        labelAjoutArticleInformations->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Ajout Article", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Type Emballage", nullptr));
        comboBoxLongueurEmballage->setItemText(0, QApplication::translate("MainWindow", "70", nullptr));
        comboBoxLongueurEmballage->setItemText(1, QApplication::translate("MainWindow", "78", nullptr));
        comboBoxLongueurEmballage->setItemText(2, QApplication::translate("MainWindow", "80", nullptr));

        comboBoxLargeurEmballage->setItemText(0, QApplication::translate("MainWindow", "60", nullptr));
        comboBoxLargeurEmballage->setItemText(1, QApplication::translate("MainWindow", "38", nullptr));
        comboBoxLargeurEmballage->setItemText(2, QApplication::translate("MainWindow", "58", nullptr));

        comboBoxHauteurEmballage->setItemText(0, QApplication::translate("MainWindow", "60", nullptr));
        comboBoxHauteurEmballage->setItemText(1, QApplication::translate("MainWindow", "30", nullptr));
        comboBoxHauteurEmballage->setItemText(2, QApplication::translate("MainWindow", "50", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "Largeur", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Longueur", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Hauteur", nullptr));
        comboBoxTypeEmballage->setItemText(0, QApplication::translate("MainWindow", "Carton", nullptr));
        comboBoxTypeEmballage->setItemText(1, QApplication::translate("MainWindow", "Palette", nullptr));

        AjoutEmballage->setText(QApplication::translate("MainWindow", "Valdier", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Ajout Emballage", nullptr));
        labelAjoutNomFournisseur->setText(QApplication::translate("MainWindow", "Nom fournisseur", nullptr));
        butonAjoutFournisseur->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        labelFournisseurInformations->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "Ajout Fournisseur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajouter", nullptr));
        lineEditSupprimerArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSupprimer), QApplication::translate("MainWindow", "Supprimer", nullptr));
        lineEditModifierArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonModifier->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        ModificationEmplacement_2->setText(QApplication::translate("MainWindow", "D\303\251signation", nullptr));
        ModificationCodeArticle->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        lineEditModificationPoidsArticle->setInputMask(QString());
        ModificationEmplacement_3->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        ModificationEmplacement->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        labelModifierDimensionEmballage->setText(QApplication::translate("MainWindow", "Dimension L * l * h", nullptr));
        pushButtonValidationModification->setText(QApplication::translate("MainWindow", "Valider", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabModifier), QApplication::translate("MainWindow", "Modifier", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Article ou emplacement", nullptr));
        boutonRechercher->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRechercher), QApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEditRechercher->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonConsulterFicheProduit->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        label->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "D\303\251signation", nullptr));
        codeArticle->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Emballage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Consulter fiche produit", nullptr));
        lineEditeCreationLogin->setPlaceholderText(QApplication::translate("MainWindow", "Login", nullptr));
        lineEditeCreationMotDePasse->setPlaceholderText(QApplication::translate("MainWindow", "Mot de passe", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(0, QApplication::translate("MainWindow", "Logisticien", nullptr));
        comboBoxChoixDroitUtilisateur->setItemText(1, QApplication::translate("MainWindow", "Administrateur", nullptr));

        pushButtonCreationUtilisateur->setText(QApplication::translate("MainWindow", "Validez", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Creation d'utilisateur", nullptr));
        lineEditNumeroLivraison->setPlaceholderText(QApplication::translate("MainWindow", "Num\303\251ro de livraison", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Num\303\251ro de livraison", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Date de livraison", nullptr));
        lineEditDateLivraison->setPlaceholderText(QApplication::translate("MainWindow", "Date de livraison", nullptr));
        lineEditArticleLivre->setPlaceholderText(QApplication::translate("MainWindow", "Article livr\303\251", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Quantit\303\251 livr\303\251e", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Article livr\303\251", nullptr));
        lineEditQteLivree->setPlaceholderText(QApplication::translate("MainWindow", "Quantit\303\251 livr\303\251e", nullptr));
        lineEditFournisseurLivraison->setPlaceholderText(QApplication::translate("MainWindow", "Fournisseur ", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Fournisseur", nullptr));
        BoutonValiderReception->setText(QApplication::translate("MainWindow", "Valider", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "R\303\251ception commande", nullptr));
        BoutonExpedition->setText(QApplication::translate("MainWindow", "Valider", nullptr));
        labelCodeArticleExpedition->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        labelQuantiteExpedition->setText(QApplication::translate("MainWindow", "Quantite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Exp\303\251dition", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
