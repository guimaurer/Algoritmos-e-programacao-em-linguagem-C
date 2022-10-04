#include <stdio.h>

int main() {
  int i, j, n;
  printf("\nDigite um número impar para o tamanho do losango: ");
  scanf("%d", &n);

  if (n % 2 != 0) {

    for (i = 1; i <= n; i++) { /* Esse for vai até o tamanho do losango*/
      for (j = 1; j <= n - i; j++) { 
        /* Esse for vai imprimir espaço do tamanho do lasango menos a quantidade
         do for de cima, ou seja decrescente*/  
        printf(" ");
      }
      for (j = 1; j <= 2 * i - 1; j++) { 
        /* Esse for vai imprimir asterisco na mesma linha de forma crescente,
         vai imprimir até 2 vezes o tamanho do for por fora menos 1 para dar impar */  
        printf("*");
      }
      printf("\n");
    }
    for (i = 1; i <= n; i++) { /* Esse for vai até o tamanho do losango*/

      for (j = n * 2; j - i * 2 >= 0; j--) {
        /* Esse for vai imprimir asterisco na mesma linha do tamanho do losango até chegar em zero, ou seja decrescente,
         vai imprimir até 2 vezes o tamanho do for por fora menos 1 para dar impar */ 
        printf("*");
      }
      printf("\n");

      for (j = 0; j <= i-1; j++) {
        /* Esse for vai imprimir espaço de forma crecente apenas no segundo loop até o tamanho do tamanho do lasangulo */
        printf(" ");
      }
    }
  } else {
    printf("Número é par");
  }
}