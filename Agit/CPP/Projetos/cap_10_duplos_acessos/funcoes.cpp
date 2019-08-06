#include "funcoes.h"





bool funcao1(int *p, int n)
{
    for (int contador = 0; contador < n; ++contador)
        *p += 3; //... *p = *p + 3; //...// duplos acessos repetidamente

    if (*p > 100)
        return false;
    else
        return true;
}


bool funcao2(int *p, int n)
{
    int temp = *p;  // faz uma cópia inicial do valor apontado por 'p'
                    // aqui temos um primeiro duplo acesso
    for (int contador = 0; contador < n; ++contador)
        temp += 3;  // acumula o valor em 'temp', com um único acesso

    if (temp > 100)
        return false;
    else
    {
        *p = temp;  // altera, de uma única vez, a memória apontada por 'p'
                    // com o resultado acumulado em 'temp'.
                    // aqui temos um segundo duplo acesso - e não mais que isso.
        return true;
    }
}
