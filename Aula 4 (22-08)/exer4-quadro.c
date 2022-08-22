/******************************************************************************
Especificaçâo: Ler 2 numeros inteiros e fazer a soma, porém o num1 deve ter 
valores de 1 até 5 e num2 deve ser menor que 10

*******************************************************************************/

#include <stdio.h>

int main() {
  int num1, num2;
  printf("\nDigite o valor para num1: ");
  scanf("%d", &num1);

  if (num1 >= 1 && num1 <= 5) {
    printf("\nDigite o valor para num2: ");
    scanf("%d", &num2);
    if (num2 > 10) {
      printf("\nSoma é igual a %d", num1 + num2);
    } else {
      printf("\nPara somar, o valor de num2 deve ser maior que 10");
    }
  } else {
    printf("Valor num1 náo é entre 1 e 5");
  }
}
