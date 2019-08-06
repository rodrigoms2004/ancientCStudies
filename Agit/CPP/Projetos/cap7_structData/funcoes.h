#ifndef FUNCOES_H
#define FUNCOES_H

struct data
{
    private:
        char m_dia;
        char m_mes;
        short m_ano;
        // variáveis de controle para validação do ano:
        short m_anoMin, m_anoMax;

        // flag que indica se a data está correta ou não:
        bool m_OK;      // C++ tem o tipo "bool" ...

    public:
        // valores default para os anos mínimo e máximo
        enum { ANO_MIN_DEF = 1, ANO_MAX_DEF = 9999 };

        // função membro da struct
        void Altera( /* parametro ocult, */
                     char dia, char mes, short ano);

        /* a função abaixo (“Data()”), por ter o mesmo nome da
        struct, cumpre um papel especial: ela é classificada como
        construtora e será chamada automatica e obrigatoriamente
        sempre que uma variável deste tipo for criada
        (podendo assim ser usada para a inicialização dos campos) :
        */

        data( /* parâmetro oculto */ );

        void ImprimirData();

};




#endif // FUNCOES_H
