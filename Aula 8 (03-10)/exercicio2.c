/******************************************************************************

Faça um programa que lê valores inteiros maiores que 10 em um vetor de 7
posições. Posteriormente crie um outro vetor com os elementos ímpares do vetor
original. Ao final do programa imprima os dois vetores criados.


*******************************************************************************/
#include <stdio.h>

int main() {
  int vet[7], i, vet_2[7], i_2 = 0;

  for (i = 0; i < 7; i++) {
    vet[i] = 0;
    while (vet[i] < 10) {
      printf("\nDigite a posição %d maior que 10: ", i);
      scanf("%d", &vet[i]);
    }
    if (vet[i] %2 != 0) {
    vet_2[i_2] = vet[i];
    i_2++;
    }
  }
  for (i = 0; i < 7; i++) {
    

  }
}