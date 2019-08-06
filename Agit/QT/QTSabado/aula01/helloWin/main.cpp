#include "widget.h"
#include <QApplication>
#include <QPushButton>
//#include <QObject>
#include <stdio.h>
#include <iostream>

using namespace std;

// QCoreApplication
// QGuiApplication      // qApp
// QApplication

// QObject

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    QWidget *w = new QWidget;
    QPushButton *button = new QPushButton(QApplication::tr("Clique aqui"), w); //or QObject::tr

    button->setGeometry(100,100, 200, 50);
    button->setProperty("NomeDoVizinho", "Jose");

    QString nome = button->property("NomeDoVizinho").toString();
    cout << nome.toStdString() << endl;

    /*
    QApplication::connect(
                        button, SIGNAL(clicked()),
                        qApp, SLOT(quit()) );
*/

    // valida em tempo de execução, mas permite SIGNAL e SLOT com paramtros diferentes
    // SIGNAL ter mais parametros que SLOT = OK, o inverso não é válido
    /*
    QApplication::connect(
                        button, SIGNAL(clicked()),
                        qApp, SLOT(quit()),
                        Qt::ConnectionType( Qt::QueuedConnection | Qt::UniqueConnection) );

    // usando ponteiros para função, valida em tempo de compilação
    // mais rápido
    QApplication::connect(
                        button,
                        &QPushButton::clicked,
                        qApp,
                        &QApplication::quit);
*/
    QApplication::connect(
                button,
                &QPushButton::clicked,
                []() { qApp->quit(); }); // usando funçoes lambdas do C++ 11

    w->show();


//    qApp->aboutQt();

    return a.exec();
}
