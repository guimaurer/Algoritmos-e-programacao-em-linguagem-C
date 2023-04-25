/*
 2) função recursiva em C que soma todos os itens de um vetor
*/

#include <stdio.h>

float soma_vetor(float* vetor, int tamanho) {
    if (tamanho == 0) {
        return 0.0;
    } else {
        return vetor[tamanho-1] + soma_vetor(vetor, tamanho - 1);
    }
}

int main() {
    float vetor[] = {1.1, 2.5, 3.7, 4.6, 5.3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    float resultado = soma_vetor(vetor, tamanho);
    printf("Soma dos elementos do vetor: %.2f\n", resultado);
    return 0;
}