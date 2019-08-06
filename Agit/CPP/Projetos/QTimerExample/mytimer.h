#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer();
    QTimer *timer;

    ~MyTimer();

public slots:
    void MyTimerSlot();
};

#endif // MYTIMER_H
