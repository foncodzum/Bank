#ifndef SIGNUPMODEL_H
#define SIGNUPMODEL_H

#include <QObject>
#include <QVariant>
#include "signup.h"
class SignupModel : public QObject
{
    Q_OBJECT
public:
    explicit SignupModel(QObject *parent = nullptr);
    ~SignupModel();
    void setData( SignupIndex::index, const QVariant& data );
    void sync();

private:

signals:

public slots:
};

#endif // SIGNUPMODEL_H
