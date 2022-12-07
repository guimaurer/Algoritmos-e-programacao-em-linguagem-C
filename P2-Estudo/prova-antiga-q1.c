/******************************************************************************



*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int idade = 1, qtd_pessoas = 0, pri_qtd_show = 0, pri_show = 0,
      pri_idade = 0, 
    fav_pop = 0, fav_rock = 0, fav_pagode = 0,
      fav_sertanejo = 0;

  while (idade) {
    int pri_opt = 1, fav_opt= 1; 
    printf("\nDigite a Idade: ");
    scanf("%d", &idade);
    if (idade > 0) {
      qtd_pessoas++;
      while (pri_opt) {
        printf("\nSeria a primeira vez em um show:\n1 - Sim\n2 - Não\n: ");
        scanf("%d", &pri_show);
        switch (pri_show) {
        case 1:
          pri_qtd_show++;
          pri_idade = pri_idade + idade;
          pri_opt = 0;
          break;
        case 2:
          pri_opt = 0;
          break;
        default:
          printf("*** Valor invalido ***");
        }
      }
      while (fav_opt) {
      printf("\nQual o tipo de musica favorito:\n1 - Pop\n2 - Rock\n3 - "
             "Pagode\n4 - Sertanejo\n: ");
      scanf("%d", &fav_opt);
      switch (fav_opt) {
      case 0:
      printf("\n*** Valor invalido ***\n");
      fav_opt = -1;
      break;
      case 1:
      fav_pop++;
      fav_opt = 0;
      break;
      case 2:
      fav_rock++;
      fav_opt = 0;
      break;
      case 3:
      fav_pagode++;
      fav_opt = 0;
      break;
      case 4:
      fav_sertanejo++;
      fav_opt = 0;
      break;
      default:
      printf("\n*** Valor invalido ***\n");
      }
      }
      
    }
    if (idade < 0) {
      printf("\n*** Digite ZERO para encerrar ou qualquer idade maior que 0 "
             "para continuar ***\n");
    }
  }
  printf("\nTotal de :%d Pessoas ", qtd_pessoas);
  printf("\nTotal de :%d Primeiras pessoas em um show, média de idade: %2.f ", pri_qtd_show, (float)pri_idade / (float)pri_qtd_show);
  printf("\nPop %d pessoas preferem ", fav_pop);
  printf("\nRock %d pessoas preferem ", fav_rock);
  printf("\nPagode %d pessoas preferem ", fav_pagode);
  printf("\nSertanejo %d pessoas preferem ", fav_sertanejo);

}