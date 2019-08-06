#include "calculadora.h"

#include <iostream>
#include <limits>



void Calculadora_if_else( )
{
    bool continuar = true;
    while ( continuar )
    {
        int operando_1 , operando_2 ;
        char operador ;
        std::cout << "\nInforme operando_1, operador e operando_2: " ;
        std::cin >> operando_1 >> operador >> operando_2 ;

        if ( ValidarEntrada() )
        {

            if ( operador == '+' )
                std::cout << "Somar: " << operando_1 + operando_2 << '\n' ;
            else if ( operador == '-' )
                std::cout << "Subtrair: " << operando_1 - operando_2 << '\n' ;
            else if ( operador == '*' )
                std::cout << "Multiplicar: " << operando_1 * operando_2
                          << '\n' ;
            else if ( operador == '/' )
                std::cout << "Dividir: " << operando_1 / operando_2 << '\n' ;
            else
                std::cout << "operador invalido\n";
            std::cout << "Nova operacao? (0)encerrar, (1)continuar: ";
            std::cin >> continuar;
            if ( !ValidarEntrada() )
                continuar = false;
        }
    }
}

void Calculadora_switch( )
{
    bool continuar = true;
    while ( continuar )
    {
        int operando_1 , operando_2 ;
        char operador ;
        std::cout << "\nInforme operando_1, operador e operando_2: " ;
        std::cin >> operando_1 >> operador >> operando_2 ;
        if ( ValidarEntrada() )
        {
            switch ( operador )
            {
            case '+' :
                std::cout << "Somar: " << operando_1 + operando_2
                          << '\n' ;
                break;
            case '-' :
                std::cout << "Subtrair: " << operando_1 - operando_2
                          << '\n' ;
                break;
            case '*' :
                std::cout << "Multiplicar: " << operando_1 * operando_2
                          << '\n' ;
                break;
            case '/' :
                std::cout << "Dividir: " << operando_1 / operando_2
                          << '\n' ;
                break;
            default:
                std::cout << "operador invalido\n";
            }
            std::cout << "Nova operacao? (0)encerrar, (1)continuar: ";
            std::cin >> continuar ;
            if ( !ValidarEntrada() )
                continuar = false;
        }
    }
}

bool ValidarEntrada()
{
    if ( std::cin.fail() )
    {
        std::cout << "valores incorretos\n";
        std::cin.clear();
        std::cin.ignore( std::numeric_limits<int>::max() , '\n' );
        return false;
    }
    return true;
}
