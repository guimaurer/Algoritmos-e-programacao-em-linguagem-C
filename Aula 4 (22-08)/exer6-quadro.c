/******************************************************************************
Especificaçâo: Elabore um programa que implemente operações basicas de uma
calculadora. Porêm, a operação escolhida pelo usuário, após a apresentação de um
menu. As operações matemáticas são realizadas sobre 2 números inteiros. Menu 1 -
soma   2 - subtração   3 - Multiplicação   4 - Divisão    5 - Potência



****INCOMPLETA****

*******************************************************************************/


#include <stdio.h>
#include <math.h>

void menu(int op, int var1, int var2) {
  if (op == 1) {
    printf("\nSoma é igual a %d", var1 + var2);
  } else if (op == 2) {
    printf("\nSubtração é igual a %d", var1 - var2);
  } else if (op == 3) {
    printf("\nMultiplicação é igual a %d", var1 * var2);
  } else if (op == 4) {
    printf("\nDivisão é igual a %f", (float)var1 / (float)var2);
  } else if (op == 5) {
    printf("\nPotencia é igual a %d",  var1 * var2);
  } else if (op < 5 || op == 0) {
    printf("\n Digite uma operaçao válida");
  }


}

int main() {
  int ope, num1, num2;
  printf("\nSelecione a operação");
  printf("\n1 - soma   \n2 - subtração   \n3 - Multiplicação   \n4 - Divisão   "
         " \n5 - Potência");
  scanf("%d", &ope);

  printf("\nDigite o valor da var1");
  scanf("%d", &num1);

  printf("\nDigite o valor da var2");
  scanf("%d", &num2);

  menu(ope, num1, num2);
}
