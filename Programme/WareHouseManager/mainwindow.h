#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "database.h"
#include <QVBoxLayout>
#include <QDialog>
#include <QDialogButtonBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_boutonAjoutProduit_clicked();
    void on_boutonSupprimer_clicked();

//    void on_boutonConsulterFicheProduit_clicked();

//    void on_boutonModifier_clicked();

    void on_boutonConsulterFicheProduit_clicked();

private:
    void afficheFenetreLogin();
    void verificationLogin();
    Ui::MainWindow *ui;
    database bdd;

    QDialog * fenetreLogin = new QDialog();
    QVBoxLayout * vbox = new QVBoxLayout();
    QLineEdit * login = new QLineEdit();
    QLineEdit * motDePasse = new QLineEdit();
    QDialogButtonBox * buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);

};

#endif // MAINWINDOW_H
