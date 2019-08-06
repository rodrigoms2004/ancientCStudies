#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
public:
    static Singleton& getInstance();

private:
    Singleton();
    ~Singleton();
    Singleton(const Singleton&);
    const Singleton& operator=(const Singleton&);
};

#endif // SINGLETON_H
