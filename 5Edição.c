#include <stdio.h>
#include <stdlib.h>


void edit() {

char loginedit;
char senhaedit;
int valor;

printf("\nO que deseja editar? ");
printf("\n1. Login\n2. Senha\n");
scanf("%i", &valor);
switch (valor){

case 1 :

printf("\nDigite seu novo login: ");
 scanf("%s", &loginedit);
printf("\nSeu novo login é: %s", &loginedit);
break;

case 2 :

printf("\nDigite sua nova senha: ");
 scanf("%s", &senhaedit);
printf("\nSua nova senha é: %s", &senhaedit);
break;

default:

printf("\nValor inválido!");
break;
 }
}