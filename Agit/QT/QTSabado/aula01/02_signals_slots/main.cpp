#include <QCoreApplication>
#include <QTimer>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QTimer timer;

    // "conecta a função "quit"(o " slot ") do objeto "app"
    // ao " signal " "timeout" do objeto "timer":
    QObject::connect( &timer, SIGNAL(timeout()), &app, SLOT(quit()));

    std::cout << "Aplicação encerrará em 2 segundos" << endl;
    timer.start(2000);

    app.exec();

    return 0;
}
