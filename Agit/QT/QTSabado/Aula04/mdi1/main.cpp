#include "mainmdi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMDI w;
    w.show();

    return a.exec();
}
