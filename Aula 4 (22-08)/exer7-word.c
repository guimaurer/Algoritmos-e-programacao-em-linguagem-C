/******************************************************************************

3)	Escreva um programa que lê 3 valores e imprima o valor do maior.

*******************************************************************************/

#include <stdio.h>

int main()
{   int val1, val2, val3;
    


    printf("\nDigite o valor 1 : ");
    scanf ("%d", &val1);

    printf("\nDigite o valor 2 : ");
    scanf ("%d", &val2);

    printf("\nDigite o valor 3 : ");
    scanf ("%d", &val3);

    if(val1 > val2 && val1 > val3 ){
        printf("\nO Valor maior e = %d", val1);
    } else if(val2 > val1 && val2 > val3) {
        printf("\nO Valor maior e = %d", val2);
    } else {
        printf("\nO Valor maior e = %d", val3);
    }

}
