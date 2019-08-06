#include "data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    m_anoMin = ANO_MIN_DEF;
    m_anoMax = ANO_MAX_DEF;
    m_OK = false;
}   // end construtora


Data::~Data()
{
    cout << "função destrutora chamada" << endl;
}   // end destrutora


void Data::Altera(char dia, char mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;

    Valida( /* this */ ); // o ponteiro this será repassado para "Valida"
}   // end Altera

// posicionar 'm_OK' como true ou false, após análise dos dados
inline void Data::Valida()
{
    /* m_OK receberá o resultado das operações relacionais e lógicas
       encadeadadas na linha abaixo.
       E esse resultado será lógico(tipo bool: true ou false):
    */
    m_OK = m_ano >= m_anoMin && m_ano <= m_anoMax
        && m_mes >= 1 && m_mes <= 12
        && m_dia >= 1 && m_dia <= UltimoDiaMes();
}   // end Valida

// imprimir dia, mês e ano
void Data::Imprime() const
{
    PodeAlterarSempre = 0; // OK este campo é mutable;
    if(m_OK)    // se a variável estiver válida
    {
        cout.fill('0'); // caracter de preenchimento à esquerda
        cout.width(2);  cout << (int)m_dia << '/';
        cout.width(2);  cout << (int)m_mes << '/';
        cout.width(4);  cout << (int)m_ano << '\n';
    } else {
        cout << "***ERRO***\n";
    }   // end else
}

int Data::Compara(const Data &rdt2) const
{
    /* retorna :
        0 (zero) se estiverem iguais;
        < 0 se a primeira estiver menor;
        > 0 se a primeira estiver maior.
    */

    if (m_ano > rdt2.getAno())
        return 1;
    else if (m_ano < rdt2.getAno())
        return -1;
    else if (m_ano == rdt2.getAno())
    {
        if(m_mes > rdt2.getMes())
            return 1;
        else if(m_mes < rdt2.getMes())
            return -1;
        else if (m_mes == rdt2.getMes())
        {
            if (m_dia > rdt2.getDia())
                return 1;
            else if (m_dia < rdt2.getDia())
                return -1;
            else if (m_dia == rdt2.getDia())
                     return 0;
        }   // end else if
    }   // end else if
}


inline bool Data::AnoBissexto() const
{
    if ( m_ano % 4 == 0 && (m_ano % 400 == 0 || m_ano % 100 != 0) )
      {
          return true;
      } else {
          return false;
      }
}   // end AnoBissexto

inline char Data::UltimoDiaMes() const
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
}   // end UltimoDiaMes

bool Data::mesPar() const
{
    if(!(m_mes % 2))
        return true;
    else
        return false;
}   // numeroPar


// métodos get
char Data::getDia() const
{
    return m_dia;
}   // end getDia

char Data::getMes() const
{
    return m_mes;
}   // end getMes

short Data::getAno() const
{
    return m_ano;
}   // end getAno


// sobrecarga de operadores
bool Data::operator == (const Data &rdt2) const
{
    return (Compara(rdt2) == 0);
}

bool Data::operator < (const Data &rdt2) const
{
    return (Compara(rdt2) < 0);
}

bool Data::operator > (const Data &rdt2) const
{
    return (Compara(rdt2) > 0);
}
