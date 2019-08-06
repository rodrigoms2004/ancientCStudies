#ifndef INTERFACE_H
#define INTERFACE_H

#include <implementation.h>

class interface
{
public:
    interface(int);
    void setValue(int);
    int getValue(int) const;
    ~interface();
private:
    Implementation *ptr;
};

#endif // INTERFACE_H
