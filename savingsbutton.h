#ifndef SAVINGSBUTTON_H
#define SAVINGSBUTTON_H

#include <QPushButton>

class SavingsButton : public QPushButton
{
public:
    SavingsButton();
    int expectedValue1 = 1000;
    int actualValue1 = 0;
    int id = 0;

public slots:
    void getsId();

signals:
    void gettingId();
};

#endif // SAVINGSBUTTON_H
