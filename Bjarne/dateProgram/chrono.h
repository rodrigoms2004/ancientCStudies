#ifndef CHRONO_H
#define CHRONO_H


#include <iostream>


// Arquivo Chrono.h

namespace Chrono {

class Data {
  public:
    enum Mes {
        jan = 1, fev, mar, abr, mai, jun, ago, set, out, nov, dez
    };

    class Invalid{};    // para lançar como excessão

    Data(int a, Mes m, int d);  // verifica se a data é válida e inicializa
    Data();                     // construtor default
    // as operações de cópia default servem

    // operações não modificadoras
    int dia() const { return d; }
    Mes mes() const { return m; }
    int ano() const { return a; }

    // operações modificadoras
    void add_dia(int n);
    void add_mes(int n);
    void add_ano(int n);

  private:
    int a;
    Mes m;
    int d;

};   // end class

bool e_data(int a, Data::Mes m, int d); // true para data válida

bool bissexto(int a);   // true se a é um ano bissexto

bool operator==(const Data& a, const Data& b);
bool operator!=(const Data& a, const Data& b);

std::ostream& operator<<(std::ostream& os, const Data& d);

std::istream& operator>>(std::istream& is, const Data& dd);


}   // end namespace

#endif // CHRONO_H

