#include <iostream>


using namespace std;

int main()
{
    double nota1, nota2, media;
    cout << "Digite a nota 1: ";
    cin >> nota1;

    cout << "Digite a nota 2: ";
    cin >> nota2;

    if(nota1 < 0 || nota1 > 10 ||
       nota2 < 0 || nota2 > 10)
    {
        cout << "As notas devem estar entre 0 e 10.\n";
        return 0;
    }

    media = (nota1 + nota2) / 2;

    cout << "Sua media eh de: " << media << '\n';
    if(media >= 6)
        cout << "Aprovado!!!\n\n";
    else
        cout << "Reprovado!!!\n\n";

    return 0;
}

