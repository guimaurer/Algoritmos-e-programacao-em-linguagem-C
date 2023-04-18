/*

1) Crie uma função que transforma todos os caracteres de uma string em
maiúsculos.


*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  system("@cls||clear");
  int loop = 1, i;
  while (loop) {
    int tam_vetor = 0;
    printf("\n\nQual o tamanho da turma? : ");
    float j = 0;
    scanf("%d", &tam_vetor);
    float bd[3][tam_vetor];
    int loop1 = 1;
    int cont = 0;
    while (loop1) {
      printf("\nDefina a P1 para o aluno %d: ", cont + 1);
      scanf("%f", &bd[cont][0]);

      printf("\nDefina a P2 para o aluno %d: ", cont + 1);
      scanf("%f", &bd[cont][1]);

      printf("\nDefina a T1 para o aluno %d: ", cont + 1);
      scanf("%f", &bd[cont][2]);
      printf("\n------------------\n");
      cont++;
      
      if (cont == tam_vetor) {
        loop1 = 0;
      }
    }

    for (i = 0; i < cont; i++) {
      j = j + ((bd[i][0] * 2) + (bd[i][1] * 3) + (bd[i][2] * 1))/6;
    }
    printf("\n A media é = %.2f", j/cont);
  }
}