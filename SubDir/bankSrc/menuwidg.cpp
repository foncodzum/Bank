#include "menuwidg.h"
#include "ui_menuwidg.h"
#include"menuwidg.h"

MenuWidg::MenuWidg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidg)
{
    ui->setupUi(this);
}

MenuWidg::~MenuWidg()
{
    delete ui;
}

void MenuWidg::on_logIn_btn_clicked()
{
    id = 1;
}

void MenuWidg::on_loan_btn_clicked()
{
    id = 2;
}

void MenuWidg::on_savings_btn_clicked()
{
    id = 3;
}
