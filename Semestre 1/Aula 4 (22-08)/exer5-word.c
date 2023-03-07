/******************************************************************************

Laranjas custam R$ 0,30 cada se forem compradas menos do que uma dúzia, 
e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que 
leia o número de laranjas compradas, calcule e escreva o valor total 
da compra

*******************************************************************************/

#include <stdio.h>

int main()
{   int laranja_qtd;
    


    printf("\nDigite a quantidade de laranjas: ");
    scanf ("%d", &laranja_qtd);

    if(laranja_qtd < 12){
        printf("\n O valor ficá %.2f", laranja_qtd * 0.30);
    } else{
        printf("\n O valor ficá %.2f", laranja_qtd * 0.25);
    }

}
