/*

Escreva uma função recursiva, potencial(x,y) que sevolva x elevado a potência
potencia Y

*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
    if (x == 1) {
    return y; 
    }

    return potencia(x-1, y+=y); 
}

int main() {
  system("@cls||clear");

  int x, y;
  printf("\n Digite um numero para o expoente: ");
  scanf("%d", &x);
  printf("\n Digite o numero para base: ");
  scanf("%d", &y);
  
  printf("%d", potencia(x, y));
}