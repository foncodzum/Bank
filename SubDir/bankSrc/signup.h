#ifndef SIGNUP_H
#define SIGNUP_H

#include <QObject>
#include <QWidget>
#include "signupmodel.h"
#include "ui_signup.h"
class Signup : public QWidget
{
    Q_OBJECT
public:

    explicit Signup(QWidget *parent = nullptr);
    //void setModel( SignupModel* model );
    int getValue();

signals:

public slots:
    void onSave();
private slots:
    void on_pushButton_clicked();

private:
    //SignupModel* mModel = nullptr;
    Ui::Form *ui;
    int a;
    QLineEdit* lineEditAge;

};

#endif // SIGNUP_H
