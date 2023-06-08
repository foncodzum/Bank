#ifndef SIGNUPMODEL_H
#define SIGNUPMODEL_H

#include <QObject>
enum class SignupIndex {
Name,
Age
};
class SignUpModel : public QObject
{
    Q_OBJECT
public:
    explicit SignUpModel(QObject *parent = nullptr);
    void setData( SignupIndex index, const QVariant& data );
    void sync();
signals:

public slots:
};

