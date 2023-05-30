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

logIn_btnWithId :: logIn_btnWithId(int id)
{
    Id=id;
}

void logIn_btnWithId :: setId(int id)
{
    Id=id;
}

void logIn_btnWithId :: mouseReleaseEvent(QMouseEvent *event())
{
    emit clicked(Id);
}

void MenuWidg::on_logIn_btn_clicked()
{
}
