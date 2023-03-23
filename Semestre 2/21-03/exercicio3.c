/*
Escreva uma função recursiva que faça o seguinte: leia um número; se o número for
negativo, a função para; caso contrário, a função imprime o número e faz uma
chamada recursiva a si mesma. 
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