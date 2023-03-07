/******************************************************************************

Criação de um jogo da velha em C para relembrar conhecimentos do primeiro
semestre

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int printi_jogo(int jogo_da_velha_BD[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d", jogo_da_velha_BD[i][j]);
      if (j < 2) {
        printf(" | ");
      }
    }
    if (i < 2) {
      printf("\n----------\n");
    }
  }
  printf("\n");
}

int popular_jogo(int jogo_da_velha_BD[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      jogo_da_velha_BD[i][j] = 0;
    }
  }
}

int main() {
   system("@cls||clear");
  int jogo_da_velha_BD[3][3];
  int winner = 1;
  popular_jogo(jogo_da_velha_BD);
  printi_jogo(jogo_da_velha_BD);
}