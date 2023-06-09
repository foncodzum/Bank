#include <QString>
#include <QtTest>
#include <QPushButton>
#include <QWidget>
#include <QSignalSpy>
#include "menuwidg.h"
#include "ui_menuwidg.h"

class MenuWidg_testTest : public QObject
{
    Q_OBJECT

public:
    MenuWidg_testTest();

private Q_SLOTS:
    void btnPressedTest();
};

MenuWidg_testTest::MenuWidg_testTest()
{
}

void MenuWidg_testTest::btnPressedTest()
{
    MenuWidg menuWidg;

    QSignalSpy spyLogIn(&menuWidg, SIGNAL(btnPressed(int)));
    QTest::mouseClick(menuWidg.ui->logIn_btn, Qt::LeftButton);
    QCOMPARE(spyLogIn.count(), 1);
    QList<QVariant> logInArguments = spyLogIn.takeFirst();
    QCOMPARE(logInArguments.at(0).toInt(), 1);

    QSignalSpy spyLoan(&menuWidg, SIGNAL(btnPressed(int)));
    QTest::mouseClick(menuWidg.ui->loan_btn, Qt::LeftButton);
    QCOMPARE(spyLoan.count(), 1);
    QList<QVariant> loanArguments = spyLoan.takeFirst();
    QCOMPARE(logInArguments.at(0).toInt(), 2);

    QSignalSpy spySavings(&menuWidg, SIGNAL(btnPressed(int)));
    QTest::mouseClick(menuWidg.ui->savings_btn, Qt::LeftButton);
    QCOMPARE(spySavings.count(), 1);
    QList<QVariant> savingsArguments = spySavings.takeFirst();
    QCOMPARE(savingsArguments.at(0).toInt(), 3);
}

QTEST_MAIN(MenuWidg_testTest)

#include "tst_menuwidg_testtest.moc"
