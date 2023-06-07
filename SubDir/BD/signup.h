#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "signupmodel.h"
#include <QLineEdit>
namespace Ui {

class Signup;
}
class MenuWidg;
class Signup : public QWidget
{
    Q_OBJECT

public:
    enum class SignupIndex {
    Name = 0,
    Age = 1
    };
    explicit Signup(QWidget *parent = 0);
    ~Signup();
    void setModel( SignupModel* model );
signals:
    void send_onSave();//будем отправлять величину
    void sig_signup();//сигнал для основного виджета на открытие
public slots:
    void onSave(); //будем сохранять значение переменной

    void on_pushButton_clicked(); //обработчик нажатия кнопки

private:
    SignupModel *mModel = nullptr;  //объект с которым идет связь


private:
    Ui::Signup *ui;
    MenuWidg *menuwidg;
friend class MenuWidg;
};

#endif // SIGNUP_H
