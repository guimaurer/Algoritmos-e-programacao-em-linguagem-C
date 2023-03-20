/*
4)	Faça um programa que leia 3 números inteiros obrigatoriamente com três
dígitos e depois utilizando uma função imprima o número lido de forma invertida
(os números que foram passados por parâmetro).

Ex: 234 saída: 432

*/

#include <stdio.h>
#include <stdlib.h>


void invert(int *num) {
  int numero = *num;
  int vetor[3];
  vetor[0] = numero % 10;
  numero = numero / 10;
  vetor[1] = numero % 10;
  numero = numero / 10;
  vetor[2] = numero % 10;
  printf("\n%d %d %d", vetor[0], vetor[1], vetor[2]);
}



int main() {
  system("@cls||clear");
  int num1, num2, num3;
  printf("Digite um número com 3 digitos: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  invert(&num1);
  invert(&num2);
  invert(&num3);
}