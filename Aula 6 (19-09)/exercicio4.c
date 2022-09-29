/*
Uma criança possui um cofre com moedas e deseja saber se terá dinheiro sufuciente para comprar um
pacote de pirulito. para isso será desenvolvido um programa para informar se existe dinheiro 
suficiente no cofre. O seu programa deverá solicitar as seguintes informações:
- quantidade de moedas de 0,05
- quantidade de moedas de 0,10
- quantidade de moedas de 0,25
- quantidade de moedas de 0,50
- quantidade de moedas de 1,00

Solicite o valor do produto a ser comprado e informe via mensagem se existe dinheiro suficiente
ou se não existe moedas suficientes e quanto de valor está faltando.
*/


#include <stdio.h>
#include <math.h>

int main() {
    int zeroponto5, zeroponto10, zeroponto25, zeroponto50, umponto0;
    float total, val_produto;

    printf("\nInforme a quantidade de 0,05: ");
    scanf("%d", &zeroponto5);

    printf("\nInforme a quantidade de 0,10: ");
    scanf("%d", &zeroponto10);

    printf("\nInforme a quantidade de 0,25: ");
    scanf("%d", &zeroponto25);

    printf("\nInforme a quantidade de 0,50: ");
    scanf("%d", &zeroponto50);

    printf("\nInforme a quantidade de 1,00: ");
    scanf("%d", &umponto0);

    total = (zeroponto5 * 0.05) + (zeroponto10 * 0.10) + (zeroponto25 * 0.25)  + (zeroponto50 * 0.50) + (umponto0);

    printf("\nO total do seu porquinho é %.2f\n\n", total);

    printf("\nDigite o valor do produto que deseja comprar: ");
    scanf("%f", &val_produto);

    if (val_produto - total <= 0) {
        printf("\nVocê vai conseguir comprar e vai sobrar %.2f", val_produto - total );
    } else {
    printf("\nVocê não tem moedas suficientes para comprar, vai faltar R$%.2f", fabsf(val_produto - total) );
    }










}