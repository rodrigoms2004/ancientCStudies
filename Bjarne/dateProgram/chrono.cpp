// Chrono.cpp

#include "chrono.h"
#include <iostream>

using namespace std;

namespace Chrono {

// definições de funções membro

Data::Data(int aa, Mes mm, int dd)
        :a(aa), m(mm), d(dd)
{
    if(!e_data(aa, mm, dd)) throw Invalid{};
}

const Data& default_data()
{
    static Data dd(2001, Data::jan, 1);  // inicio do século 21
    return dd;
}

void Data::add_dia(int n)
{
    //...
}

void Data::add_mes(int n)
{
    //...
}

void Data::add_ano(int n)
{
    if (m==fev && d == 29 && !bissexto(a+n)) {  // cuidado com anos bissextos
        m = mar;    // use primeiro de março em vez de 28 de fevereiro
        d = 1;
    }
    a += n;
}

// funções auxiliares

bool e_data(int a, Data::Mes m, int d)
{
    // supõe que a é válido

    if(d <=0) return false; // d deve ser positivo

    int dias_no_mes = 31;   // a maioria dos meses tem 31 dias

    switch (m) {
    case Data::fev:         // a duração de fevereiro varia
        dias_no_mes = (bissexto(a))?29:28;
        break;
    case Data::abr: case Data::jun: case Data::set: case Data::nov:
        dias_no_mes = 30;   // os restantes tem 30 dias
        break;
    }   // end switch

    if(dias_no_mes < d) return false;

    return true;
}

bool bissexto(int a)
{
    // ver exercicio 10

}

bool operator==(const Data& a, const Data& b)
{
    return a.ano()==b.ano()
            && a.mes()==b.mes()
            && a.dia()==b.dia();
}

bool operator!=(const Data& a, const Data& b)
{
    return !(a == b);
}

/*
std::ostream& operator<<(std::ostream& os, const Data& d)
{


    if(m < Data::jan || Data::dez < m) return false;

    return os << '(' << d.ano()
              << ',' << d.mes()
              << ',' << d.dia() << ')';
}

*/

std::istream& operator>>(std::istream& is, Data& dd)
{
    int a, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> a >> ch2 >> m >> ch3 >> d >> ch4;
    if(!is) return is;
    if(ch1 !='(' || ch2 !=',' || ch3!=',' || ch4!=')') { // opa: erro de formato
        is.clear(ios_base::failbit);    // configura indicador de erro
        return is;
    }
    dd = Data(a, Data::Mes(m), d); // atualiza dd;
    return is;

}

enum Dia {
    domingo, segunda, terca, quarta, quinta, sexta, sabado
};

Dia dia_da_semana(const Data&)
{
    //...
}

Dia prox_domingo(const Data& d)
{
    //...
}

Dia prox_dia_util(const Data& d)
{
    //...
}


}   // end namespace
