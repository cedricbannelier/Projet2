#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void login();
    ~MainWindow();

private slots:

    void on_bEntrer_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
