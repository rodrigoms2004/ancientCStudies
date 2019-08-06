#include "padrao.h"

int Padrao::nSoma = 0;
int Padrao::nSub = 0;
int Padrao::nMult = 0;
int Padrao::nDivi = 0;


double Padrao::soma(double a, double b)
{
    ++nSoma;
    return a + b;
}

double Padrao::sub(double a, double b)
{
    ++nSub;
    return a - b;
}

double Padrao::mult(double a, double b)
{
    ++nMult;
    return a * b;
}

double Padrao::divi(double a, double b)
{
    ++nDivi;
    if(b == 0)
        return 0;
    return a / b;
}

int Padrao::somaVezes()
{
    return nSoma;
}

int Padrao::subVezes()
{
    return nSub;
}

int Padrao::multVezes()
{
    return nMult;
}

int Padrao::diviVezes()
{
    return nDivi;
}
