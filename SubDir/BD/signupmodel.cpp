#include "signupmodel.h"
#include "signup.h"
#include <QMessageBox>
#include <QtSql/QSqlTableModel>
SignupModel::SignupModel(QObject *parent) : QObject(parent)
{

}
void SignupModel::setData(SignupIndex *index, const QVariant& data ){
if( index == SignupIndex::Age ) {
    m_age->append(index);

}
}

void SignupModel::sync(){
 QSqlTableModel db;
 db.setTable("Bank.sqlite");
 if(!db.open()){
     QMessageBox::critical(0,QObject::tr("Database Error"),
                           db.lastError().text());
     return false;
 }
 return true;
 int row = 0;
 db.insertRows(row,1);
 db.setData(model.index(row,1),m_age);
}
