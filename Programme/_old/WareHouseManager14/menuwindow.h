#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>

namespace Ui {
class menuwindow;
}

class menuwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuwindow(QWidget *parent = 0);
    ~menuwindow();

private:
    Ui::menuwindow *ui;


};

#endif // MENUWINDOW_H
