#include "digitalclock.h"
#include <QTimer>
#include <QTime>
#include <QString>

DigitalClock::DigitalClock(QWidget *parent)
    : QLCDNumber(parent)
{
    setDigitCount(8); // para exibir 8 caracteres no relogio
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),
            this, SLOT(showTime()));
    timer->start(1000);
}

DigitalClock::~DigitalClock()
{

}

void DigitalClock::showTime()
{
    QTime time = QTime::currentTime();
    QString str = time.toString("hh:mm:ss");
    display(str);
}

