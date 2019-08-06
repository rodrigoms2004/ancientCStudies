#include "dialogcadastro.h"
#include "ui_dialogcadastro.h"

dialogCadastro::dialogCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogCadastro)
{
    ui->setupUi(this);
}

dialogCadastro::~dialogCadastro()
{
    delete ui;
}

void dialogCadastro::on_pushButtonCancelar_clicked()
{

}
