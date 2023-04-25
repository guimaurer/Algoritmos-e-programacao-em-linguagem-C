/*
1)	Elabore um programa que lê do teclado 2 valores inteiros no main e
posteriormente descreva uma função recursiva potenciaRec(x,y) que retorne o
valor de XY.  Observe as regras da potência e não utilize a função pow da
biblioteca math.h
*/

#include <stdio.h>

int potenciaRec(int x, int y) {
  if (y == 0) {
    return 1;
  } else {
    return x * potenciaRec(x, y - 1);
  }
}

int main() {
  int x, y;
  printf("\n Diga um numero para o expoente: ");
  scanf("%d", &x);
  printf("\n Diga um numero elevado: ");
  scanf("%d", &y);

  int resultado = potenciaRec(x, y);
  printf("%d elevado a %d é igual a %d\n", x, y, resultado);
  return 0;
}
