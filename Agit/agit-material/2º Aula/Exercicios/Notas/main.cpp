#include <iostream>

using namespace std;

int main()
{
    double notas[10];
    double maior;
    for(int i = 0; i < 10; ++i)
    {
        cout << "Digite a nota["
             << i << "]: ";
        cin >> notas[i];

        //Mais eficiente
        if(i == 0)
            maior = notas[i];
        else if(notas[i] > maior)
            maior = notas[i];
    }


    /*
    //menos eficiente
    double maior = notas[0];
    for(int i = 1; i < 10; ++i)
    {
        if(notas[i] > maior)
        {
            maior = notas[i];
        }
    }
    */

    cout << "A maior nota dessa turma foi: "
         << maior << '\n';

    return 0;
}

