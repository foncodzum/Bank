#ifndef BD_H
#define BD_H

#include <QWidget>

namespace Ui {
class BD;
}

class BD : public QWidget
{
    Q_OBJECT

public:
    explicit BD(QWidget *parent = 0);
    ~BD();

private:
    Ui::BD *ui;
};

#endif // BD_H
