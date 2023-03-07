#include <stdio.h>
#include <stdlib.h>

int main() {
  float estoque[5][3], lucro;
  // qtd, venda, compra
  int i;

  for (i = 0; i < 5; i++) {
    int estoq = 1, venda = 1, compra = 1;
    printf("\nCadastrar produto %d", i + 1);
    while (estoq) {
      printf("\nQuantidade no estoque: ");
      scanf("%f", &estoque[i][0]);
      if (estoque[i][0] >= 0) {
        estoq = 0;
      } else {
        printf("\n*** Quantidade invalida ***\n");
      }
    }
    while (venda) {
      printf("\nQual o preco de venda: ");
      scanf("%f", &estoque[i][1]);
      if (estoque[i][1] >= 0) {
        venda = 0;
      } else {
        printf("\n*** Preco de venda invalida ***\n");
      }
    }
    while (compra) {
      printf("\nQual o preco de compra: ");
      scanf("%f", &estoque[i][2]);
      if (estoque[i][2] >= 0) {
        compra = 0;
      } else {
        printf("\n*** Preco de compra invalida ***\n");
      }
    }
  }
  for (i = 0; i < 5; i++) {
    lucro = lucro + (estoque[i][0] * (estoque[i][1] - estoque[i][2]));
  }

  printf("\n*** Resultados ***\n");
  printf("\nLucro total de: R$%f", lucro);
  printf("\n\nAbaixo, produtos abaixo de 10 itens");

  for (i = 0; i < 5; i++) {
    if (estoque[i][0] < 10) {
      printf("\nCODIGO %d abaixo de 10 itens", i + 1);
    }
  }

  printf("\n\nAbaixo, produtos com lucro superior ao preco de compra");
  for (i = 0; i < 5; i++) {
    if (estoque[i][0] * (estoque[i][1] - estoque[i][2]) > estoque[i][2]) {
      printf("\nProduto CODIGO %d com lucro maior que preco de compra", i + 1);
    }
  }
   printf("\n");
}