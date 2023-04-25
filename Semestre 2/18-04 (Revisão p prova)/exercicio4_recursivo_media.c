/*
1)	Escreva um programa para calcular a média aritmética dos entre o número lido até 1.
 Utilizando recursividade para o cálculo. Exemplo se o número lido for 6, o cálculo será:
(6+5+4+3+2+1)/6.

*/

#include <stdio.h>

float media (int n){
    if (n==0) {
    return 0;
    } else {
    return (n + media(n-1))/n;
    }
}
int main(){
    float valor = media(5);
    printf("%f", valor);
}