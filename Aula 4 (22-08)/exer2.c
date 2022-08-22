/******************************************************************************


*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nDigite o valor para num1: ");
    scanf ("%d", &num1);

    num2 = num1;

    printf("\nvalor para 5 * num1++: %d", 5 * num1++);



    printf("\nvalor para 5* ++num1: %d", 5* ++num2);


    return 0;
}
