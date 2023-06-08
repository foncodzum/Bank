#include "bd.h"
#include "ui_bd.h"

BD::BD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BD)
{
    ui->setupUi(this);
}

BD::~BD()
{
    delete ui;
}
