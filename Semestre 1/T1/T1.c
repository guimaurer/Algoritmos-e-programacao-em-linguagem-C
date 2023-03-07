/******************************************************************************

Especificação – Trabalho de Algoritmos e Programação I

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void pr_tipo_chapa() {
  printf("\nSelecione o tipo de chapa:\n1 - Chapas de metal do tipo 1 tem "
         "largura 140 cm\n2 - Chapas de metal do tipo 2 tem largura 80 "
         "cm\n3 - Chapas de metal do tipo 3 tem largura 50 cm\n: ");
}
void create_chapa(int banco_de_dados[5][2], int qtd_estoque) {
  int tipo, qtd, i, loop_chapa = 1;
  while (loop_chapa) {
    pr_tipo_chapa();
    scanf("%d", &tipo);
    printf("Digite a quantidade: ");
    scanf("%d", &qtd);
    if (tipo > 0 && tipo < 4) {
      if (qtd >= 0) {
        for (i = 0; i < qtd_estoque + 1; i++) {
          if (banco_de_dados[i][0] == 0) {
            banco_de_dados[i][0] = tipo;
            banco_de_dados[i][1] = qtd;
          }
        }
        loop_chapa = 0;
      } else {
        printf("\n >> Quantidade de chapa menor que zero << \n");
      }
    } else {
      printf("\n >> Tipo da chapa inválido << \n");
    }
  }
}

void read_by_chapas(int banco_de_dados[5][2]) {
  int i, total_1 = 0, total_2 = 0, total_3 = 0;
  for (i = 0; i < 5; i++) {
    if (banco_de_dados[i][0] == 1) {
      total_1 = total_1 + banco_de_dados[i][1];
    }
    if (banco_de_dados[i][0] == 2) {
      total_2 = total_2 + banco_de_dados[i][1];
    }
    if (banco_de_dados[i][0] == 3) {
      total_3 = total_3 + banco_de_dados[i][1];
    }
  }
  printf("\nTIPO 1, QTD %d", total_1);
  printf("\nTIPO 2, QTD %d", total_2);
  printf("\nTIPO 3, QTD %d", total_3);
}

void get_chapa_ao_quadrado(int banco_de_dados[5][2]) {
  int i, total_1 = 0, total_2 = 0, total_3 = 0;
  float quadra_1 = 0, quadra_2 = 0, quadra_3 = 0;
  for (i = 0; i < 5; i++) {
    if (banco_de_dados[i][0] == 1) {
      total_1 = total_1 + banco_de_dados[i][1];
    }
    if (banco_de_dados[i][0] == 2) {
      total_2 = total_2 + banco_de_dados[i][1];
    }
    if (banco_de_dados[i][0] == 3) {
      total_3 = total_3 + banco_de_dados[i][1];
    }
  }
  quadra_1 = total_1 * 3 * 1.40;
  quadra_2 = total_2 * 2.5 * 0.8;
  quadra_3 = total_3 * 6 * 0.5;
  printf("\nTIPO 1, QTD %d, %.2f METROS QUADRADOS", total_1, quadra_1);
  printf("\nTIPO 2, QTD %d, %.2f METROS QUADRADOS", total_2, quadra_2);
  printf("\nTIPO 3, QTD %d, %.2f METROS QUADRADOS", total_3, quadra_3);
  printf("\nTOTAL DE METROS QUADRADOS = %.2f", quadra_1 + quadra_2 + quadra_3);
}

void read_chapa(int banco_de_dados[5][2]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (banco_de_dados[i][0] != 0) {
      printf("\nCOD %d, TIPO %d, QTD %d", i, banco_de_dados[i][0],
             banco_de_dados[i][1]);
    }
  }
  printf("\n");
}

void delete_chapa(int banco_de_dados[5][2]) {
  int op_delete, loop_delete = 1;
  while (loop_delete) {
    read_chapa(banco_de_dados);
    printf("\nSelecione o COD do produto que deseja remover: ");
    scanf("%d", &op_delete);
    if (op_delete >= 0 && 5 > op_delete) {
      banco_de_dados[op_delete][0] = 0;
      banco_de_dados[op_delete][1] = 0;
      loop_delete = 0;
    }
  }
}
void get_chapas(int banco_de_dados[5][2], int qtd_estoque) {
  if (qtd_estoque > 0) {
    int i, op_tipo, loop_get = 1, soma_chapas = 0;
    while (loop_get) {
      pr_tipo_chapa();
      scanf("%d", &op_tipo);
      if (op_tipo > 0 && op_tipo < 4) {
        for (i = 0; i < 5; i++) {
          if (banco_de_dados[i][0] == op_tipo) {
            soma_chapas = soma_chapas + banco_de_dados[i][1];
          }
        }
        if (soma_chapas != 0) {
          printf("\nTIPO %d, QTD TOTAL %d\n", op_tipo, soma_chapas);
          loop_get = 0;
        } else {
          printf("\n >> Sem chapas desse tipo no estoque. << \n");
          loop_get = 0;
        }
      } else {
        printf("\n >> Tipo Invalido de chapa. << \n");
      }
    }
  } else {
    printf("\n >> Sem dados para mostrar, estoque zerado. << \n");
  }
}
void empty_chapas(int banco_de_dados[5][2], int qtd_estoque) {
  if (qtd_estoque > 0) {
    int i, j;

    for (i = 1; i < 4; i++) {
      int contador = 0;
      for (j = 0; j < 5; j++) {
        if (banco_de_dados[j][0] != i) {
          contador++;
        }
      }
      if (contador == 5) {
        printf("\nTIPO %d, NÃO POSSUI EM ESTOQUE", i);
      }
    }

  } else {
    printf("\n >> Sem dados para mostrar, estoque zerado. << \n");
  }
}

void update_qtd_chapa(int banco_de_dados[5][2], int qtd_estoque) {
  int op_update, op_operacao, calcu, loop_update = 1;
  while (loop_update) {
    read_chapa(banco_de_dados);
    printf("\nSelecione o COD do produto que deseja atualizar a quantidade: ");
    scanf("%d", &op_update);
    if (op_update >= 0 && qtd_estoque > op_update &&
        banco_de_dados[op_update][0] != 0) {
      printf("\nDigite a operacao:\n1 - Soma\n2 - Subtração\n: ");
      scanf("%d", &op_operacao);
      printf("\nDigite o valor: ");
      scanf("%d", &calcu);
      if (calcu > 0) {
        switch (op_operacao) {
        case 1:
          banco_de_dados[op_update][1] = banco_de_dados[op_update][1] + calcu;
          printf("\nCOD %d ATUALIZADO: TIPO %d, QTD %d", op_update,
                 banco_de_dados[op_update][0], banco_de_dados[op_update][1]);
          loop_update = 0;

          break;
        case 2:
          if (calcu < banco_de_dados[op_update][1]) {
            banco_de_dados[op_update][1] = banco_de_dados[op_update][1] - calcu;
            printf("\nCOD %d ATUALIZADO: TIPO %d, QTD %d", op_update,
                   banco_de_dados[op_update][0], banco_de_dados[op_update][1]);
            loop_update = 0;
          } else {
            printf("\n >> Valor deve ser menor que a quantidade ja estocada << "
                   "\n");
          }
          break;
        default:
          printf("\n >> Operacao invalida << \n");
        }

      } else {
        printf("\n >> Valor deve ser maior que zero << \n");
      }
    } else {
      printf("\n >> Produto não existente << \n");
    }
  }
}

void delete_chapa_zera(int banco_de_dados[5][2]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (banco_de_dados[i][1] == 0) {
      banco_de_dados[i][0] = 0;
      banco_de_dados[i][1] = 0;
    }
  }
}

int main() {
  system("@cls||clear");
  int banco_de_dados[5][2], i, j, qtd_estoque = 0;
  // codigo, Tipo, Quantidade.

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      banco_de_dados[i][j] = 0;
    }
  }
  // zera todas as posicoes
  int menu_loop = 1;
  printf("\n---------Seja bem vindo(a) ao sistema---------\n\n");

  while (menu_loop) {
    delete_chapa_zera(banco_de_dados);
    int menu_opcao;
    printf("\nDigite a operacao desejada:\n\n1- Cadastrar metal\n2- Remover "
           "metal\n3- Quantidade de chapas estocadas por tipo\n4- Tipos de "
           "chapas de metal sem estoque\n5- Quantidade total de "
           "chapas de metal estocadas\n6- Quantidade em metros quadrados "
           "estocados\n7- Alteração da Quantidade de chapas estocadas\n8- "
           "Fim\n: ");
    scanf("%d", &menu_opcao);
    switch (menu_opcao) {
    case -1:
      printf("%d", qtd_estoque);
      break;
    case 0:
      read_chapa(banco_de_dados);
      break;
    case 1:
      if (qtd_estoque < 5) {
        create_chapa(banco_de_dados, qtd_estoque);
        qtd_estoque++;
      } else {
        printf("\n >> Quantidade máxima de chapa alcançada << \n");
      }
      break;
    case 2:
      if (qtd_estoque > 0) {
        delete_chapa(banco_de_dados);
        qtd_estoque--;
      } else {
        printf("\n >> Operacao invalida, produto nao encontrado. << \n");
      }
      break;
    case 3:
      get_chapas(banco_de_dados, qtd_estoque);
      break;
    case 4:
      empty_chapas(banco_de_dados, qtd_estoque);
      break;
    case 5:
      read_by_chapas(banco_de_dados);
      break;
    case 6:
      get_chapa_ao_quadrado(banco_de_dados);
      break;
    case 7:
      update_qtd_chapa(banco_de_dados, qtd_estoque);
      break;
    case 8:
      menu_loop = 0;
      break;
    default:
      printf("\n >> Opcao invalida, digite novamente << \n");
    }
  }
}
