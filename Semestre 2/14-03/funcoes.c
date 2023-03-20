/******************************************************************************
Escreva o código de uma função que conte quantas ocorrências de um determinado
caractere existem em um string. Ela  recebe como entrada 2 parâmetros:

- um string de caracteres e
- o caractere a ser pesquisado.

Escreva um programa que use esta função


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtd_caractere(char texto[], char caractere) {
  int soma = 0, x;
  for (x = 0; x < strlen(texto); x++) {
    if (texto[x] == caractere) {
      soma = soma + 1;
    }
    return soma;
  }
}

int contaChar(char s[], char ch) {
  int i, cont = 0;
  for (i = 0; i < strlen(s); i++) {
    if (s[i] == ch) {
      cont = cont + 1;
    }
  }

  return cont;
}

int main() {
  system("@cls||clear");
  char texto[100], crh;

  printf("\n Informe uma string: ");
  gets(texto);
  printf("\nInforme o caractere a ser contado: \n");
  scanf("%c", &crh);

  printf("O número repete %d vezes", contaChar(texto, crh));
  printf("O número repete %d vezes", qtd_caractere(texto, crh));
}
