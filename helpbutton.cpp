#include "helpbutton.h"

HelpButton::HelpButton()
{
    id = 0;

    connect(this, SIGNAL(clicked()),this,SLOT(getsId()));
}

void HelpButton::getsId()
{
    id = 4000;
    if (id == 4000)
        emit getsId();
}
