/******************************************************************************

Atividades extras de funções

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void positive_true_false(int valor) {
  if (valor > 0) {
    printf("\n\n**** Valor Positivo ****");
  } else {
    printf("\n\n**** Valor Negativo ****");
  }
}

void value_null(int valor) {
  if (valor == 0) {
    printf("\n\n**** Valor Nulo ****");
  } else {
    printf("\n\n**** Valor nao nulo ****");
  }
}

void calc_delta(int a, int b, int c) {
  printf("\n%d", (b * b) - (4 * (a * c)));
}

int maior(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}
int menor(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

void maior_entre_3(int a, int b, int c) {
  if (maior(a, b) > maior(a, c)) {
    printf("\nO numero maior: %d", maior(a, b));
  } else {
    printf("\nO numero maior: %d", maior(a, c));
  }
}
void menor_entre_3(int a, int b, int c) {
  if (menor(a, b) < menor(a, c)) {
    printf("\nO numero menor: %d", menor(a, b));
  } else {
    printf("\nO numero menor: %d", menor(a, c));
  }
}


int main() {

  // positive_true_false(-8);
  // value_null(0);
  // calc_delta(1,3,8);

  maior_entre_3(9, 8, 1);
  menor_entre_3(9, 8, 1);
}