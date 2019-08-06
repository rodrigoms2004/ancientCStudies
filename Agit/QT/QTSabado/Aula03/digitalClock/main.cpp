#include "digitalclock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    digitalClock w;
    w.show();

    return a.exec();
}
