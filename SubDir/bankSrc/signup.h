#ifndef SIGNUP_H
#define SIGNUP_H
#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include "signupmodel.h"
#include "ui_form.h"
#include <QWidget>


class SignupModel;

class Signup : public QWidget
{
    Q_OBJECT
public:
    enum class SignupIndex {
    Age
    };
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();
    void setModel( SignupModel *model );

    private slots:
    void onSave();
public:

private:
    SignupModel* mModel = nullptr;
    Ui::Form *ui;
signals:

public slots:
};

#endif // SIGNUP_H
