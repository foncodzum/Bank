#include "signup.h"
#include "ui_signup.h"
#include <QLineEdit>
#include <QWidget>
#include <QString>
Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);

}

void Signup::onSave() {

    int age = ui->lineEditAge->getValue();
     mModel->setData( SignupIndex::Age, age ); //слот который будет получать
    //значения которые введет пользователь

// TODO: get another info and save in model

     mModel->sync();
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    emit sig_signup();
}
