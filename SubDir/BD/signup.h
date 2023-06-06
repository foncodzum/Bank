#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "signupmodel.h"

enum class SignupIndex {
Name,
Age
};
namespace Ui {
class Signup;
}
class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = 0);
    ~Signup();
    void setModel( SignupModel* model );

private slots:
    void onSave();

private:
    SignupModel *mModel = nullptr;


private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
