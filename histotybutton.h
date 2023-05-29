#ifndef HISTOTYBUTTON_H
#define HISTOTYBUTTON_H

#include <QPushButton>

class HistotyButton : public QPushButton
{
public:
    HistotyButton();
    int id = 0;
    int expectedValue3 = 3000;
    int actualValue3 = 0;

    public slots:
        void getsId();

    signals:
        void gettingId();
};

#endif // HISTOTYBUTTON_H
