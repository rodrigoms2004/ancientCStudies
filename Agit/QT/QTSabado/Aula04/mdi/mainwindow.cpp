#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include "webform.h"

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

void MainWindow::on_actionNovo_Form1_triggered()
{
    Form *form = new Form;
    form->setAttribute(Qt::WA_DeleteOnClose);
    ui->mdiArea->addSubWindow(form);
    form->show();
}

void MainWindow::on_actionNovo_WebForm_triggered()
{
    WebForm *webForm = new WebForm;
    webForm->setAttribute(Qt::WA_DeleteOnClose);
    ui->mdiArea->addSubWindow(webForm);
    webForm->show();
}

void MainWindow::on_actionSair_2_triggered()
{
    qApp->quit();
}

void MainWindow::on_actionCascata_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}

void MainWindow::on_actionModo_Janela_triggered()
{
    ui->actionModo_Tabbed->setChecked(false);
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);

    ui->actionLado_a_lado->setEnabled(true);
    ui->actionCascata->setEnabled(true);
}




void MainWindow::on_actionLado_a_lado_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void MainWindow::on_actionModo_Tabbed_triggered()
{
    ui->actionModo_Janela->setChecked(false);
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);

    ui->actionLado_a_lado->setEnabled(false);
    ui->actionCascata->setEnabled(false);
}
