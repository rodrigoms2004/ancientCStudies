#ifndef LISTADEVALORES_H
#define LISTADEVALORES_H


// TEMPLATE de CLASSE "ListaDeValores":
template <class TIPO, int i> class ListaDeValores
{
private:
    TIPO buffer[i];
    // membro de dados do TIPO PARAMETRIZADO
public:

    ListaDeValores();
    ~ListaDeValores();

    void Atribui(int Indice, TIPO tValor);
    // segundo parametro: do TIPO PARAMETRIZADO

    TIPO Retorna(int Indice);
    // valor de retorno: do TIPO PARAMETRIZADO
};


template <class TIPO, int i>
ListaDeValores<TIPO, i>::ListaDeValores()
{

}

template <class TIPO, int i>
ListaDeValores<TIPO, i>::~ListaDeValores()
{

}


template <class TIPO, int i>
void ListaDeValores<TIPO, i>::Atribui(int Indice, TIPO tValor)
{
    buffer[Indice] = tValor;
}

// template de função-membro "Retorna" do template de classe
// "ListaDeValores
template <class TIPO, int i>
TIPO ListaDeValores<TIPO, i>::Retorna(int Indice)
{
    return buffer[Indice];
}



#endif // LISTADEVALORES_H
