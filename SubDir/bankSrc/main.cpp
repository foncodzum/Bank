#include <QApplication>
#include <QPushButton>
#include <QObject>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QString>
#include "mainwindow.h"
#include "menuwidg.h"

int main(int c, char **v)
{
    QApplication app(c,v);

    MenuWidg widget;
    widget.show();

    //MenuWidg log_btn;

    //QObject::connect(&log_btn, SIGNAL(clicked()), &app, SLOT(quit()));

    app.connect(&logIn_btnWithId::QWidget, SIGNAL(clicked(int)), &app, SLOT(setId(int)));

    //MenuWidg::connect(&MenuWidg::logIn_btn, SIGNAL(QButtonGroup::idClicked(int id)),&app, SLOT(quit()));

    app.exec();
}
