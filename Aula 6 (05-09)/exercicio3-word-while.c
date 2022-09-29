/******************************************************************************
Especificaçâo: Elabore um programa que implemente operações basicas de uma
calculadora. Porêm, a operação escolhida pelo usuário, após a apresentação de um
menu. As operações matemáticas são realizadas sobre 2 números inteiros. Menu 1 -
soma   2 - subtração   3 - Multiplicação   4 - Divisão    5 - Potência



****INCOMPLETA****

*******************************************************************************/

#include <math.h>
#include <stdio.h>

int main() {
  int ope, num1, num2, valid;
  valid = 1;
  while (valid) {
    printf("\nSelecione a operação");
    printf(
        "\n1 - soma   \n2 - subtração   \n3 - Multiplicação   \n4 - Divisão   "
        " \n5 - Potência\n6 - Fim");
    scanf("%d", &ope);

    if (ope != 0 && ope < 6) {
      printf("\nDigite o valor da var1: ");
      scanf("%d", &num1);

      printf("\nDigite o valor da var2: ");
      scanf("%d", &num2);

      switch (ope) {
      case 1:
        printf("\nSoma é igual a %d", num1 + num2);
        return num1 + num2;
        break;
      case 2:
        printf("\nSubtração é igual a %d", num1 - num2);
        return num1 - num2;
        break;
      case 3:
        printf("\nMultiplicação é igual a %d", num1 * num2);
        return num1 * num2;
        break;
      case 4:
        printf("\nDivisão é igual a %f", (float)num1 / (float)num2);
        return (float)num1 / (float)num2;
        break;
      case 5:
        printf("\nPotencia é igual a %lf", pow((double)num1, (double)num2));
        return pow((double)num1, (double)num2);
        break;
      default:
      
      }
    } 
  }
}