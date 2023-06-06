#include <QString>
#include <QtTest>
#include <QPushButton>
#include <QKeyEvent>
#include "menuwidg.h"

class MenuWidg_test : public QObject
{
    Q_OBJECT

public:
    MenuWidg_test();

private Q_SLOTS:
    void onBtnPressed();
};

MenuWidg_test::MenuWidg_test()
{

}

void MenuWidg_test::onBtnPressed()
{
    int logInId = 0;
    int loanId = 0;
    int savingsId = 0;

    MenuWidg menuWidg;

    QPushButton *logIn_btn = new QPushButton;
    QPushButton *loan_btn = new QPushButton;
    QPushButton *savings_btn = new QPushButton;

    QTest::mouseClick(logIn_btn, Qt::LeftButton);
    if (logIn_btn)
    {
        logInId = 1;
    }
    QCOMPARE(logInId, 1);

    QTest::mouseClick(loan_btn, Qt::LeftButton);
    if (loan_btn)
    {
        loanId = 2;
    }
    QCOMPARE(loanId, 2);

    QTest::mouseClick(savings_btn, Qt::LeftButton);
    if (savings_btn)
    {
        savingsId = 3;
    }
    QCOMPARE(savingsId, 3);
}

QTEST_MAIN(MenuWidg_test)

#include "tst_menuwidg_test.moc"
