#include "mainmdi.h"
#include "ui_mainmdi.h"
#include "form1.h"
#include "form2.h"
#include "QMdiSubWindow"
#include "iostream"


using namespace std;

MainMDI::MainMDI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMDI)
{
    ui->setupUi(this);
    m_browser = NULL;
}

MainMDI::~MainMDI()
{
    delete ui;
}

void MainMDI::on_action_Novo_form1_triggered()
{
    QMdiSubWindow *sub = ui->mdiArea->addSubWindow( new form1);
//    sub->setAttribute(Qt::WA_DeleteOnClose);
    sub->show();


}

void MainMDI::on_action_Cascata_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}

void MainMDI::on_action_Lado_a_lado_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void MainMDI::on_actionNovo_WebBrowser_triggered()
{

    if (!m_browser)
    {
        m_browser = ui->mdiArea->addSubWindow(new form2);
        connect(m_browser,SIGNAL(destroyed()),this, SLOT(onDestroyWebBrowser));
        m_browser->show();
    }

    ui->mdiArea->setActiveSubWindow(m_browser);

    //QMdiSubWindow *sub = ui->mdiArea->addSubWindow( new form2);
    //sub->show();


}

void MainMDI::onDestroyWebBrowser()
{
    m_browser = NULL;
}
