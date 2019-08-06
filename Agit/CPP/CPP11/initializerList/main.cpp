#include <iostream>
#include <initializer_list>

using namespace std;


class P
{
private:
    //std::initializer_list<int> *vals;
    std::initializer_list<int> vals;
    void print()
    {
        //for (auto p=vals->begin(); p!=vals->end();++p)
        for (auto p=vals.begin(); p!=vals.end();++p)
            cout<< *p << '\n';
    }

public:
    P(int, int)
    {
        cout << "P(int, int) called\n";
    }
    P(std::initializer_list<int> lst)
    {
        cout << "P(initializer_list<int>) called\n";
        //vals = &lst;
        vals = lst;
        this->print();
    }


};


int main()
{
    P p(77,5);     // calls P::P(int, int)
    P q{77,5};     // calls P::P(initializer_list)
    P r{77,5,42};  // calls P::P(initializer_list)
    P s = {77,5};  // calls P::P(initializer_list)

    return 0;
}


