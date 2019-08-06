#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <matematica.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{    
    ui->setupUi(this);
    ui->lnEdtOperacao->setReadOnly(true);
    ui->lnEdtResultado->setReadOnly(true);
    ui->lnEdtOperacao->setAlignment(Qt::AlignHCenter);

}

bool temPonto;



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pshBtn_0_clicked()
{
    setNumero("0");
}

void MainWindow::on_pshBtn_1_clicked()
{
    setNumero("1");
}

void MainWindow::on_pshBtn_2_clicked()
{
    setNumero("2");
}

void MainWindow::on_pshBtn_3_clicked()
{
    setNumero("3");
}

void MainWindow::on_pshBtn_4_clicked()
{
    setNumero("4");
}

void MainWindow::on_pshBtn_5_clicked()
{
    setNumero("5");
}

void MainWindow::on_pshBtn_6_clicked()
{
    setNumero("6");
}

void MainWindow::on_pshBtn_7_clicked()
{
    setNumero("7");
}

void MainWindow::on_pshBtn_8_clicked()
{
    setNumero("8");
}

void MainWindow::on_pshBtn_9_clicked()
{
    setNumero("9");
}

void MainWindow::on_pshBtnPonto_clicked()
{
    if (!temPonto)
    {
            setNumero( + ".");
            temPonto = true;
    }

}

void MainWindow::on_pshBtn_Div_clicked()
{
    setOperacao("/");
}

void MainWindow::on_pshBtn_Mult_clicked()
{
    setOperacao("*");
}

void MainWindow::on_pshBtn_Sub_clicked()
{
    setOperacao("-");
}

void MainWindow::on_pshBtn_Soma_clicked()
{
    setOperacao("+");
}

void MainWindow::on_pshBtnClear_clicked()
{
    ui->lnEdtOperacao->clear();
    ui->lnEdtResultado->clear();

}

void MainWindow::on_pshBtnCalcular_clicked()
{
    double valorAtual = ui->lnEdtResultado->text().toDouble();
    double resultado = 0;
    if(ui->lnEdtOperacao->text() == "/")
    {
        resultado = Matematica::divisao(valorAnterior, valorAtual);
    }
    else if(ui->lnEdtOperacao->text() == "*")
    {
        resultado = Matematica::multiplicacao(valorAnterior, valorAtual);
    }
    else if(ui->lnEdtOperacao->text() == "-")
    {
        resultado = Matematica::subtracao(valorAnterior, valorAtual);
    }
    else if(ui->lnEdtOperacao->text() == "+")
    {
        resultado = Matematica::adicao(valorAnterior, valorAtual);
    }
    ui->lnEdtResultado->setText(QString::number(resultado));
}

void MainWindow::setOperacao(QString operacao)
{
    valorAnterior = ui->lnEdtResultado->text().toDouble();
    ui->lnEdtOperacao->setText(operacao);
    ui->lnEdtResultado->clear();
}

void MainWindow::setNumero(QString numero)
{
    ui->lnEdtResultado->setText(ui->lnEdtResultado->text() + numero);
}
