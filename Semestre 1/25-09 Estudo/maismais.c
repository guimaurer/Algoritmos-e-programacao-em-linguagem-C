#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nDigite o valor para num1: ");
    scanf ("%d", &num1);

    num2 = num1;

    printf("\nvalor1 de entrada %d", num1++);
    printf("\nDepois da entrada %d", num1);

     printf("\n\n\n");



    printf("\nvalor2 de entrada %d", ++num2);
    printf("\nDepois da entrada %d\n", num2);

}