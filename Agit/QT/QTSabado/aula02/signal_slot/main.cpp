#include <iostream>
#include "test.h"



using namespace std;

int main()
{
    Test t1, t2;
    Test t3(&t1); // t3 é filha de t1

    t1.setValue(5);
    t2.setValue(29);

    cout << t1.value() << '\n';
    cout << t2.value() << '\n';
    cout << t3.value() << '\n';

    QObject::connect(
                &t1,
                SIGNAL(valueChanged(int)),
                &t2,
                SLOT(setValue(int)) );

    t1.setValue(10);

    cout << t1.value() << '\n';
    cout << t2.value() << '\n';


    return 0;
}


