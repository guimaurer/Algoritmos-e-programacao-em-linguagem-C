/******************************************************************************



*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_matriz(int matriz[5][5]) {
  int i, j;
  printf("\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void chang_vertical(int matriz[5][5]) {
  int i, h = 4;

  for (i = 0; i < 5; i++) {
    matriz[i][i] = matriz[i][h];
    h--;
  }
}

void more_40(int matriz[5][5]) {
  int i, j, qtd[25], qtd_opt = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (matriz[i][j] > 40) {
        qtd[qtd_opt] = matriz[i][j];
        qtd_opt++;
      }
    }
  }
  printf("\nExiste %d numeros acima de 40\nSegue Eles: ", qtd_opt + 1);
  for (i = 0; i < qtd_opt; i++) {
    printf("%d, ", qtd[i]);
  }
  printf("\n");
}
void bring_forward(int matriz[5][5]) {
  int i, j;
  printf("\n");
  for (i = 4; i >= 0; i--) {
    for (j = 4; j >= 0; j--) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main() {

  int matriz[5][5], i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      int val_user = 1;
      while (val_user) {
        printf("\nDigite um numero par maior que 10:\nLinha %d, Coluna %d: ", i,
               j);
        scanf("%d", &val_user);
        if (val_user > 10 && val_user % 2 == 0) {
          matriz[i][j] = val_user;
          val_user = 0;
        } else {
          printf("\n*** Digite um numero par maior que 10 ***\n");
        }
      }
    }
  }

  print_matriz(matriz);
  chang_vertical(matriz);
  print_matriz(matriz);
  more_40(matriz);
  print_matriz(matriz);
  bring_forward(matriz);
}