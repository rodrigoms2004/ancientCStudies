#ifndef DATA_H
#define DATA_H


class Data
{
    private:
        char m_dia;     // 1 byte
        char m_mes;     // 1 byte
        short m_ano;    // 2 bytes

        short m_anoMin, m_anoMax;       // 4 bytes
        int m_iDiaCorrido;              // 4 bytes
        bool m_OK;                      // 1 byte
        mutable int PodeAlterarSempre;  // 4 bytes

        // descobre se número é par
        bool mesPar() const;

    public: // membros declarados como public podem ser acessados em
            // qualquer função, esteja ela declarada aqui ou não

        // ==== constantes padronizadas da class:
        // valores “default” para anos mínimo e máximo:
        // usados para validar o Ano de cada data:
        enum { ANO_MIN_DEF=1 , ANO_MAX_DEF=9999};
        // meses de corte para apurar o último dia de cada mês:
        enum { FEVEREIRO = 2, JULHO = 7 };

        // ==== funções-membro da class:
        Data(); // construtora
        ~Data(); // destrutora

        void Altera(char dia, char mes, short ano);

        inline void Valida();

        // apurar o último dia de cada mês:
        inline char UltimoDiaMes( /* const Data *this */ ) const; // define o ponteiro this como const

        // descobrir se um ano é bissexto
        inline bool AnoBissexto( /* const Data *this */ ) const;

        // imrpimir dia, mês e ano
        void Imprime( /* const Data *this */ ) const;

        // na função prototipada abaixo,
        // o parâmetro 'this' é um ponteiro, especificado como const
        // e o parâmetro 'rdt2' é uma referência (especificada como const):
        int Compara(const Data & rdt2) const;
        /*
            retorna:    0 (zero) se estiverem iguais;
                        < 0 se a primeira estiver menor;
                        > 0 se a primeira estiver maior.
        */

        bool operator == (const Data &rdt2) const;
        bool operator < (const Data &rdt2) const;
        bool operator > (const Data &rdt2) const;


        // métodos get
        char getDia() const;
        char getMes() const;
        short getAno() const;




};

#endif // DATA_H
