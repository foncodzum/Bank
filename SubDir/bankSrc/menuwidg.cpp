#include "menuwidg.h"
#include "ui_menuwidg.h"
#include"menuwidg.h"
#include <QWidget>
MenuWidg::MenuWidg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidg)
{
    ui->setupUi(this);
    signup = new Signup;
    //инициализируем второй виджет
    //выдает ошибку не понимаю почему
}
MenuWidg::~MenuWidg()
{
    delete ui;
}

void MenuWidg::on_logIn_btn_clicked()
{
    signup->show();
}

