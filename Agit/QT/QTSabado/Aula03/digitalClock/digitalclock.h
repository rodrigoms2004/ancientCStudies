#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>

namespace Ui {
class digitalClock;
}

class digitalClock : public QWidget
{
    Q_OBJECT

public:
    explicit digitalClock(QWidget *parent = 0);
    ~digitalClock();

private:
    Ui::digitalClock *ui;
};

#endif // DIGITALCLOCK_H
