/******************************************************************************

Especificação – Trabalho de Algoritmos e Programação I

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int banco_de_dados[5][3], qtd_chapas = 0, i, j;
  // codigo, Tipo, Quantidade.

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      banco_de_dados[i][j] = 0;
    }
  }
 // zera todas as posicoes
 
  void create_chapa() {
    int tipo, qtd, aux;
    printf("\nDigite o tipo de metal: ");
    scanf("%d", &tipo);
    printf("\nDigite a quantidade: ");
    scanf("%d", &qtd);
    // não pode adicionar quantidade zero
    banco_de_dados[qtd_chapas][0] = qtd_chapas;
    banco_de_dados[qtd_chapas][1] = tipo;
    banco_de_dados[qtd_chapas][2] = qtd;
    qtd_chapas++;
  }

  void read_chapa() {
    for (i = 0; i < qtd_chapas; i++) {
      for (j = 0; j < 3; j++) {
        if (j == 0) {
          printf("COD%d", banco_de_dados[i][j]);
        } else {
          printf(" %d", banco_de_dados[i][j]);
        }
      }
      printf("\n");
    }
    printf("\n");
  }

  void delete_chapa() {
    read_chapa() int codi;
    printf("\nDigite o codigo da chapa: ");
    scanf("%d", &codi);

    qtd_chapas--;
  }

  
}
