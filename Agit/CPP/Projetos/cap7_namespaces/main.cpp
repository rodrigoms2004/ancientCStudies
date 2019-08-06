#include <iostream>

//using namespace std;


namespace agit
{
    class Data;
    class Outra;
    class etc;

    namespace financ
    {
        class Pagar;
        class Receber;
        class Impressao;
    };
    namespace admin
    {
        class Controle;
        class Processos;
        class Impressao;
    };

};  // end namespace agit


class agit::Data
{
    public:
        char m_Dia;
        char m_Mes;
        short m_Ano;
};

class agit::Outra
{
    public:
        int m_iOutro;
};

class agit::etc
{
    public:
        int m_iEtc;
};

class agit::financ::Pagar
{
    public:
        double m_Pagar;
};

class agit::financ::Receber
{
    public:
        double m_Receber;
};

class agit::financ::Impressao
{
    public:
        Impressao(){}
        double m_Receber;
};

class agit::admin::Impressao
{
public:
    Impressao(){}
    double m_Receber;
};

// namespace para variáveis globais de um determinado projeto.
// Por exemplo o projeto "Contas a Pagar":
namespace ConPag_Glob
{
    int ParametroGeral=0;
};


int main()
{
    std::cout << "Testando NameSpace" << std::endl;

    agit::financ::Pagar Pag;
    Pag.m_Pagar = 101.50;

    agit::Data hoje;
    hoje.m_Dia = 3;

    // ERRO:
    // Data amanha; // não indicou o namespace
    using namespace agit;
    Data amanha;    // agora sim !!!
    amanha.m_Dia = 10;

    // ERRO:
    // Receber Rec; // não indicou o namespace
    using namespace agit::financ;
    Receber Rec;    // agora sim !!!
    Rec.m_Receber = 10.33;

    ConPag_Glob::ParametroGeral = 10;

    // ERRO:
    // std::cout << ParametroGeral << std::endl;
    // namespace de ParametroGeral doi omitido
    // Agora sim
    std::cout << ConPag_Glob::ParametroGeral << std::endl;
    // ou então
    using namespace ConPag_Glob;
    std::cout << ParametroGeral << std::endl;
    // OK: namespace em uso.

    // criando um sinônimo local;
    namespace agFin = agit::financ;
    agFin::Pagar Pag2;
    Pag2.m_Pagar = 44.3;
    // apenas a partir daqui, até o fim da função,
    // é que o std poderá ser suprimido
    using namespace std;
    cout << Pag2.m_Pagar << endl;

    // usando namespace evitamos o conflito
    // entre as duas classes de impressao:
    agit::admin::Impressao aImpr;
    agit::financ::Impressao fImpr;







    return 0;
}

