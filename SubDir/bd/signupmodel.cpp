#include "signupmodel.h"

SignUpModel::SignUpModel(QObject *parent) : QObject(parent)
{

}
void SignUpModel::setData( SignupIndex index, const QVariant& data ){
if( index == SignupIndex::Age ) {
// TODO: save age in class variable
}
}

void SignUpModel::sync(){
// TODO: save class variables into database
}
#endif // SIGNUPMODEL_H
