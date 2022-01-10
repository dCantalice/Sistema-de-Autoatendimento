#include <stdio.h>
#include <stdlib.h>

void transf() {

char codigo[20];
int confirmt;
float valor;

printf("\nBem-vindo a Transferencia PIX\n");

printf("\nDigite a chave PIX: ");
 scanf("%s", codigo);

printf("\nDigite o valor: ");
 scanf("%f", &valor);

printf("\n Tem certeza?\n\n1.SIM\n2.NAO\n\n");
 scanf("%i", &confirmt);

switch(confirmt){

case 1:

printf("\nTransferencia Confirmada.");
printf("\n Valor transferido: R$%.2f", valor);
break;
case 2:

printf("\nTransferencia Negada.");
break;
default:

printf("\nValor Inválido!");
break;

  }
}