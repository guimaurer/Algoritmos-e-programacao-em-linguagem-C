/******************************************************************************

Exercicio de While infinito

*******************************************************************************/

#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  while (num != 0) {
    printf("\n %d", num);
    num--;
  }
    
}