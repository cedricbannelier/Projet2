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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabConsulter;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditAjoutArticle;
    QPushButton *boutonAjoutProduit;
    QLineEdit *lineEditAjoutArticleLibelle;
    QLineEdit *lineEditAjoutArticlePrix;
    QLabel *labelErreurAjoutProduit;
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
    QLabel *codeArticle;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *textEdit_5;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_6;
    QTextEdit *textEdit_6;
    QTextBrowser *afficheCodeArticle;
    QLabel *labelId;
    QLabel *labelNom;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(858, 539);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 851, 451));
        tabConsulter = new QWidget();
        tabConsulter->setObjectName(QStringLiteral("tabConsulter"));
        tableWidget = new QTableWidget(tabConsulter);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 711, 391));
        tabWidget->addTab(tabConsulter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_5 = new QWidget(tab_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 10, 291, 103));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEditAjoutArticle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutArticle->setObjectName(QStringLiteral("lineEditAjoutArticle"));

        gridLayout_5->addWidget(lineEditAjoutArticle, 0, 0, 1, 1);

        boutonAjoutProduit = new QPushButton(gridLayoutWidget_5);
        boutonAjoutProduit->setObjectName(QStringLiteral("boutonAjoutProduit"));
        boutonAjoutProduit->setEnabled(true);
        boutonAjoutProduit->setMouseTracking(false);

        gridLayout_5->addWidget(boutonAjoutProduit, 3, 0, 1, 1);

        lineEditAjoutArticleLibelle = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutArticleLibelle->setObjectName(QStringLiteral("lineEditAjoutArticleLibelle"));

        gridLayout_5->addWidget(lineEditAjoutArticleLibelle, 1, 0, 1, 1);

        lineEditAjoutArticlePrix = new QLineEdit(gridLayoutWidget_5);
        lineEditAjoutArticlePrix->setObjectName(QStringLiteral("lineEditAjoutArticlePrix"));

        gridLayout_5->addWidget(lineEditAjoutArticlePrix, 2, 0, 1, 1);

        labelErreurAjoutProduit = new QLabel(tab_2);
        labelErreurAjoutProduit->setObjectName(QStringLiteral("labelErreurAjoutProduit"));
        labelErreurAjoutProduit->setGeometry(QRect(350, 30, 281, 16));
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
        gridLayoutWidget_4->setGeometry(QRect(40, 60, 711, 227));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        codeArticle = new QLabel(gridLayoutWidget_4);
        codeArticle->setObjectName(QStringLiteral("codeArticle"));

        gridLayout_4->addWidget(codeArticle, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget_4);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout_4->addWidget(textEdit_3, 2, 1, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget_4);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout_4->addWidget(textEdit_4, 0, 4, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 2, 1, 1);

        textEdit_5 = new QTextEdit(gridLayoutWidget_4);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout_4->addWidget(textEdit_5, 1, 4, 1, 1);

        label = new QLabel(gridLayoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_4->addWidget(textEdit, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 2, 1, 1);

        textEdit_6 = new QTextEdit(gridLayoutWidget_4);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));

        gridLayout_4->addWidget(textEdit_6, 2, 4, 1, 1);

        afficheCodeArticle = new QTextBrowser(gridLayoutWidget_4);
        afficheCodeArticle->setObjectName(QStringLiteral("afficheCodeArticle"));

        gridLayout_4->addWidget(afficheCodeArticle, 0, 1, 1, 1);

        labelId = new QLabel(tab);
        labelId->setObjectName(QStringLiteral("labelId"));
        labelId->setGeometry(QRect(350, 10, 251, 16));
        labelNom = new QLabel(tab);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        labelNom->setGeometry(QRect(350, 30, 251, 16));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 858, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        tabConsulter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Code Article", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Libell\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Emplacement", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Qt\303\251 Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Qt\303\251 cmd", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "CJM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConsulter), QApplication::translate("MainWindow", "Consulter stock", nullptr));
        lineEditAjoutArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonAjoutProduit->setText(QApplication::translate("MainWindow", "Ajout", nullptr));
        lineEditAjoutArticleLibelle->setPlaceholderText(QApplication::translate("MainWindow", "Libelle", nullptr));
        lineEditAjoutArticlePrix->setPlaceholderText(QApplication::translate("MainWindow", "Prix", nullptr));
        labelErreurAjoutProduit->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajouter", nullptr));
        lineEditSupprimerArticle->setPlaceholderText(QApplication::translate("MainWindow", "Produit", nullptr));
        boutonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSupprimer), QApplication::translate("MainWindow", "Supprimer", nullptr));
        lineEditModifierArticle->setPlaceholderText(QApplication::translate("MainWindow", "Article", nullptr));
        boutonModifier->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabModifier), QApplication::translate("MainWindow", "Modifier", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Article ou emplacement", nullptr));
        boutonRechercher->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRechercher), QApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEditRechercher->setPlaceholderText(QApplication::translate("MainWindow", "Article ou emplacement", nullptr));
        boutonConsulterFicheProduit->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        codeArticle->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Poids", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        label->setText(QApplication::translate("MainWindow", "Libelle", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Code article", nullptr));
        labelId->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        labelNom->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Consulter fiche produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
