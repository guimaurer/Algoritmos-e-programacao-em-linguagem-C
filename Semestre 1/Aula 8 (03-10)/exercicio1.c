/******************************************************************************

Usando funções em C

*******************************************************************************/
#include<stdio.h>
int main(void)
{
  char nome[61];
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  
  printf("O nome armazenado foi: %s", nome);
  

  return 0;
}