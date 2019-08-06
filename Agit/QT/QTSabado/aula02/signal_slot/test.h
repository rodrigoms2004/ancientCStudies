#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject
{
    Q_OBJECT // essa macro permite a classe Test suporte a Signal e Slot, a macro tem que ser privado

signals: // sinais sempre retornam void, não são funções
    void valueChanged(int value);

public slots: // slots são funções
    void setValue(int value);

public:
    Test(QObject *parent = 0);

    ~Test();


    int value() const { return m_value; } // função inline

private:
        int m_value;

};

#endif // TEST_H
