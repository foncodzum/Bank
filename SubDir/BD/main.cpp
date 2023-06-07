#include "signup.h"
#include "signupmodel.h"
#include <QApplication>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include <QTableView>
#include <QtSql/QSqlTableModel>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signup w;
    w.show();

      QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
      dbase.setDatabaseName("Bank.sqlite");
      if (!dbase.open()) {
          qDebug() << "Что-то не так с соединением!";
          return -1;
      }

      QTableView view;
      QSqlTableModel model;

      model.setTable("my_table");
      model.select();
      model.setEditStrategy(QSqlTableModel::OnFieldChange);

      view.setModel(&model);
      view.show();

    return a.exec();
}
