#include <stdio.h>

main ()
{
	float sal[13];	/* índice 0 + 12 meses */
	float total;
	int i;
	
	for (i = 1; i < 12; i++)
	{
		printf("Introd. o salário do mês %d:", i);
		scanf("%f", &sal[i]);
	}  // end for

/* Mostrar os valores Mensais e calcular o total */
	puts(" Mês	Valor ");
	for (i = 1, total = 0.0; i < 12; i++)
	{
		printf(" %3d	%9.2f\n", i+1, sal[i]);
		total += sal[i];
	}  // end for

	printf("Total Anual: %9.2f\n", total);

}  // end main()
