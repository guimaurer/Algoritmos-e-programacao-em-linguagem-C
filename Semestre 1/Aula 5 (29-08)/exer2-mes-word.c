/******************************************************************************

Escreva um programa utilizando o comando switch que imprima um mês de acordo
com o número digitado pelo usuário.


*******************************************************************************/

#include <stdio.h>

int main() {
  int mes, data;
  printf("\nDigite o um número do mes: ");
  scanf("%d", &mes);

  switch (mes) {
  case 1:
    printf("\nSeu mes é Janeiro");
    break;

  case 2:
    printf("\nSeu mes é Fevereiro");
    break;

  case 3:
    printf("\nSeu mes é Marco");
    break;

  case 4:
    printf("\nSeu mes é Abril");
    break;

  case 5:
    printf("\nSeu mes é Maio");
    break;

  case 6:
    printf("\nSeu mes é Junho");
    break;

  case 7:
    printf("\nSeu mes é Julho");
    break;

  case 8:
    printf("\nSeu mes é Agosto");
    break;

  case 9:
    printf("\nSeu mes é Setembro");
    break;

  case 10:
    printf("\nSeu mes é Outubro");
    break;

  case 11:
    printf("\nSeu mes é Novembro");
    break;

  case 12:
    printf("\nSeu mes é Dezembro");
    break;

  default:
    printf("\nVoce digitou um mes invalido");
    main();
    break;
  }
}