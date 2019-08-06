#include "interface.h"
#include <implementation.h>

interface::interface(int v) : ptr (new Implementation(v)) { }

// chama a função setValue de Implementation
void interface::setValue(int v) { ptr->setValue(v); }

// chama a função getValue de Implementation
int interface::getValue() const { return ptr->getValue(); }

interface::~interface() { delete ptr; }

