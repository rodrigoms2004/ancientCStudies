#include <iostream>
#include <employee.h>

using namespace std;

int main()
{

    cout << "Número de Employees antes da instanciação é "
         << Employee::getCount() << endl;   // usa o nome da classe

    Employee *e1Ptr = new Employee("Simone", "Bianchi");
    Employee *e2Ptr = new Employee("Roberto", "Schmidt");

    cout << "Número de Employees após a instanciação é "
         << e1Ptr->getCount();

    cout << "\n\nEmployee 1: "
         << e1Ptr->getFirstName()
         << ' ' << e1Ptr->getLastName()
         << "\nEmployee 2: "
         << e2Ptr->getFirstName()
         << ' ' << e2Ptr->getLastName() << "\n\n";

    delete e1Ptr;   // recupera a memória
    e1Ptr = 0;
    delete e2Ptr;   // recupera a memória
    e2Ptr = 0;

    cout << "Número de Employees após deleção é "
         << Employee::getCount() << endl;   // usa o nome da classe


    return 0;
}

