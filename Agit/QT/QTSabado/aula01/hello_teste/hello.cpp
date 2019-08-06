#include <QCoreApplication>
#include <iostream>
#include <hello.h>

using namespace std;

void imprime(int value)
{
    std::cout << "Value = " << value << '\n';
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyObject obj;

    // conecta o sinal valueChanged a função imprime
    QCoreApplication::connect(
                &obj,
                &MyObject::valueChanged,
                &imprime );

    // faz o mesmo usando funções lambda
    QCoreApplication::connect(
                &obj,
                &MyObject::valueChanged,
                [] (int value) {
                    std::cout << "lambda-" << value << '\n';
                });


    obj.setValue(15);

    MyObject obj2;
    // conecta o signal de obj2 com o slot de obj
    QCoreApplication::connect(
                &obj2,
                SIGNAL(valueChanged(int)),
                &obj,
                SLOT(setValue(int))
                );

    obj2.setValue(18);



    return a.exec();
}
