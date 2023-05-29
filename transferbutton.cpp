#include "transferbutton.h"

TransferButton::TransferButton()
{
    id = 0;

    connect(this, SIGNAL(clicked()),this,SLOT(getsId()));
}

void TransferButton::getsId()
{
    id = 2000;
    if (id == 2000)
        emit getsId();
}
