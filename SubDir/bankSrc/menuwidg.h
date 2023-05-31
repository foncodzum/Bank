#ifndef MENUWIDG_H
#define MENUWIDG_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class MenuWidg;
}

class MenuWidg : public QWidget
{
    Q_OBJECT

    int id = 0;

public:
    explicit MenuWidg(QWidget *parent = 0);
    ~MenuWidg();

signals:
    void firstWindow();

private slots:
    void on_logIn_btn_clicked();

    void on_loan_btn_clicked();

    void on_savings_btn_clicked();

private:
    Ui::MenuWidg *ui;
};

#endif // MENUWIDG_H
