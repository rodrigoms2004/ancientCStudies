#include <stdio.h>

main()
{
  char opcao;
  do
  {
    printf("\n MENU PRINCIPAL\n");
    printf("\n\n\tClientes");
    printf("\n\n\tFornecedores");
    printf("\n\n\tEncomendas");
    printf("\n\n\tSair");
    printf("\n\n\n\t\t\tOpção:");
    scanf(" %c", &opcao);
    fflush(stdin); // limpar o buffer do teclado
    switch(opcao)
    {
      case 'c':
      case 'C': puts ("Opção CLIENTES"); break;
      case 'f':
      case 'F': puts ("Opção FORNECEDORES"); break;
      case 'e':
      case 'E': puts ("Opção ENCOMENDAS"); break;
      case 's':
      case 'S': break; // não faz nada
      default: puts ("Opção INVÁLIDA");
    } // end switch
    getchar();	// parar a tela
  } // end do while
  while (opcao != 's' && opcao != 'S');
} // end main()