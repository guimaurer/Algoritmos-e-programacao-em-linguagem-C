/******************************************************************************

Exercícios usanto int e float 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    float num3;
    printf("\nDigite o valor para num1: ");
    scanf ("%d", &num1);

    printf("\nDigite o valor para num2: ");
    scanf ("%d", &num2);


    num3 = num1 / num2;


    printf("\nO resultado é  %f \n", num3 );

    return 0;
}
