#include "interfaceusuario.h"
#include <iostream>

using namespace std;

int resultadoMenuInicial()
{
    int tipoCalculadora;

    cout << "Selecione o tipo de calculadora:\n"
         << "1 - Calculadora_if_else\n"
         << "2 - Calculadora_switch\n"
         << "3 - Sair\n";
    cin >> tipoCalculadora;

    return tipoCalculadora;
}

void menuOperacao(double *operando1, double *operando2, char *operador)
{
    cout << "\nInforme o operando1 operador operando2: ";
    cin >> *operando1 >> *operador >> *operando2;
}

bool novaOperacaoMenu()
{
    bool novaOperacao;
    cout << "Nova operação? (0)encerrar, (1)continuar:\n";
    cin >> novaOperacao;

    return novaOperacao;
}

