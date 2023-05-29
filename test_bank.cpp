#include <QTest>
#include <QPushButton>
#include "test_bank.h"
#include "savingsbutton.h"
#include "transferbutton.h"
#include "histotybutton.h"
#include "helpbutton.h"

test_bank::test_bank(QObject *parent) : QObject(parent)
{

}

void test_bank::getsId()
{
    SavingsButton btn1;
    TransferButton btn2;
    HistotyButton btn3;
    HelpButton btn4;
    QCOMPARE(btn1.actualValue1, btn1.expectedValue1);
    QCOMPARE(btn2.actualValue2, btn2.expectedValue2);
    QCOMPARE(btn3.actualValue3, btn3.expectedValue3);
    QCOMPARE(btn4.actualValue4, btn4.expectedValue4);
}
