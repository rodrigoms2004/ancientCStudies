#include <iostream>

using namespace std;

// programador nao acessa diretamente os dados da union ou da struct
// sobrecarga do operador =

struct VariosTipos
{
private:
    enum Tipo{BOOL, CHAR, SHORT, INT, DOUBLE};
    Tipo tipoEmUso;
    union
    {
        bool   m_bool;
        char   m_char;
        short  m_short;
        int    m_int;
        double m_double;
    };

public:
    void operator = (bool param)
    {
        m_bool = param;
        tipoEmUso = BOOL;
    }

    void operator = (char param)
    {
        m_char = param;
        tipoEmUso = CHAR;
    }

    void operator = (short param)
    {
        m_short = param;
        tipoEmUso = SHORT;
    }

    void operator = (int param)
    {
        m_int = param;
        tipoEmUso = INT;
    }
    void operator = (double param)
    {
        m_double = param;
        tipoEmUso = DOUBLE;
    }


    void imprimir()
    {
        if(tipoEmUso == BOOL)
            cout << "Bool: " << m_bool << '\n';
        else if (tipoEmUso == CHAR)
            cout << "Char: " << m_char << '\n';
        else if (tipoEmUso == SHORT)
            cout << "Short: " << m_short << '\n';
        else if (tipoEmUso == INT)
            cout << "Int: " << m_int << '\n';
        else if (tipoEmUso == DOUBLE)
            cout << "Double: " << m_double << '\n';
    }   // end imprimir
};


struct a // nessa ordem a tem 16 bytes
{
    bool   m_bool;
    char   m_char;
    short  m_short;
    int    m_int;
    double m_double;
};

int main()
{
    VariosTipos v;

    v = true;
    v.imprimir();

    v = 'T';
    v.imprimir();

    v = short(20);
    v.imprimir();

    v = 10;
    v.imprimir();

    v = 2.2;
    v.imprimir();

    cout << sizeof(a) << '\n';

    return 0;
}

