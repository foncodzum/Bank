#ifndef SIGNUPMODEL_H
#define SIGNUPMODEL_H

#include <QWidget>
#include <QVariant>
#include "signup.h"
#include <QObject>

class SignupModel : public QObject
{
    Q_OBJECT

public:
    enum class SignupIndex {
    Name = 0,
    Age = 1
    };
    explicit SignupModel(QObject *parent = nullptr);
    ~SignupModel();
    void setData(SignupIndex index, const QVariant& data );
    void sync();

private:
    int m_age;
signals:
    void valueChanged();
public slots:
    void setValue();//сохраняет значение переменной при вызове
};

#endif // SIGNUPMODEL_H
