/******************************************************************************

Crie um vetor de 16 posições de inteiros (receba os valores pelo teclado para
serem armazenados). Posteriormente, troque os 8 primeiros valores pelos 8
últimos e vice-e-versa. Escreva ao final o vetor obtido.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
  system("@cls||clear");
  int vet[16], i, var_aux;
  for (i = 0; i < 16; i++) {
    printf("\nDigite o valor para a posição %d: ", i + 1);
    scanf("%d", &vet[i]);
  }
  for (i = 0; i < 16; i++) {
    printf("%d, ", vet[i]);
  }

  for (i = 0; i < 16; i++) {
    var_aux = vet[15 - i];
    vet[15 - i] = vet[i];
    vet[i] = var_aux;
  }
    printf("\n");

  for (i = 0; i < 16; i++) {
    printf("%d, ", vet[i]);
  }
      printf("\n");

}