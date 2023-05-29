#include "mainwindow.h"
#include <QApplication>
#include "savingsbutton.h"
#include "transferbutton.h"
#include "histotybutton.h"
#include "helpbutton.h"
#include "test_bank.h"
#include <QTest>
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    SavingsButton btn1;
    a.connect(&btn1, SIGNAL(gettingId()),&a,SLOT(getsId()));

    TransferButton btn2;
    a.connect(&btn1, SIGNAL(gettingId()),&a,SLOT(getsId()));

    HistotyButton btn3;
    a.connect(&btn1, SIGNAL(gettingId()),&a,SLOT(getsId()));

    HelpButton btn4;
    a.connect(&btn1, SIGNAL(gettingId()),&a,SLOT(getsId()));

    QTest::qExec(new test_bank, argc, argv);

    return a.exec();
}
