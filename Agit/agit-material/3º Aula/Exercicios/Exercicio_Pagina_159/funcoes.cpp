#include "funcoes.h"

#include <iostream>


double Fatorial ( int num )
{
    double result ;
    for ( result = 1 ; num > 1 ; --num )
        result *= num ;
    return result ;
}

double Potencia ( int base, int exp )
{
    double result ;
    for ( result = 1 ; exp > 0 ; --exp )
        result *= base ;
    return result ;
}

int PA_TotalTermos ( int inicial, int final, int razao )
{
    if ( razao == 0 || ( inicial > final && razao > 0)
         || ( inicial < final && razao < 0) )
        return 0 ;
    return (final-inicial+razao) / razao ;
}

void ImprimePares ( int inicial , int final )
{
    std::cout << "\nLista dos numeros pares entre "
              << inicial << " e " << final << '\n';
    if ( inicial & 1 )
        ++inicial;

    int total_pares = PA_TotalTermos( inicial, final, 2) ;
    std::cout << "Total de numeros a imprimir: " << total_pares << '\n';
    std::cout << "Pares no intervalo:\n";
    if ( total_pares > 0 )
    {
        for ( int numero = inicial ; numero <= final ; numero += 2 )
        {
            if ( numero > inicial )
                std::cout << " , " ;
            std::cout << numero;
        }
        std::cout << '\n';
    }
    else
        std::cout << "Nenhum numero par nesse intervalo\n";
}

double DobraValor (int ultimo_dia)
{
    return Potencia(2, ultimo_dia - 1);
}

double DobraValor_for (int ultimo_dia )
{
    double result = 1;
    for ( int dia = 1; dia < ultimo_dia ; ++dia )
        result *= 2 ;
    return result ;
}


double TotalCombinacoes( int conjunto, int escolhas )
{
    return Fatorial ( conjunto ) /
            ( Fatorial(escolhas) * Fatorial(conjunto-escolhas) ) ;
}
