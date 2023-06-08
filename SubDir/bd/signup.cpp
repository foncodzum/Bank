#include "signup.h"
#include "ui_signup.h"
#include "signupmodel.h"
SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}
void SignUp::onSave() {

int age = ui->lineEditAge->text().toInt();
mModel->setData( SignupIndex::Age, age );

// TODO: get another info and save in model

mModel->sync();
}

