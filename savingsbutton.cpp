#include "savingsbutton.h"

SavingsButton::SavingsButton()
{
    id = 0;

    connect(this, SIGNAL(clicked()),this,SLOT(getsId()));
}

void SavingsButton::getsId()
{
    id = 1000;
    if (id == 1000)
        emit getsId();
}
