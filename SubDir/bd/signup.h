#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "signupmodel.h"
#include <QLineEdit>
namespace Ui {
class SignUp;
enum class SignupIndex {
Name,
Age
};

}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0);
    ~SignUp();
    void setModel( SignUpModel* model );
private slots:
    void onSave();
private:
    Ui::SignUp *ui;
private:
SignUpModel* mModel = nullptr;
};

#endif // SIGNUP_H
