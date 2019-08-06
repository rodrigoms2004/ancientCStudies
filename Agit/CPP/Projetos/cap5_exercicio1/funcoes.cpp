#include <iostream>
#include "funcoes.h"

using namespace std;

//Calcula o fatorial de um número inteiro. Retorna double porque o resulta-
//do pode não caber em um int.
double Fatorial ( int num )
{
    return num == 0 ? 1 : num * Fatorial(num - 1);
}


//Calcula o resultado de "base elevada a expoente". Retorno: idem.
double Potencia ( int base, int exp )
{
    if(exp == 0)
        return 1;
    else
        return  base * Potencia(base, exp - 1);
}

//Calcula o total de termos de uma Progressão Aritmética (não a sua soma).
int PA_TotalTermos ( int inicial, int final, int razao )
{
    if (razao == 0)
        return 0;   // Progressão impossivel

    if ( razao == 0 || ( inicial > final && razao > 0)
         || ( inicial < final && razao < 0) )
        return 0 ; // nada a fazer

    //1 + (an - a1)/r = n
    return 1 + ((final - inicial) / razao);
}

//Imprime todos os números pares entre "inicial e final".
void ImprimePares ( int inicial , int final )
{
    int count = 0;
    cout << "Numeros pares entre " << inicial << " e " << final << endl;
    for (int n = inicial; n <= final; n++)
    {
        if(n % 2 == 0) {
            cout << n << " ";
            count++;
        }
    }   // end for
    if (count == 0)
        cout << "\nNenhum par nesse intervalo\n";
    else
        cout << "\nTotal de números do intervalo: " << count << endl;
}


//Problema básico/clássico de matemática: se você ganha 1 real no primeiro
//dia do mês e dobra esse valor a cada dia (2 reais no segundo dia, 4 reais
//no terceiro, etc), quanto irá ganhar no último dia (por exemplo, 31)?
double DobraValor ( int ultimo_dia )
{
    return Potencia(2, ultimo_dia - 1);
}

//O mesmo usando um laço for.
double DobraValor_for ( int ultimo_dia )
{
    double result = 1;
    for ( int dia = 1; dia < ultimo_dia ; ++dia )
        result *= 2 ;
    // Multiplico o valor por 2, começando de 1, enquanto [ dia < ultimo_dia ]
    // Pois, se ultimo_dia == 1, ganho apenas 1
    return result ;
}

//Retorna o total de combinações únicas em qualquer ordem, considerando-
//se uma quantidade de escolhas em um conjunto de alternativas. Por exem-
//plo, para saber as possibilidades de acerto na mega-sena: C(60,6).
double TotalCombinacoes ( int conjunto, int escolhas )
{
    return Fatorial ( conjunto ) /
            ( Fatorial(escolhas) * Fatorial(conjunto-escolhas) ) ;
}

