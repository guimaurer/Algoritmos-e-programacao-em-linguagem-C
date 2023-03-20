#include <stdio.h>

void troca(int *, int *);
int main()
{
    int dado1, dado2;
    
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
