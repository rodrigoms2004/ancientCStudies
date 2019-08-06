#include "maindialog.h"
#include "ui_maindialog.h"
#include <QString>
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

void MainDialog::on_pushBtnOK_clicked()
{
    QString nome = ui->lineEditNome->text();

    QMessageBox msgBox;

    if (nome.isEmpty())
    {
        ui->pushBtnOK->setEnabled(false);
        msgBox.setText("Insira um nome!");
        msgBox.exec();
    } else if (!ui->radioBtnFeminino->isChecked() &&
               !ui->radioBtnMasculino->isChecked())
    {
        msgBox.setText("Selecione o sexo!");
        msgBox.exec();
    } else if (!ui->radioBtnSolteiro->isChecked() &&
               !ui->radioBtnCasado->isChecked() &&
               !ui->radioBtnDivorciado->isChecked() &&
               !ui->radioBtnViuvo->isChecked())
    {
        msgBox.setText("Selecione um estado civil!");
        msgBox.exec();
    }




} // if closeEvent


void MainDialog::closeEvent(QCloseEvent *event)
{
   /*
    if (maybeSave()) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
    */

    QMessageBox msgBox;
    msgBox.setText("Bye!");
    msgBox.exec();
    event->accept();
}


void MainDialog::on_lineEditNome_textChanged(const QString &arg1)
{
    ui->pushBtnOK->setEnabled(true);
}

void MainDialog::on_pushBtnCancel_clicked()
{
    this->reject();
    //exit(0);
}
