#include <stdio.h>
#include <stdlib.h>


void login() {

char login[15];
char senha[15];

  printf("Digite seu login: ");
   scanf("%[^\n]s", &login[15]);

  printf("Digite sua senha: ");
   scanf("%s", &senha[15]);

   printf("\nBem-vindo %s\n", &login[15]);

}