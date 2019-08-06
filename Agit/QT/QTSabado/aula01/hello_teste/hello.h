#ifndef HELLO_H
#define HELLO_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    MyObject( QObject *parent = 0 ) : QObject(parent), m_value(0) // lista de inicialização
    {

    }

signals:    // signals sao sempre publicos
    void valueChanged(int newValue);

public slots: // slots podem ser publicos ou privados
    void setValue( int value )
    {
        if ( value != m_value ) // se o sinal mudar envia um sinal
        {
            m_value = value;
            emit valueChanged(value);
        }
    }

public:
    int value()
    {
        return m_value;
    }

private:
    int m_value;

};

#endif // HELLO_H
