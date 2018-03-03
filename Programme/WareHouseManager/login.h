#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "Database.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
