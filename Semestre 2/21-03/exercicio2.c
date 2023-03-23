/*

MDC recursivo. Recebe dois valores inteiros e devolve o MDC deles.

mdc(x,y) = y, se x >= y e x mod y = 0
mdc(x,y) = mdc(x,y), se x < y
mdc(x,y) = mdc(y, x mod y), caso contrário.

Escreva uma função recursiva que leia um número. Caso negativo, end. Caso positivo,
imprime o número e chama recursivamente a si mesma.


*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
  if(a%b == 0){ //se a é divisível por b
    return b; //retorna b como resultado
  }
  else{ //senão
    return mdc(b,a%b); //chama a função novamente com os parâmetros trocados e usando o resto da divisão
  }
}

int main() {
  system("@cls||clear");

  int x, y;
  printf("\n Digite um primeiro numero: ");
  scanf("%d", &x);
  printf("\n Digite o segundo numero: ");
  scanf("%d", &y);
  
  printf("%d", mdc(x, y));
}