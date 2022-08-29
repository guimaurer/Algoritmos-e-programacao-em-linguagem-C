/******************************************************************************
Escreva um programa que pede para o usuário entrar um número correspondente a um dia da semana
e que então apresente na tela o nome do dia utilizando o comando switch. 

Partindo do ponto de 

*******************************************************************************/

#include <stdio.h>

int main() {
  int num1, num2;
  printf("\nDigite o valor para num1: ");
  scanf("%d", &num1);

  if (num1 >= 1 && num1 <= 5) {
    printf("\nDigite o valor para num2: ");
    scanf("%d", &num2);
    if (num2 > 10) {
      printf("\nSoma é igual a %d", num1 + num2);
    } else {
      printf("\nPara somar, o valor de num2 deve ser maior que 10");
    }
  } else {
    printf("Valor num1 náo é entre 1 e 5");
  }
}
