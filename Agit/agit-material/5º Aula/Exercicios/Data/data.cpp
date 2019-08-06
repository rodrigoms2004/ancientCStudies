#include "data.h"
#include <iostream>

using namespace std;


Data::Data()
{
    m_ok = false;
}

Data::Data(short dia, short mes, short ano)
{
    alterar(dia, mes, ano);
}

void Data::alterar(short dia, short mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}

void Data::imprimir() const
{
    if(m_ok)
        cout << m_dia << '/' << m_mes << '/' << m_ano << '\n';
    else
        cout << "\n***ERRO***\n";
}

void Data::validar()
{
    m_ok =  m_dia >= 1 && m_dia <= ultimoDiaMes() &&
            m_mes >= 1 && m_mes <= 12 &&
            m_ano >= ANO_MIN_DEF &&
            m_ano <= ANO_MAX_DEF;
}

bool Data::anoBissexto() const
{
    return !(m_ano & 3) && ( (m_ano % 100) ||
                           !(m_ano % 400) );
}

short Data::ultimoDiaMes() const
{
    return (m_mes == FEVEREIRO) ?
                28 + anoBissexto( ) :
                30 + ( (m_mes & 1) ^ (m_mes > JULHO));
}

int Data::comparar(const Data &rdt2) const
{
    if ( m_ano != rdt2.m_ano)
        return m_ano - rdt2.m_ano ;
    return ( m_mes != rdt2.m_mes ) ?
                m_mes - rdt2.m_mes :
                m_dia - rdt2.m_dia ;
}

bool Data::operator==(const Data &rdt2) const
{
    return comparar(rdt2) == 0;
}


bool Data::operator<=(const Data &rdt2) const
{
    return comparar(rdt2) <= 0;
}


bool Data::operator>=(const Data &rdt2) const
{
    return comparar(rdt2) >= 0;
}


bool Data::operator<(const Data &rdt2) const
{
    return comparar(rdt2) < 0;
}


bool Data::operator>(const Data &rdt2) const
{
    return comparar(rdt2) > 0;
}
