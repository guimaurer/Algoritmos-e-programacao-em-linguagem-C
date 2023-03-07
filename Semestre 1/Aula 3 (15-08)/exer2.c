/******************************************************************************

2)  Fazer um programa em C que pergunte um valor em graus Fahrenheit e imprime o  correspondente em graus Celsius usando a fórmula:
      C=(f-32.0) * (5.0/9.0).

*******************************************************************************/

#include <stdio.h>

int main()
{
    float c, f;
    printf("\nDigite o valor em Graus Fahrenheit: ");

    scanf ("%f", &f);

    c = (f-32.0) * (5.0/9.0);
    

    printf("\nValor %.1f em Fahrenheit é %.1f e em Celsius\n", f, c);

    return 0;
}
