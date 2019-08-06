#ifndef PADRAO_H
#define PADRAO_H


class Padrao
{
    static int nSoma;
    static int nSub;
    static int nMult;
    static int nDivi;
public:
    static double soma(double a, double b);
    static double sub(double a, double b);
    static double mult(double a, double b);
    static double divi(double a, double b);

    static int somaVezes();
    static int subVezes();
    static int multVezes();
    static int diviVezes();
};

#endif // PADRAO_H
