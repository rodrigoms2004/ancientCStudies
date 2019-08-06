#include "slidelabel.h"
#include "ui_slidelabel.h"

slideLabel::slideLabel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slideLabel)
{
    ui->setupUi(this);
}

slideLabel::~slideLabel()
{
    delete ui;
}
