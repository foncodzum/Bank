#include "widget.h"
#include "ui_widget.h"
#include <QTabBar>
#include "stylehelper.h"
#include <QStyleOption>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setInterfaceStyle();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget,&opt, &p, this);
    QWidget::paintEvent(event);
}

void Widget::setInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::getMainWidgetStyle());
    ui->pushButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->pushButton_2->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->pushButton_3->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->pushButton_4->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->label->setStyleSheet(StyleHelper::getStartFontStyle());
    ui->label_2->setStyleSheet(StyleHelper::getStartFontStyle());

}
