#ifndef DATA_H
#define DATA_H

class Data
{
private:
    short m_dia;
    short m_mes;
    short m_ano;
    bool m_OK;

    bool mesPar() const;
public:
    enum { ANO_MIN_DEF=1 , ANO_MAX_DEF=9999};
    // meses de corte para apurar o último dia de cada mês:
    enum { FEVEREIRO = 2, JULHO = 7 };

    Data();

    inline void validar();

    // apurar o último dia de cada mês:
    inline char UltimoDiaMes( /* const Data *this */ ) const; // define o ponteiro this como const

    // descobrir se um ano é bissexto
    inline bool AnoBissexto( /* const Data *this */ ) const;

    void alterar(short dia, short mes, short ano);

    void imprimir() const;

    int comparar(const Data & rdt2) const;

    inline bool operator == (const Data &rdt2) const;
    inline bool operator <= (const Data &rdt2) const;
    inline bool operator >= (const Data &rdt2) const;
    inline bool operator < (const Data &rdt2) const;
    inline bool operator > (const Data &rdt2) const;


};

inline bool Data::operator == (const Data &rdt2) const
{
    return (comparar(rdt2) == 0);
}

inline bool Data::operator <= (const Data &rdt2) const
{
    return (comparar(rdt2) <= 0);
}

inline bool Data::operator >= (const Data &rdt2) const
{
    return (comparar(rdt2) >= 0);
}

inline bool Data::operator < (const Data &rdt2) const
{
    return (comparar(rdt2) < 0);
}

inline bool Data::operator > (const Data &rdt2) const
{
    return (comparar(rdt2) > 0);
}

#endif // DATA_H
