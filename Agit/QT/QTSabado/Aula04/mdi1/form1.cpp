#include "form1.h"
#include "ui_form1.h"

form1::form1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form1)
{
    ui->setupUi(this);
}

form1::~form1()
{
    delete ui;
}
