#ifndef LISTA_H
#define LISTA_H

#include <iostream>

using namespace std;
template <typename TIPO> //template <class TIPO> class Lista
class Lista
{
private:
    struct Node
    {
        TIPO valor;
        Node *next;
    };
    Node *root;
    unsigned int numero_de_elementos;
    unsigned int construidos;
    unsigned int destruidos;
public:
    Lista()
    {
        numero_de_elementos = 0;
        construidos = 0;
        destruidos = 0;
    }
    ~Lista()
    {
        if(root != NULL)
            delete root;
        ++destruidos;
    }

    void inserir(int valor)
    {
        if (root == NULL)
        {
            root = new Node;
            root->valor = valor;
        }
        else
        {
            Node *temp = root;
            while(temp != NULL)
            {
                if (temp->next == NULL)
                {
                    temp->next = new Node;
                    temp->next->valor = valor;
                    break;
                }   // end if
                temp = temp->next;
            }   // end while

        }   // end else
        ++numero_de_elementos;
    }

    void imprimir()
    {
        Node *temp = root;

        while(temp != NULL)
        {
            cout << temp->valor << '\n';
            temp = temp->next;
        }
    }

    int getNumeroElementos()
    {
        return numero_de_elementos;
    }

};

#endif // LISTA_H
