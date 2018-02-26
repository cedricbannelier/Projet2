#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "database.h"

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

    void on_boutonModifier_clicked();



    void on_boutonConsulterFicheProduit_clicked();

private:
    Ui::MainWindow *ui;
    database bdd;

};

#endif // MAINWINDOW_H
