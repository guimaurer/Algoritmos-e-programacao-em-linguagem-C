/*
1)	O programa abaixo lê dois dados inteiros recebidos pelo teclado e deveria imprimi-los
em ordem crescente. Explique por que o programa não funciona corretamente e introduza as
correções mínimas necessárias para torná-lo operante.
 
*/



#include <stdio.h>
int main()
{
    int dado1, dado2;
    void troca(int *, int *);
    printf("Entre com dois dados inteiros: ");
    scanf("%d %d",&dado1, &dado2);
    troca(&dado1, &dado2);
    printf("Dados em ordem crescente: %d \t %d \n", dado1, dado2);
    return 0;
}
void troca(int *dado1, int *dado2)
{
    int temp;
    if(*dado1 > *dado2)
    {
        temp = *dado1;
        *dado1 = *dado2;
        *dado2 = temp;
    }
}
