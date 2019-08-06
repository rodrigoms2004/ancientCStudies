#include "funcoes.h"
#include <iostream>

using namespace std;




void Calculadora_if_else(double operando1, double operando2, char operador)
{
    if ( operador == '+' )
        cout << "Somar: " << operando1 + operando2 << '\n';
    else if ( operador == '-')
        cout << "Subtrair: " << operando1 - operando2 << '\n';
    else if ( operador == '*')
        cout << "multiplicar: " << operando1 * operando2 << '\n';
    else if ( operador == '/') {
        if (operando2 != 0)
            cout << "Dividir: " << operando1 / operando2 << '\n';
        else
            cout << "Impossivel dividir por zero!!\n\n";
    }   // end else if
}


void Calculadora_switch(double operando1, double operando2, char operador)
{
    switch(operador)
    {
    case '+':
        cout << "Somar: " << operando1 + operando2 << '\n';
        break;
    case '-':
        cout << "Subtrair: " << operando1 - operando2 << '\n';
        break;
    case '*':
        cout << "multiplicar: " << operando1 * operando2 << '\n';
        break;
    case '/':
        if (operando2 != 0)
            cout << "Dividir: " << operando1 / operando2 << '\n';
        else
            cout << "Impossivel dividir por zero!!\n\n";
        break;
    default:
        break;
    }   // switch
}
