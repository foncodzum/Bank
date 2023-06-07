#ifndef MENUWIDG_H
#define MENUWIDG_H

#include <QWidget>
#include <QPushButton>
#include "signup.h"
namespace Ui {
class MenuWidg;
}
class Signup;
class MenuWidg : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidg(QWidget *parent = 0);
    ~MenuWidg();

private slots:
    void on_logIn_btn_clicked();

private:
    Ui::MenuWidg *ui;
    Signup *signup;
friend class Signup;
};

/*class logIn_btnWithId : public QPushButton
{
    Q_OBJECT
public:
    logIn_btnWithId(int id);
    void setId(int id);

protected:
    int Id;
    void mouseReleaseEvent(QMouseEvent *event());

signals:
    void clicked(int);
};*/

#endif // MENUWIDG_H
