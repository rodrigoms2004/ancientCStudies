#include <stdio.h>

main() 
{
  float salario;
  
  printf("Qual o salário: "); scanf("%f", &salario);
  salario = salario > 1000 ? salario*1.05 : salario * 1.07;
  printf("Novo salário: %0.2f\n", salario);
}