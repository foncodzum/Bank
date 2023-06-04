#ifndef MENUWIDG_H
#define MENUWIDG_H

#include <QWidget>
#include <QPushButton>
#include <QMainWindow>
#include "loginwidg.h"

namespace Ui {
class MenuWidg;
}

enum MenuAct
{
    MenuAct_logIn,
    MenuAct_loan,
    MenuAct_savings
};

class MenuWidg : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidg(QWidget *parent = 0);
    ~MenuWidg();

signals:
    void btnPressed(int id);

private slots:
    void on_logIn_btn_clicked();

    void on_logIn_btn_pressed();

    void on_loan_btn_pressed();

    void on_savings_btn_pressed();

private:
    Ui::MenuWidg *ui;
    logInWidg *sWidg;
};

#endif // MENUWIDG_H
