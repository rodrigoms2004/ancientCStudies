#include <iostream>

using namespace std;

class Data
{
private:
    bool  m_ok;
    short m_dia;
    short m_mes;
    short m_ano;
public:
    Data()
    {
        m_ok = false;
    }

    void alterar(short dia, short mes, short ano)
    {
        m_dia = dia;
        m_mes = mes;
        m_ano = ano;
        if(dia >= 1 && dia <= 31 &&
           mes >= 1 && mes <= 12 &&
           ano >= 1900 && ano <= 2100)
            m_ok = true;
        else
            m_ok = false;
    }

    void imprimir() const
    {
        if(m_ok)
            cout << m_dia << '/' << m_mes << '/' << m_ano << '\n';
        else
            cout << "??/??/????";
    }
};



int main()
{
    Data pagamento;
    pagamento.alterar(1, 1, 2016);
    pagamento.imprimir();
    return 0;
}
