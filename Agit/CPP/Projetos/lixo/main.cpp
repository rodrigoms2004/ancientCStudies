#include <iostream>

using namespace std;

void testePonteirosReferencias();
void legiaoPonteiros();
void referencia(int *x);
void tamanhos();
void alocacaoDinamica();

int construidas = 0;
int destruidas = 0;

class Qualquer
{
  public:
    Qualquer()
    {
        ++construidas;
    }
    ~Qualquer()
    {
        ++destruidas;
    }
};

class Teste
{
    int *p_i;
public:

    // construtor de cópia
    Teste (const Teste &t)
    {
        p_i = new int;  // dois objetos referenciando o mesmo espaço de memória
        *p_i = t.getI();
        // ou
        //p_i = new int (t.getI());
    }

    // operador de atribuição

    Teste &operator = (const Teste &t)
    {
        p_i = new int(t.getI());
        return *this;
    }

    Teste(int x)//Aloca um inteiro no heap
    {
        p_i  = new int;
        *p_i = x;
    }
    ~Teste()//Quando o destrutor é chamado ele desaloca a memória
    {
        delete p_i;
    }
    int getI() const { return *p_i; }
    int *adress() { return p_i; }
};


int main()
{
    Teste a(20);//Cria um objeto da classe teste
    cout << "a: " << a.getI() << '\n';//Imprime o valor de p_i, nesse caso: 20
    cout << "a.adress: " << a.adress() << "\n\n";

    {
        Teste b(10);
        b = a;
        //Teste b(a);//O compilador gerou um construtor de copia

        //Agora tudo que estava em a será copiado para b
        cout << "b: " << b.getI() << '\n';//Imprime o valor de p_i, nesse caso: 20
        cout << "b.adress: " << b.adress() << "\n\n"; //Como 'b' é uma cópia de 'a' getI retornará 20
    }//Ao chegar aqui o destrutor de 'b' é chamado, desalocando o valor alocado por
    //p_i, mas como a.p_i e b.p_i apontavam para a mesma
    //região de memória agora a.p_i apontará para um valor nulo.

    cout << "a: " << a.getI() << '\n';//Podemos ter erro em tempo de execução
    cout << "a.adress: " << a.adress() << "\n\n";



    //testePonteirosReferencias();
    //legiaoPonteiros();
    //tamanhos();
    //alocacaoDinamica();

    return 0;

}


void alocacaoDinamica()
{
    {
        //Qualquer();
        //Qualquer q;

        Qualquer *pQ = new Qualquer[4];
        delete []pQ;

        cout << "Construídas: " << construidas << " Destruidas: " << destruidas << endl;
    }

}

void tamanhos()
{
    cout << "int = " << sizeof(int) << " bytes\n";                    // 4 bytes
    cout << "long int = " << sizeof(long int) << " bytes\n";          // 8 bytes
    cout << "long = " << sizeof(long) << " bytes\n";                  // 8 bytes
    cout << "short = " << sizeof(short) << " bytes\n";                // 2 bytes
    cout << "double = " << sizeof(double) << " bytes\n";              // 8 bytes
    cout << "long double = " << sizeof(long double) << " bytes\n";    // 16 bytes
    cout << "float = " << sizeof(float) << " bytes\n";                // 4 bytes
    cout << "char = " << sizeof(char) << " byte\n";                   // 1 byte
    cout << "bool = " << sizeof(bool) << " byte\n";                   // 1 byte
}

void legiaoPonteiros()
{
    int x = 5;
    int * px = &x;
    int **ppx = &px;
    int ***pppx = &ppx;

    cout << "valor de x              = " << x << endl;
    cout << "endereço de x           = " << &x << endl;

    cout << "valor de px             = " << px << endl;
    cout << "endereço de px          = " << &px << endl;
    cout << "valor apontado por px   = " << *px << endl;

    cout << "valor de ppx            = " << ppx << endl;
    cout << "endereço de ppx         = " << &ppx << endl;
    cout << "valor apontado por ppx  = " << *ppx << endl;

    cout << "valor de pppx           = " << pppx << endl;
    cout << "endereço de pppx        = " << &pppx << endl;
    cout << "valor apontado por pppx = " << *pppx << endl;
}

void testePonteirosReferencias()
{
    int x1 = 5;
    cout << x1 << endl;
    referencia(&x1);
    cout << x1 << endl;

    char c = 65;
    cout << c << endl;

    int a = 10;
    int *x;
    //int *x = &a;

    x = &a;

    // ponteiro sempre tem 8 bytes

    cout << "tamanho em bytes int *: "
         << sizeof(int *) << endl;


    cout<< "Endereço de a: " << &a << endl;
    cout<< "Valor de a: " << a << endl;
    cout<< "Endereço de x: " << &x << endl;
    cout<< "Valor de x: " << x << endl;
    cout<< "Valor apontado por x: " << *x << endl;

    /*
    double xd = 5;
    int *p = &xd; // não permite converter double* para int*
    */
    //int* p = 100; // não permite conversão int para int*
    //cout << *p << " - " << p << endl;

    a = 5;
    int &ra = a;
    int *p = &ra;
    cout << "ra  = " << ra << endl;
    cout << "&ra = " << &ra << endl;
    cout << "a   = " << a << endl;
    cout << "&a  = " << &a << endl;
    cout << "p   = " << p << endl;
    cout << "&p  = " << &p << endl;
    cout << "*p  = " << *p << endl;

    ra += 10;
    cout << "ra incrementado  = " << ra << endl;
    cout << "a depois do incremento de ra = " << a << endl;
}


void referencia(int *x)
{
    *x += 10;
}

