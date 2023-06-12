#include "signup.h"
#include "ui_signup.h"
#include "signupmodel.h"
#include <QLineEdit>
Signup::Signup(QWidget *parent) : QWidget(parent), ui(new Ui::Form)
{
    ui->setupUi(this);

}
void Signup::onSave() {

    SignupModel *mModel = new SignupModel;
    //SignupModel::SignupIndex::Age;
    int age = ui->lineEditAge->text().toInt();
mModel->setData( SignupModel::SignupIndex::Age, age );

// TODO: get another info and save in model

mModel->sync();
}
int Signup::getValue()
{
    return a;
}

void Signup::on_pushButton_clicked()
{

}
