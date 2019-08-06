#include "padrao.h"



// inicializa os membros estáticos
int padrao::countSomar = 0;
int padrao::countSubtrair = 0;
int padrao::countMultiplicar = 0;
int padrao::countDividir = 0;


double padrao::somar(double a, double b)
{
    ++countSomar;
    return a + b;
}

double padrao::subtrair(double a, double b)
{
    ++countSubtrair;
    return a - b;
}

double padrao::multiplicar(double a, double b)
{
    ++countMultiplicar;
    return a * b;
}

double padrao::dividir(double a, double b)
{
    ++countDividir;
    if (b)
        return a / b;
    else
        return -1;
}

int padrao::getChamadasSomar()
{
    return countSomar;
}

int padrao::getChamadasSubtrair()
{
    return countSubtrair;
}


int padrao::getChamadasMultiplicar()
{
    return countMultiplicar;
}

int padrao::getChamadasDividir()
{
    return countDividir;
}


padrao::padrao()
{

}

padrao::~padrao()
{

}

