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
    QCOMPARE(menuWidg.logInId, 1);

    QSignalSpy spyLoan(&menuWidg, SIGNAL(btnPressed(int)));
    QTest::mouseClick(menuWidg.ui->loan_btn, Qt::LeftButton);
    QCOMPARE(menuWidg.loanId, 2);

    QSignalSpy spySavings(&menuWidg, SIGNAL(btnPressed(int)));
    QTest::mouseClick(menuWidg.ui->savings_btn, Qt::LeftButton);
    QCOMPARE(menuWidg.savingsId, 3);
}

QTEST_MAIN(MenuWidg_testTest)

#include "tst_menuwidg_testtest.moc"
