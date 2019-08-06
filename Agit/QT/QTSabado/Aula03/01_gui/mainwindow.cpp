#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->labelBar, SLOT(setNum(int)));
    ui->labelBar->setNum(ui->horizontalSlider->value());

}

MainWindow::~MainWindow()
{
    delete ui;
}
