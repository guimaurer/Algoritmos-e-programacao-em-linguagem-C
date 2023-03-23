/*
Aqui pode ser o texto do exercicio
*/

#include <math.h>   //usar funções de matematica
#include <stdio.h>  //Printar e usar teclado
#include <string.h> //usar funções para trabalhar com string

int main() { 
    int var1; 
    printf("Escreva um numero: ");
    scanf("%d", &var1);


  if (var1 % 2 == 0) {
    printf("Número é par");
  } else {
    printf("Número é impar");
  }
}
