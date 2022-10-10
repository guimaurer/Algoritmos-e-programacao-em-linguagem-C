/******************************************************************************

Usando funções em C

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[60]="Meu programa em c e mais ou menos";
    char s[2] = " ";
    char *tam;

    tam = strtok(a, s);

    printf("Length of string b = %s \n", tam);

    return 0;
}