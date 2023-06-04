#include "loginwidg.h"
#include "ui_loginwidg.h"

logInWidg::logInWidg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logInWidg)
{
    ui->setupUi(this);
}

logInWidg::~logInWidg()
{
    delete ui;
}
