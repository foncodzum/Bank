#include "signup.h"
#include "signupmodel.h"
#include <QLineEdit>
#include "ui_form.h"
Signup::Signup(QWidget *parent) : QWidget(parent),
  ui(new Ui::Form)
{
    ui->setupUi(this);
}
void Signup::onSave() {

int age = ui->lineEditAge->getValue();
 mModel->setData( SignupIndex::Age, age );

// TODO: get another info and save in model

  mModel->sync();
}

