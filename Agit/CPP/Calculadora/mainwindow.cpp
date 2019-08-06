#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "matematica.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushBtnDiv_clicked()
{
    double num1 = ui->lnEdt1->text().toDouble();
    double num2 = ui->lnEdt2->text().toDouble();
    double r = Matematica::divisao(num1, num2);
    ui->lnEdtResultado->setText(QString::number(r));
}

void MainWindow::on_pushBtnMult_clicked()
{
    double num1 = ui->lnEdt1->text().toDouble();
    double num2 = ui->lnEdt2->text().toDouble();
    double r = Matematica::multiplicacao(num1, num2);
    ui->lnEdtResultado->setText(QString::number(r));
}

void MainWindow::on_pushBtnSub_clicked()
{
    double num1 = ui->lnEdt1->text().toDouble();
    double num2 = ui->lnEdt2->text().toDouble();
    double r = Matematica::subtracao(num1, num2);
    ui->lnEdtResultado->setText(QString::number(r));
}

void MainWindow::on_pushBtnSoma_clicked()
{
    double num1 = ui->lnEdt1->text().toDouble();
    double num2 = ui->lnEdt2->text().toDouble();
    double r = Matematica::adicao(num1, num2);
    ui->lnEdtResultado->setText(QString::number(r));
}
