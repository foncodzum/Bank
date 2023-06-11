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
#include "signup.h"

int main(int c, char **v)
{
    QApplication app(c,v);
    QFile qssFile(":/style.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        QString qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();
    }
    else
    {
        qDebug()<<"Не может открыть файл";
    }
    MenuWidg widget;
    widget.show();
    app.exec();
}
