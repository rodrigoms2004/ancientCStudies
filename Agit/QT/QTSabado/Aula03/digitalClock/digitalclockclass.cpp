#include "digitalclockclass.h"
#include <QDateTime>
#include <QLCDNumber>

DigitalClockClass::DigitalClockClass(QWidget *parent)
    : QLCDNumber(parent)
{
    setDigitCount(8);

    connect(&m_timer, SIGNAL(timeout()),    // quando expirar o tempo de m_timer, chama onTimer
            this, SLOT(onTimer()) );

    onTimer();                  // inicializa para ter um valor no relogio

    m_timer.setInterval(1000);  // após 1000 segundos dispara o timeout()
    m_timer.start();

}

DigitalClockClass::~DigitalClockClass()
{

}

void DigitalClockClass::onTimer()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString str = dateTime.toString("hh:mm:ss");
    display(str);
}
