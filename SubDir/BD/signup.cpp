#include "signup.h"
#include "ui_signup.h"
#include "signupmodel.h"

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}
void Signup::onSave() {

int age = ui->lineEditAge->getValue();
mModel->setData( SignupIndex::Age, age );

// TODO: get another info and save in model

mModel->sync();
}

Signup::~Signup()
{
    delete ui;
}
