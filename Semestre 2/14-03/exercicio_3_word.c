/*

3)	Elabore um programa que leia um número e depois escreva uma função que
receba este valor inteiro lido como referência e retorne o resto da divisão
deste número por 10. Altere também o valor da variável passada por referência,
dividindo-a por 10.

*/

#include <stdio.h>

int calc_div(int *num) { 
    return *num % 10; 
}
void change_num(int *num) { 
    *num = *num / 10; 
}

int main() {
  int num;
  printf("\n Digite um numero: ");
  scanf("%d", &num);

  printf("\nO resto é: %d", calc_div(&num));

  change_num(&num);
  printf("\n%d", num);
}