/******************************************************************************
Escreva um programa que pede para o usuário entrar um número correspondente a um
dia da semana e que então apresente na tela o nome do dia utilizando o comando
switch.

Partindo do ponto que dia 01 é o primeiro dia do mes e domingo.

*******************************************************************************/

#include <stdio.h>

int main() {
  int dia;
  printf("\nDigite o um número do dia da semana: ");
  scanf("%d", &dia);

    switch (dia) {
    case 1:
      printf("\nSeu dia é Domingo");
      break;

    case 2:
      printf("\nSeu dia é Segunda");
      break;

    case 3:
      printf("\nSeu dia é Terca");
      break;

    case 4:
      printf("\nSeu dia é Quarta");
      break;

    case 5:
      printf("\nSeu dia é Quinta");
      break;

    case 6:
      printf("\nSeu dia é Sexta");
      break;

    case 7:
      printf("\nSeu dia é Sabado");
      break;

    default: printf("\nVoce digitou um numero invalido");
    main();
    break;
    
    }
}