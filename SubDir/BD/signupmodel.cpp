#include "signupmodel.h"
#include "signup.h"
SignupModel::SignupModel(QObject *parent) : QObject(parent)
{

}
void SignupModel::setData( SignupIndex index, const QVariant& data ){
if( index == SignupIndex::Age ) {
// TODO: save age in class variable
}
}

void SignupModel::sync(){
// TODO: save class variables into database
}
