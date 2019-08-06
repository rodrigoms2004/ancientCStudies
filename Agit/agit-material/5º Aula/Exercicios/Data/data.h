#ifndef DATA_H
#define DATA_H


class Data
{
private:
    bool  m_ok;
    short m_dia;
    short m_mes;
    short m_ano;
public:
    enum {ANO_MIN_DEF = 1900, ANO_MAX_DEF = 2100};

    enum {FEVEREIRO = 2, JULHO =7};

    Data();

    Data(short dia, short mes, short ano);

    void alterar(short dia, short mes, short ano);

    void imprimir() const;

    inline void validar();

    inline bool anoBissexto() const;

    inline short ultimoDiaMes() const;

    int comparar(const Data &rdt2) const;

    bool operator==(const Data &rdt2) const;

    bool operator<=(const Data &rdt2) const;

    bool operator>=(const Data &rdt2) const;

    bool operator<(const Data &rdt2) const;

    bool operator>(const Data &rdt2) const;
};


#endif // DATA_H
