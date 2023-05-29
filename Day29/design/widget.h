#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::Widget *ui;
    void setInterfaceStyle();

};

#endif // WIDGET_H
