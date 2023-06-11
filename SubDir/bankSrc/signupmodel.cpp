#include "signupmodel.h"
#include "signup.h"
SignupModel::SignupModel(QObject *parent) : QObject(parent)
{

}
void SignupModel::sync(){
// TODO: save class variables into database
}
int SignupModel::getValue()
{
    return a;
}
