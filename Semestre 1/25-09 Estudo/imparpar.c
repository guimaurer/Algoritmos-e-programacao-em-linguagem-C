#include <stdio.h>

int main() {
  int verifica_num;

  printf("Digite um número: ");
  scanf("%d", &verifica_num);

  if (verifica_num % 2 == 0) {
    printf("Número é par");
  } else {
    printf("Número é impar");
  }
}