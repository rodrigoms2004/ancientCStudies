#include "funcoes.h"
#include <iostream>

using namespace std;



data::data()
{
    this->m_anoMin = ANO_MIN_DEF;
    // contudo, o posicionamento do ponteiro para acessar o campo já é
    // feito por “default”; logo não precisamos especificar o “this” :
    m_anoMax = ANO_MAX_DEF;
    m_OK = false;   // C++ tem as palavras reservadas true e false
}

void data::ImprimirData()
{

    cout << (int)m_dia << '/'
         << (int)m_mes << '/'
         << m_ano << '\n';

}   // end Data()

// função "Altera", da estrutura Data:
void data::Altera(char dia, char mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    // análise e validação dos valores recebidos
    // (obs: em breve, o último dia de cada mês será identificado... !)
    if( m_ano >= m_anoMin &&    // and
        m_ano <= m_anoMax &&
        m_mes >= 1 && m_mes <= 12 &&
        m_dia >= 1 && m_dia <= 31 )
    {
        m_OK = true;    // valores corretos
    }
    else
    {
        m_OK = false;   // valores incorretos
    }
}   // end Altera
