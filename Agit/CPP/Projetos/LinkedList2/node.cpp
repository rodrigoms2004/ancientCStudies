#include "node.h"
#include <iostream>

using namespace  std;

//http://www.cplusplus.com/articles/LACRko23/

Node::Node()
{

}

// This constructor is just set next pointer of a node and the data contained.
template <class T>
Node<T>::Node(const T &item, Node<T> *ptrnext)
{
    this->data = item;
    this->next = ptrnext;
}

Node<T>* Node::NextNode()
{
    return this->next;
}



// this methods inserts a node just after the node that the method belongs to
// TO-DO: Consider a better implementation
template <class T>
void Node<T>::insertAfter(Node<T> *p)
{
    // not to lose the rest of the list, we ought to link the resst of the
    // list to the Node<T>* p first
    p->next = this->next;

    // now we should link the previous Node to Node<T> *p, i.e the Node
    // that we are inserting after
    this->next = p;
}

// Deletes the node from the list and returns the deleted node
template <class T>
Node<T>* Node::DeleteAfter()
{
   // store the next Node in a temporary Node
    Node<T>* tempNode = next;
    // check if there is a next node
    if (next != NULL)
        next = next->next;

    return tempNode;
}

Node<T> *Node::GetNode(const T &item, Node<T> *nextptr)
{
    Node<T>* newnode;   // local ptr for new node
    newnode = new Node<T>(item, nextptr);
    if (newnode == NULL)
    {
        cerr << "Memory allocation failed." << endl;
        exit(1);
    }
    return newnode;
}



