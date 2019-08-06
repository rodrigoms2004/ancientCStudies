#include <QApplication>
#include <QPushButton>
#include <window.h>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    Window window;
    window.show();

    return app.exec();


    /*
    QWidget window;
    window.setFixedSize(200, 100);

    QPushButton *button = new QPushButton("HelloWorld", &window);
    button->setGeometry(10, 10, 100, 30);



    QFont font("Courier");
    QPushButton button1 ("Hello World !");
    button1.setText("My Text");
    button1.setToolTip("A tooltip");
    button1.setFont(font);
    button1.setIcon(QIcon::fromTheme("face-smile"));

    QPushButton button2("other", &button1);

    button1.show();
*/



}   // end main
