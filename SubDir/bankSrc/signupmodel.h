#ifndef SIGNUPMODEL_H
#define SIGNUPMODEL_H

#include <QObject>
#include "signup.h"
class Signup;
class SignupModel : public QObject
{
    Q_OBJECT
public:
    enum class SignupIndex {
    Age
    };
    explicit SignupModel(QObject *parent = nullptr);
public:
    void setData( SignupIndex index, const QVariant & data );
    void sync();
    int getValue();
signals:

public slots:
private:
    int a;
};

#endif // SIGNUPMODEL_H
