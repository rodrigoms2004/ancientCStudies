#include "matematica.h"

double Matematica::divisao(double a, double b)
{
    return b != 0 ? a / b : 0;
}

double Matematica::multiplicacao(double a, double b)
{
    return a * b;
}

double Matematica::subtracao(double a, double b)
{
    return a - b;
}

double Matematica::adicao(double a, double b)
{
    return a + b;
}
