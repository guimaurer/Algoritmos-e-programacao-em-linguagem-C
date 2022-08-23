/******************************************************************************

4)	Escreva um programa que lei 2 valores e informe se são iguais.

*******************************************************************************/

#include <stdio.h>

int main()
{   int val1, val2;
    


    printf("\nDigite o valor 1 : ");
    scanf ("%d", &val1);

    printf("\nDigite o valor 2 : ");
    scanf ("%d", &val2);

   

    if(val1 == val2){
        printf("\nOs valores são iguais");
    }  else {
        printf("\nOs valores não são iguais");
    }

}
