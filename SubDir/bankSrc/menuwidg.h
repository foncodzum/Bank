#ifndef MENUWIDG_H
#define MENUWIDG_H

#include <QWidget>
#include <QPushButton>

namespace Ui {

class MenuWidg;
}
enum MenuAct
{
    MenuAct_logIn = 1,
    MenuAct_loan = 2,
    MenuAct_Savings = 3
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

    void on_loan_btn_clicked();

    void on_savings_btn_clicked();

private:
    Ui::MenuWidg *ui;
};

#endif // MENUWIDG_H
