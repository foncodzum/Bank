#ifndef TRANSFERBUTTON_H
#define TRANSFERBUTTON_H

#include <QPushButton>

class TransferButton : public QPushButton
{
public:
    TransferButton();
    int id = 0;
    int expectedValue2 = 2000;
    int actualValue2 = 0;

    public slots:
        void getsId();

    signals:
        void gettingId();
};

#endif // TRANSFERBUTTON_H
