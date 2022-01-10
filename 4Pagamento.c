#include <stdio.h>
#include <stdlib.h>

void pagamento() {

char codigobol[25];
int confirmbol;

printf("\nDigite o código do Boleto: ");
 scanf("%s", codigobol);

 
 printf("\n Tem certeza?\n\n1.SIM\n2.NAO\n");

 scanf("%i", &confirmbol);
switch (confirmbol){

case 1: 

printf("\nPagamento Confirmado.");
break;
case 2: 

printf("\nPagamento Negado.");
break;
default:

printf("\nValor inválido");
break;
 }
}