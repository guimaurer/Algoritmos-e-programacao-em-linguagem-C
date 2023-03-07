#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprima_vet(int vet1[5], int vet2[5]) {
  int i;
  printf("\n Vetor\n");
  for (i = 0; i < 5; i++) {
    printf("%d, ", vet1[i]);
  }
  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("%d, ", vet2[i]);
  }
  printf("\n");
}

void imprima_matriz(int matriz[2][5]) {
  int i, j;
  printf("\nMatriz\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void revert_vet_to_matriz(int vet1_par[5], int vet2_impar[5],
                          int matriz[2][5]) {
  int i, j;
  for (i = 0; i < 2; i++) {
    if (i == 0) {
      for (j = 0; j < 5; j++) {
        matriz[i][j] = vet1_par[j];
      }
    } else {
      for (j = 0; j < 5; j++) {
        matriz[i][j] = vet2_impar[j];
      }
    }
  }
}

int main() {
  int i, num;
  int vet_par[5], cont_par = 0;
  int vet_impar[5], cont_impar = 0;
  int matriz[2][5];

  for (i = 0; i < 10; i++) {
    int num_op = 1;
    while (num_op) {
      printf("\nDigite um numero: ");
      scanf("%d", &num);
      if (num % 2 == 0) {
        if (cont_par < 5) {
          num_op = 0;
          vet_par[cont_par] = num;
          cont_par++;
        } else {
          printf("\n*** Par esta lotado, adicione um Impar ***\n");
        }
      } else {
        if (cont_impar < 5) {
          num_op = 0;
          vet_impar[cont_impar] = num;
          cont_impar++;
        } else {
          printf("*** Impar esta lotado, adicione um Par ***\n");
        }
      }
    }
  }
  imprima_vet(vet_par, vet_impar);
  revert_vet_to_matriz(vet_par, vet_impar, matriz);
  imprima_matriz(matriz);
}