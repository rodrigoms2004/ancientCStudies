#include "maindialog.h"
#include "ui_maindialog.h"
#include "digitalclock.h"
#include <QVBoxLayout>


MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
/*
    QVBoxLayout *layout = new QVBoxLayout;
    DigitalClock *clock = new DigitalClock;
    layout->addWidget(clock);

    setLayout(layout);

*/

}

MainDialog::~MainDialog()
{
    delete ui;
}
