//#include <QCoreApplication>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout> // box vertical



int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    //return a.exec();

    QApplication app(argc, argv);

    // Cria um "Widget" que será a janela principal
    QWidget *mainWindow = new QWidget( 0 ); // zero
                                // o widget não tem parent

    mainWindow->setWindowTitle(QObject::tr("Widget 3++"));

    // Acrescente 2 "Widgets"
    //QPushButton *button1 = new QPushButton(QObject::tr("About QT"),mainWindow);
    //QPushButton *button2 = new QPushButton(QObject::tr("Quit"),mainWindow);

    // botões sem filhos
    QPushButton *button1 = new QPushButton(QObject::tr("About QT"),0);
    QPushButton *button2 = new QPushButton(QObject::tr("Quit"),0);

    // cria layout vertical
    QVBoxLayout *layout = new QVBoxLayout;

    // transforma os botões em filhos do layout
    layout->addWidget(button1);
    layout->addWidget(button2);

    // define o layout como filho de mainWindow
    mainWindow->setLayout(layout);


    // Define posição dos botões e suas dimensões
    //button1->setGeometry(100, 10, 100, 40);
    //button2->setGeometry(100, 60, 100, 40);

    // Conectando eventos a uma ação:

    // o primeiro botão terá o seu signal "clicked"
    // conectado ao slot "aboutQT" do objeto QApplication:
    QObject::connect( button1, SIGNAL( clicked() ),
                      &app, SLOT( aboutQt() ) );

    // e o segundo botão, quit()
    QObject::connect( button2, SIGNAL( clicked() ),
                      &app, SLOT( quit() ) );

    mainWindow->show(); // exibe a janela principal

    app.exec(); // entra no "event loop"

    return 0;

}   // end main
