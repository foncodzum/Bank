#ifndef SIGNUPMODEL_H
#define SIGNUPMODEL_H
#include "signup.h"

class SignupModel
{
public:
    SignupModel();
    enum class SignupIndex {
    Name,
    Age
    };
public:
    void setData( SignupIndex index, const QVariant& data );
    void sync();

};

#endif // SIGNUPMODEL_H
