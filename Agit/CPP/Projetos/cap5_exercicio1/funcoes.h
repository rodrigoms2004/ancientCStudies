#ifndef FUNCOES
#define FUNCOES

//Calcula o fatorial de um número inteiro. Retorna double porque o resulta-
//do pode não caber em um int.
double Fatorial ( int num ) ;

//Calcula o resultado de "base elevada a expoente". Retorno: idem.
double Potencia ( int base, int exp ) ;

//Calcula o total de termos de uma Progressão Aritmética (não a sua soma).
int PA_TotalTermos ( int inicial, int final, int razao ) ;

//Imprime todos os números pares entre "inicial e final".
void ImprimePares ( int inicial , int final ) ;

//Problema básico/clássico de matemática: se você ganha 1 real no primeiro
//dia do mês e dobra esse valor a cada dia (2 reais no segundo dia, 4 reais
//no terceiro, etc), quanto irá ganhar no último dia (por exemplo, 31)?
double DobraValor ( int ultimo_dia ) ;

//O mesmo usando um laço for.
double DobraValor_for ( int ultimo_dia ) ;

//Retorna o total de combinações únicas em qualquer ordem, considerando-
//se uma quantidade de escolhas em um conjunto de alternativas. Por exem-
//plo, para saber as possibilidades de acerto na mega-sena: C(60,6).
double TotalCombinacoes ( int conjunto, int escolhas ) ;


#endif // FUNCOES

