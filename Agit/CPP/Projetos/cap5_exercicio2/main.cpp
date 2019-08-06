#include <iostream>
#include <funcoes.h>
#include <interfaceusuario.h>

using namespace std;

int main()
{

    bool continuar = true, novaOperacao = true;
    double operando1, operando2;
    char operador;
    int tipoCalculadora;

    while(continuar)
    {
    // exibe o menu principal e retorna a escolha do usuário
    tipoCalculadora = resultadoMenuInicial();

        if(tipoCalculadora == 1)
        {
            cout << "Testa Calculadora_if_else";
            do {
                menuOperacao(&operando1, &operando2, &operador);
                Calculadora_if_else(operando1, operando2, operador);

                novaOperacao = novaOperacaoMenu();
            } while(novaOperacao);
        }   // end if
        else if(tipoCalculadora == 2)
        {
            cout << "Calculadora_switch";
            do {
                menuOperacao(&operando1, &operando2, &operador);
                Calculadora_switch(operando1, operando2, operador);

                novaOperacao = novaOperacaoMenu();
            } while(novaOperacao);
        }   // end else if
        else if (tipoCalculadora == 3)
        {
            continuar = false;
        }   // end else if
    }   // end while

    return 0;
}
