/*
Faça um programa que crie um arquivo BINÁRIO em disco, com o nome “dados.bin”, e escreva neste arquivo em
disco uma contagem que vá de 1 até 100, com um número em cada linha. Abra este arquivo em um editor de textos
e observe como ficou o seu conteúdo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *pont_arq;
  int i;
  char bin[32];

  
  pont_arq = fopen("dados.txt","w");
  
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
  }
    for (i = 0; i<100; i++) {
        fprintf(pont_arq, "%d\n", itoa(i+2, bin, 2));
    }


  fclose(pont_arq);
  return 0;
}