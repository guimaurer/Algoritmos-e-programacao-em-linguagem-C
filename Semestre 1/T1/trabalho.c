/******************************************************************************

Especificação – Trabalho de Algoritmos e Programação I

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int banco_de_dados[5][2], qtd_chapas = 0, i, j;
  // codigo, Tipo, Quantidade.

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      banco_de_dados[i][j] = 0;
    }
  }
  // zera todas as posicoes

  system("@cls||clear");

  void create_chapa() {
    int tipo, qtd;
    printf("\nDigite o tipo de metal: ");
    scanf("%d", &tipo);
    printf("\nDigite a quantidade: ");
    scanf("%d", &qtd);
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 3; j++) {
        banco_de_dados[i][j] = 0;
      }
    }
  }

  void read_chapa() {
    for (i = 0; i < qtd_chapas; i++) {
      for (j = 0; j < 3; j++) {
        if (j == 0) {
          printf("CODIGO %d", banco_de_dados[i][j]);
        } else {
          printf(", %d", banco_de_dados[i][j]);
        }
      }
      printf("\n");
    }
    printf("\n");
  }

  void delete_chapa() {
    read_chapa();
    int codi;
    printf("\nDigite o codigo da chapa que deseja remover: ");
    scanf("%d", &codi);

    if (codi <= qtd_chapas && codi >= 0) {
      for (i = 0; i < qtd_chapas; i++) {
        if (banco_de_dados[i][0] == codi) {
          for (j = codi; j < qtd_chapas; j++) {
            banco_de_dados[j][1] = banco_de_dados[j + 1][0];
            banco_de_dados[j][1] = banco_de_dados[j + 1][1];
            banco_de_dados[j][2] = banco_de_dados[j + 1][2];
          }
        }
      }
      qtd_chapas--;
    } else {
      printf("\n---------Codigo invalido, digite novamente---------\n");
    }
  }

  int menu_loop = 1;
  printf("\n---------Seja bem vindo(a) ao sistema---------\n\n");

  while (menu_loop) {
    int menu_opcao;

    printf("\nDigite a operacao desejada:\n\n1- Cadastrar metal\n2- Remover "
           "metal\n3- Quantidade de chapas estocadas por tipo\n4- Tipos de "
           "chapas de metal sem estoque\n5- Quantidade total de "
           "chapas de metal estocadas\n6- Quantidade em metros quadrados "
           "estocados\n7- Alteração da Quantidade de chapas estocadas\n8- "
           "Fim\n: ");
    scanf("%d", &menu_opcao);
    switch (menu_opcao) {
    case 1:
      create_chapa();
      break;
    case 2:
      delete_chapa();
      break;
    case 3:
    case 4:
      read_chapa();
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      menu_loop = 0;
      break;
    default:
      printf("\nOpcao invalida, digite novamente\n");
    }
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d", banco_de_dados[i][j]);
    }
    printf("\n");
  }
}
