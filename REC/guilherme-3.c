#include <stdio.h>
#include <stdlib.h>

float altura_pri() {
  float altura = 1;
  while (altura) {
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    if (altura >= 0) {
      return altura;
    } else {
      printf("\n*** Altura invalida ***\n");
    }
  }
}

float calc_media(int qtd_pessoas, float som_media) {
  if (qtd_pessoas == 0) {
    printf("\n*** Sem dados para calcular media ***");
    return 0;
  }
  return som_media / qtd_pessoas;
}
int main() {
  float soma_altura, altura = 1, maior_altura = 0, menor_altura = 100;
  int qtd_pessoas = 0, qtd_pessoas_acima_de150 = 0;

  while (altura) {
    altura = altura_pri();
    if (altura > 0) {
      qtd_pessoas++;
      soma_altura = soma_altura + altura;
      if (altura < 1.50) {
        qtd_pessoas_acima_de150++;
      }
      if (altura > maior_altura) {
        maior_altura = altura;
      }
      if (altura < menor_altura) {
        menor_altura = altura;
      }
    }
  }
  if (menor_altura == 100) {
    menor_altura = 0;
  }
  printf("\n*** Resultados ***\n");
  printf("\nValor da maior altura: %.2fM", maior_altura);
  printf("\nValor da menor altura: %.2fM", menor_altura);
  printf("\nMedia das alturas: %.2fM", calc_media(qtd_pessoas, soma_altura));
  printf("\nExistem %d pessoas abaixo de 1.50M de altura\n\n",
         qtd_pessoas_acima_de150);
}