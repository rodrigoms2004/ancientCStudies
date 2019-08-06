#include "digitalclock.h"
#include "ui_digitalclock.h"
#include "digitalclockclass.h"
#include <QHBoxLayout>

digitalClock::digitalClock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::digitalClock)
{
    ui->setupUi(this);
/*
    DigitalClockClass *digitalClockClass = new DigitalClockClass(this);

    QHBoxLayout *lay = new QHBoxLayout();
    lay->addWidget(digitalClockClass);
    setLayout(lay);
    */
}

digitalClock::~digitalClock()
{
    delete ui;
}
