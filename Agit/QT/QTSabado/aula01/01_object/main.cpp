#include <QCoreApplication>
#include <iostream>

class TestObj: public QObject
{
public:
    TestObj(QObject* p = 0):QObject(p){}
    ~TestObj() // destroyer
    {
        // a função "objectName" retorna objeto QString
        // que pode ser convertido para std::string:
        std::cout << objectName().toStdString()
                  << " -> sendo destruido" << std::endl;
    }
};

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    /*
    TestObj *pobj_1 = new TestObj(); // null parent
    TestObj *pobj_2 = new TestObj(pobj_1);  // parent of pobj_1
    TestObj *pobj_3 = new TestObj(pobj_2);  // parent of pobj_1

    pobj_1->setObjectName("pobj_1 : pai de pobj_2");
    pobj_2->setObjectName("pobj_2 : filho de pobj_1 : pai de pobj_3");
    pobj_3->setObjectName("pobj_3 : filho de pobj_2");

    delete pobj_1;
*/

    // cria pilha obj3, obj2 e obj1
    TestObj obj3;
    TestObj obj2;
    TestObj obj1;

    /*
    //O correto seria...
    TestObj obj1;
    TestObj obj2;
    TestObj obj3;
    */

    obj2.setParent(&obj1); // obj2 é filho de obj1
    obj3.setParent(&obj2); // obj3 é filho de obj2

    obj1.setObjectName("obj1"); // destroi obj1
    obj2.setObjectName("obj2"); // destroi obj2, mas como obj1 já foi destruido ocorrerá erro
    obj3.setObjectName("obj3");

    //return a.exec();
    return 0;
}

