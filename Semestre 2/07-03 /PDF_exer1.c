/******************************************************************************

1) Dados dois vetores x e y, ambos com n elementos,
determinar o produto escalar desses vetores.
OBS.: o produto escalar é soma de todos os produtos dos
números de mesma posição. Por exemplo, se n = 4:
• Vetor X: 0, 3, 5, 6
• Vetor Y: 2, 4, 9, 8
• Produto escalar X · Y = (0 x 2) + (3 x 4) + (5 x 9) + (6 x 8)
= 105

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
  system("@cls||clear");
  int tam, i, result=0;
  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &tam);
  int vet[2][tam];
  for (i = 0; i < tam; i++) {
      printf("\nDigite o valor para X: ");
      scanf("%d", &vet[0][i]);
      printf("\nDigite o valor para Y: ");
      scanf("%d", &vet[1][i]);
  }
  for (i=0; i<tam; i++) {
  result = result + vet[0][i]*vet[1][i];
  }
  printf("\nProduto escalar: %d", result);
}
