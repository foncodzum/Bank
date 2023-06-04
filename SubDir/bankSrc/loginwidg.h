#ifndef LOGINWIDG_H
#define LOGINWIDG_H

#include <QWidget>

namespace Ui {
class logInWidg;
}

class logInWidg : public QWidget
{
    Q_OBJECT

public:
    explicit logInWidg(QWidget *parent = 0);
    ~logInWidg();

signals:
    void firstWindow();

private:
    Ui::logInWidg *ui;
};

#endif // LOGINWIDG_H
