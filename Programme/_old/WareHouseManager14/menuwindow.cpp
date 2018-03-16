#include "menuwindow.h"
#include "ui_menuwindow.h"

menuwindow::menuwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuwindow)
{
    ui->setupUi(this);
    setFixedSize(500,500);
}

menuwindow::~menuwindow()
{
    delete ui;
}

