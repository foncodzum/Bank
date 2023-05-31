#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menuwidg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    swidg = new MenuWidg;
    connect(swidg, &MenuWidg::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    swidg->show();
    this->close();
}
