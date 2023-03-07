/******************************************************************************

Um fazendeiro deseja controlar o peso de seu pequeno rebanho de cabras, assim
ele irá por 3 meses pesar cada um de seus 10 animais e registar o peso de cada
um. Você irá criar um programa que possibilite estes registros mensais para as
10 cabras.

O programa irá mostrar para cada animal a perda ou ganho de pesos nos
três meses e identificar em qual mês o animal teve o maior peso. Informe,
também, o peso total do rebanho no último mês e o valor da diferença entre o
primeiro mês e o último mês do registro.


*******************************************************************************/
#include <stdio.h>

int main() {
  float mes1[10], mes2[10], mes3[10], total_mes3;
  int i;

  for (i = 0; i < 10; i++) {
    mes1[i] = 0;
    while (mes1[i] < 1) {
      printf("Mes 1: Digite o peso da cabra %d: ", i + 1);
      scanf("%f", &mes1[i]);
    }
  }
  for (i = 0; i < 10; i++) {
    mes2[i] = 0;
    while (mes2[i] < 1) {
      printf("Mes 2: Digite o peso da cabra %d: ", i + 1);
      scanf("%f", &mes2[i]);
    }
  }
  for (i = 0; i < 10; i++) {
    mes3[i] = 0;
    while (mes3[i] < 1) {
      printf("Mes 3: Digite o peso da cabra %d: ", i + 1);
      scanf("%f", &mes3[i]);
      total_mes3 = total_mes3 + mes3[i];
    }
  }
  for (i = 0; i < 10; i++) {
    printf("\nMes 1: Animal %d, peso %.2f", i+1, mes1[i]);
    printf("\nMes 2: Animal %d, peso %.2f", i+1, mes2[i]);
    printf("\nMes 3: Animal %d, peso %.2f", i+1, mes3[i]);
    printf("\n\n");
  }
}