#ifndef LISTA
#define LISTA

#include <iostream>

using namespace std;


template <typename Tipo>
class Lista
{
    struct Node
    {
        Tipo   m_carga = 0;
        Node  *m_next = NULL;
        ~Node()
        {
            if(m_next != NULL)
                delete m_next;
        }
    };
    Node *m_root = NULL;
public:
    ~Lista()
    {
        if(m_root != NULL)
            delete m_root;
    }
    void inserir(Tipo valor)
    {
        if(m_root == NULL)
        {
            m_root = new Node;
            m_root->m_carga = valor;
        }
        else
        {
            Node *temp = m_root;
            while(temp != NULL)
            {
                if(temp->m_next == NULL)
                {
                    temp->m_next = new Node;
                    temp->m_next->m_carga = valor;
                    break;
                }
                temp = temp->m_next;
            }
        }
    }
    void imprimir()
    {
        Node *temp = m_root;
        while(temp != NULL)
        {
            cout << temp->m_carga << '\n';
            temp = temp->m_next;
        }
    }
};


#endif // LISTA

