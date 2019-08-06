#include "maindialog.h"
#include "ui_maindialog.h"
#include <QMessageBox>

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_pbOK_clicked()
{
    QMessageBox::information(this, "Clicou", "No botão OK");
}
label
