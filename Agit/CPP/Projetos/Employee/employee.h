#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
public:
    Employee(const char *first, const char *last);
    ~Employee();
    const char *getFirstName() const;
    const char *getLastName() const;

    // função membro static
    static int getCount();  // retorna # de objetos instanciados

private:
    char *firstName;
    char *lastName;

    // membro de dados static
    static int count;   // numero de objetos instanciados
};

#endif // EMPLOYEE_H
