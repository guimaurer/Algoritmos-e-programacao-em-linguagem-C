/******************************************************************************

1

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void print_matriz(float matriz[5][3]) {
  int i, j;
  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("Animal %d: ", i + 1);
    for (j = 0; j < 3; j++) {
      printf("%f, ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main() {
  float animais[5][3];
  int qtd_animais = 0, animais_opt = 1, i;

  printf("\n*** Seja bem vindo ***");

  for (i = 0; i < 5; i++) {
    float peso = 0, preco = 0, preco_venda = 0, peso_opt = 1, preco_opt = 1;
    printf("\nCadastre o animal %d", i + 1);
    while (peso_opt) {
      printf("\nPeso: ");
      scanf("%f", &peso);
      if (peso > 0) {
        peso_opt = 0;
        while (preco_opt) {
          printf("Preco por KG: ");
          scanf("%f", &preco);
          if (preco >= 0) {
            preco_opt = 0;
            preco_venda = peso * preco;
            animais[i][0] = peso;
            animais[i][1] = preco;
            animais[i][2] = preco_venda;
          } else {
            printf("\n*** Erro, preco menor que zero ***\n");
          }
        }
      } else {
        printf("\n*** Erro, peso menor que zero ***\n");
      }
    }
  }

  print_matriz(animais);
}