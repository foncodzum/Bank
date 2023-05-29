#ifndef HELPBUTTON_H
#define HELPBUTTON_H

#include <QPushButton>

class HelpButton : public QPushButton
{
public:
    HelpButton();
    int id = 0;
    int expectedValue4 = 4000;
    int actualValue4 = 0;

    public slots:
        void getsId();

    signals:
        void gettingId();
};

#endif // HELPBUTTON_H
