#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QDebug>


// Widget


void funcao()
{
    qDebug() << "Funcao Executada\n";
}

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QWidget *widget = new QWidget;
	QPushButton *button = new QPushButton("Hello World", widget);


    QObject::connect(button, SIGNAL(clicked()), &app, SLOT(funcao()));

    // envia SIGNAL e SLOT em formato string
    //QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));


    // Executa um slot de forma assincrono
    QObject::connect(button, &QPushButton::clicked, &app, &QApplication::quit,
                     Qt::QueuedConnection);

    // passa o endereço das funções como SIGNAL e SLOT, mas parametros devem ter a mesma assinatura
    //QObject::connect(button, &QPushButton::clicked, &app, &QApplication::quit);



    widget->show();


    app.exec();



    delete widget;
	return 0;
}
