/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int metros, centi, mili;
    printf("\nDigite o valor em metros: ");

    scanf ("%d", &metros);

    centi = metros * 100;
    mili = metros * 1000;

    printf("\nValor %d em metros, é %d em centímetros e %d em milímetros \n", metros, centi, mili );

    return 0;
}
