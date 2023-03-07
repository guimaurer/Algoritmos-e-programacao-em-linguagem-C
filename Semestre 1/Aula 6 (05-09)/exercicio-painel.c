/******************************************************************************

Adicionar mais um dia


*******************************************************************************/

#include <stdio.h>

int main() {
  int dia, mes, ano;
  printf("\nSeja bem vindo a calculadora e validadora de dia\n\n");
  printf("\nDigite um dia\n");
  scanf("%d", &dia);

  if (dia <= 1 || dia >= 31) {
    printf("\nDigite um mes\n");
    scanf("%d", &mes);

    if (mes >= 1 || mes >= 12) {
      printf("\nDigite um ano\n");
      scanf("%d", &ano);
      if (ano > 0) {

            switch (mes) {
            case 2 :
            case 12:
            default: 
            }


      } else {
      printf("\n Ano Incorreto");
      }

    } else {
      printf("\n Mes Incorreto");
    }

  } else {
    printf("\n Dia Incorreto");
  }

  printf("\nDigite um ano\n");
  scanf("%d", &ano);
}