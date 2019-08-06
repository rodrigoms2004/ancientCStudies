#include "singleton.h"
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;


Singleton& Singleton::getInstance()
{
    Mutex mutex;
    ScopeLock(&mutex); // to unlock mutex on exit
    static Singleton instance;
    return instance;
}   // end getInstance


Singleton::Singleton()
{
    cout << "Ctor\n";
}

Singleton::~Singleton()
{
    cout << "Dtor\n";
}

