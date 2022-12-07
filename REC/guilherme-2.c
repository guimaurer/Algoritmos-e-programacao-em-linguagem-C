#include <stdio.h>
#include <stdlib.h>

int main() {
  ;
  int i, j;
  int tam = 33;
  int metade = tam / 2 + 1;
  char matriz[tam][tam];
  int prim_x = metade, sec_x = metade;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      matriz[i][j] = '-';
    }
  }

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      printf("%c ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\n");

  for (i = 0; i < metade; i++) {
    prim_x--;
    sec_x++;
    for (j = 0; j < tam; j++) {
      if (j == prim_x) {
        matriz[i][j] = 'x';
        if (i != 0) {
          matriz[i][sec_x - 2] = 'x';
        }
      }
    }
  }

  for (i = metade; i < tam; i++) {
    prim_x++;
    sec_x--;
    for (j = 0; j < tam; j++) {
      if (j == prim_x) {
        matriz[i][j] = 'x';
        if (i != 0) {
          matriz[i][sec_x - 2] = 'x';
        }
      }
    }
  }

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      printf("%c ", matriz[i][j]);
    }
    printf("\n");
  }
}