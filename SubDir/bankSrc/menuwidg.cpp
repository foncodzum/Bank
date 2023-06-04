#include "menuwidg.h"
#include "ui_menuwidg.h"
#include "menuwidg.h"
#include "loginwidg.h"

MenuWidg::MenuWidg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidg)
{
    ui->setupUi(this);

    QObject::connect(ui->logIn_btn, SIGNAL(pressed()), this, SLOT(on_logIn_btn_pressed()));
    QObject::connect(ui->savings_btn, SIGNAL(pressed()), this, SLOT(on_savings_btn_pressed()));
    QObject::connect(ui->loan_btn, SIGNAL(pressed()), this, SLOT(on_loan_btn_pressed()));

    sWidg = new logInWidg();
    QObject::connect(sWidg, &logInWidg::firstWindow, this, &MenuWidg::show);
}

MenuWidg::~MenuWidg()
{
    delete ui;
}

void MenuWidg::on_logIn_btn_clicked()
{
    sWidg->show();
}

void MenuWidg::on_logIn_btn_pressed()
{
    if (sender() == ui->logIn_btn)
    {
        emit btnPressed(MenuAct_logIn);
    }
}

void MenuWidg::on_loan_btn_pressed()
{
    if (sender() == ui->loan_btn)
    {
        emit btnPressed(MenuAct_loan);
    }
}

void MenuWidg::on_savings_btn_pressed()
{
    if (sender() == ui->savings_btn)
    {
        emit btnPressed(MenuAct_savings);
    }
}
