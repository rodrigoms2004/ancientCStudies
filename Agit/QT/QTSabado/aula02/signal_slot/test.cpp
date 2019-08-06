#include "test.h"

// perimte definir qual será o pai da classe Test
Test::Test(QObject *parent)
    : QObject(parent),
      m_value(0)
{

}

Test::~Test()
{

}

void Test::setValue(int value)
{
    if (m_value != value)
    {
        m_value = value;
        emit valueChanged(value);
    }
}

