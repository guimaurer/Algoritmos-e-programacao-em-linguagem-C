/*

Um fabricante de canetas deseja controlar os valores de seus produtos. A sua
fábrica produz 5 tipos de canetas diferentes e elas possuem como código 0,1,2,3
e 4 por isso sua implementação deve ser utilizando um vetor dinamico para
armazenar o valor de cada caneta. No seu programa crie uma função que
receba por parâmetro o vetor de valores das canetas (float de 5 posições) 
e os endereços de duas variáveis inteiras (que podemos chamar de min e
max). Ao passar essas variáveis para a função seu programa deverá analisar qual
é o maior e o menor valor de caneta armazenado no vetor e depositar esses
valores nas variáveis do parâmetro. É claro que para testar tudo isso você vai
precisar criar uma função main que armazene os valores das canetas no vetor,
chamar a função que descobre o valor mínimo e máximo e imprimir o valor mínimo e
máximo após a chamada da função. Além da informação do valor mínimo e máximo
informe o código da caneta (que possui o valor mínimo e aquela que possui o
valor máximo).


*/

#include <stdio.h>
#include <stdlib.h>

void min_max(float* valores, int* tipos, int num_canetas, int* min_tipo, int* max_tipo) {
    float min_valor = valores[0];
    float max_valor = valores[0];
    *min_tipo = tipos[0];
    *max_tipo = tipos[0];

    for (int i = 1; i < num_canetas; i++) {
        if (valores[i] < min_valor) {
            min_valor = valores[i];
            *min_tipo = tipos[i];
        }
        if (valores[i] > max_valor) {
            max_valor = valores[i];
            *max_tipo = tipos[i];
        }
    }
    printf("Valor mínimo: %.2f (Código da caneta: %d)\n", min_valor, *min_tipo);
    printf("Valor máximo: %.2f (Código da caneta: %d)\n", max_valor, *max_tipo);
}

int main() {
    float* valores;
    int* tipos;
    int num_canetas;
    int min_tipo, max_tipo;

    printf("Informe o número de canetas: ");
    scanf("%d", &num_canetas);

    valores = (float*)malloc(num_canetas * sizeof(float));
    tipos = (int*)malloc(num_canetas * sizeof(int));

    for (int i = 0; i < num_canetas; i++) {
        printf("Digite o tipo da caneta %d (0 a 4): ", i+1);
        scanf("%d", &tipos[i]);
        printf("Digite o valor da caneta %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    min_max(valores, tipos, num_canetas, &min_tipo, &max_tipo);
    free(valores);
    free(tipos);

    return 0;
}