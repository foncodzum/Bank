#include "histotybutton.h"

HistotyButton::HistotyButton()
{
    id = 0;

    connect(this, SIGNAL(clicked()),this,SLOT(getsId()));
}

void HistotyButton::getsId()
{
    id = 3000;
    if (id == 3000)
        emit getsId();
}
