#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "menuwindow.h"

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
    void openMenuWindow();
    void on_bEntrer_clicked();


private:
    Ui::MainWindow *ui;
    menuwindow *fenetre;
};

#endif // MAINWINDOW_H
