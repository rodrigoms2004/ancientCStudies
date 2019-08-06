#include "dialogcadastro.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dialogCadastro w;
    w.show();

    return a.exec();
}
