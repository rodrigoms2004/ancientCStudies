#include <stdio.h>
#include <stdlib.h>

main(int argc, char **argv)
{
	int total;
	argv++;									/* Passar ao argv[1] */
	for (total = 0; *argv != NULL; argv++)	/* Todos, exceto argv[0] */
		total += atoi(*argv);				/* Acumula os Valores */
	printf("%d\n", total);
}
