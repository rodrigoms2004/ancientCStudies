#include "webform.h"
#include "ui_webform.h"

WebForm::WebForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WebForm)
{
    ui->setupUi(this);
}

WebForm::~WebForm()
{
    delete ui;
}
