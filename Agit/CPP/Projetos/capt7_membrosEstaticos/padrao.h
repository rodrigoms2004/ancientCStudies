#ifndef PADRAO_H
#define PADRAO_H


class padrao
{
private:
    static int countSomar;
    static int countSubtrair;
    static int countMultiplicar;
    static int countDividir;

public:
    static double somar(double a, double b);
    static double subtrair(double a, double b);
    static double multiplicar(double a, double b);
    static double dividir(double a, double b);

    static int getChamadasSomar();
    static int getChamadasSubtrair();
    static int getChamadasMultiplicar();
    static int getChamadasDividir();

    padrao();
    ~padrao();
};

#endif // PADRAO_H
