#include <stdio.h>
#include <stdlib.h>


void menu() {

void transf(), saldo(), pagamento(), edit(), ajuda();

int valor;

  printf("\nSeja bem-vindo ao Sistema Bancário SSBank.\n" );
  
  printf("\nOque você deseja? ");

  printf("\n1. Transferencia PIX\n2. Saldo\n3. Pagamento\n4. Editar cadastro\n5. Ajuda\n\n");
  scanf("%i", &valor);
  switch (valor)
  {

   case 1 :
   transf();
   break;

   case 2 :
   saldo();
   break;

   case 3 :
   pagamento();
   break;

   case 4 :
   edit();
   break;

   case 5 :
   ajuda();
   break;

   default: 
   printf("\nValor inválido!\n");
   break;
  }
}