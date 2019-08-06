#ifndef DIGITALCLOCKCLASS_H
#define DIGITALCLOCKCLASS_H
#include <QTimer>
#include <QLCDNumber>

class DigitalClockClass : public QLCDNumber
{
    Q_OBJECT

public:
    DigitalClockClass(QWidget *parent = 0);
    ~DigitalClockClass();

private slots:
    void onTimer();

private:
    QTimer m_timer;
};

#endif // DIGITALCLOCKCLASS_H
