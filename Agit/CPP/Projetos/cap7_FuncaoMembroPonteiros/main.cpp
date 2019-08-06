#include <iostream>
#include <data.h>
#include <pagar.h>
#include <receber.h>

using namespace std;

int main()
{

    Data * pdtHoje = new Data;  // alocação de memória no heap
    pdtHoje->Dia = 1;   // usa o operador de ligação a ponteiro
    pdtHoje->Mes = 1;
    pdtHoje->Ano = 1995;

    Pagar * pPG = new Pagar;    // PG é um ponteiro
    Receber RC;                 // RC não é um ponteiro

    pPG->DiaAtual = pdtHoje; // Atenção nos operadores de
                             // ligação de membro

    RC.DiaAtual = pdtHoje;   // Atenção nos operadores de
                             // ligação de membro

    Data * diaPagar = new Data;
    diaPagar->Dia = 10;
    diaPagar->Mes = 2;
    diaPagar->Ano = 1995;

    pPG->DiaPagar = diaPagar;
    pPG->DiaPagar->IMPRIME();

// erros de acesso a memória, página 242 da apostila

    // Segmentation fault
    /*
    pPG->DiaPagar->Dia = 10;
    pPG->DiaPagar->Mes = 2;
    pPG->DiaPagar->Ano = 1995;
    pPG->DiaPagar->IMPRIME();
    */

    Data * diaReceber = new Data;
    diaReceber->Dia = 10;
    diaReceber->Mes = 2;
    diaReceber->Ano = 1995;

    RC.DiaReceber = diaReceber;
    RC.DiaReceber->IMPRIME();


    // Segmentation fault
    /*
    RC.DiaReceber->Dia = 10;
    RC.DiaReceber->Mes = 2;
    RC.DiaReceber->Ano = 1995;
    RC.DiaReceber->IMPRIME();
    */

    return 0;
}

