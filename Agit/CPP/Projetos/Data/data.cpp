#include "data.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Data::Data()
{
    m_OK = false;
}

inline void Data::validar()
{
    m_OK = m_ano >= ANO_MIN_DEF && m_ano <= ANO_MAX_DEF
            && m_mes >= 1 && m_mes <= 12
            && m_dia >= 1 && m_dia <= UltimoDiaMes();
}

inline char Data::UltimoDiaMes( /* const Data *this */ ) const // define o ponteiro this como const
{
    // entre janeiro e julho
    if (m_mes >= 1 && m_mes <= 7)
    {
        // fevereiro
        if (m_mes == 2)
        {
            if(AnoBissexto())
                return 29;
            else
                return 28;
        }   // end if

        if(mesPar())
            return 30;
        else
            return 31;
    } // end if

    // entre agosto e dezembro
    if (m_mes >= 8 && m_mes <= 12)
    {
      if(mesPar())
          return 31;
      else
          return 30;
    } // end if
}

// descobrir se um ano é bissexto
inline bool Data::AnoBissexto( /* const Data *this */ ) const
{
    if ( m_ano % 4 == 0 && (m_ano % 400 == 0 || m_ano % 100 != 0) )
      {
          return true;
      } else {
          return false;
      }
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
    if (m_OK)
        cout << m_dia << "/"
             << m_mes << "/"
             << m_ano << '\n';
    else
        cout << "ERRO" << '\n';
}

int Data::comparar(const Data &rdt2) const
{
    /* retorna :
        0 (zero) se estiverem iguais;
        < 0 se a primeira estiver menor;
        > 0 se a primeira estiver maior.
    */
    if (m_ano > rdt2.m_ano)
        return 1;
    if (m_ano < rdt2.m_ano)
        return -1;
    if (m_mes > rdt2.m_mes)
        return 1;
    if (m_mes < rdt2.m_mes)
        return -1;
    if (m_dia > rdt2.m_dia)
        return 1;
    if (m_dia < rdt2.m_dia)
        return -1;

    return 0;

}

bool Data::mesPar() const
{
    if(!(m_mes % 2))
        return true;
    else
        return false;
}   // numeroPar




