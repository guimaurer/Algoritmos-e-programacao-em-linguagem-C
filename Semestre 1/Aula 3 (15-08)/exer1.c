/******************************************************************************

1) Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em centímetros e milímetros. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    float metros, centi, mili;
    printf("\nDigite o valor em metros: ");

    scanf ("%f", &metros);

    centi = metros * 100;
    mili = metros * 1000;

    printf("\nValor %.1f em centímetros é %.1f, e em milímetros é %.1f \n", metros, centi, mili );

    return 0;
}
