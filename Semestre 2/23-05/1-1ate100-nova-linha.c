/*
1)	Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”, e escreva neste
arquivo em disco uma contagem que vá de 1 até 100, com um número em cada linha. 
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *pont_arq;
  int i;
  
  pont_arq = fopen("dados.txt","w");
  
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
  }
    for (i = 0; i<100; i++) {
        fprintf(pont_arq, "%d\n", i+1);
    }


  fclose(pont_arq);
  return 0;
}