#include <QApplication>
#include <QPushButton>
#include <QObject>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QString>
#include "mainwindow.h"
#include "menuwidg.h"
#include <QFile>
#include <QDebug>
int main(int c, char **v)
{
    QApplication app(c,v);

    QFile qssFile("/home/developer/projects/Banks/Bank/SubDir/bankSrc/style.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        QString qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();
    }
    else
    {
        qDebug()<<"Ну может открыть файл";

    }
    //MenuWidg log_btn;

    //QObject::connect(&log_btn, SIGNAL(clicked()), &app, SLOT(quit()));

  //  app.connect(&logIn_btnWithId::QWidget, SIGNAL(clicked(int)), &app, SLOT(setId(int)));

    //MenuWidg::connect(&MenuWidg::logIn_btn, SIGNAL(QButtonGroup::idClicked(int id)),&app, SLOT(quit()));
    MenuWidg widget;
    widget.show();
    app.exec();
}
