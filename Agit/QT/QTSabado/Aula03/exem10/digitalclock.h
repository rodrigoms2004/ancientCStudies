#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QLCDNumber>

class DigitalClock : public QLCDNumber
{
    Q_OBJECT
public:
    DigitalClock(QWidget *parent=0);
    ~DigitalClock();
public slots:
    void showTime();


};

#endif // DIGITALCLOCK_H

