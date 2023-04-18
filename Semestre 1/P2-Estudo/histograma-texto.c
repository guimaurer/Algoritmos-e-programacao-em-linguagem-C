/******************************************************************************

Solicitar um texto para o usuário de no máximo 1000 caracteries e criar um
histograma de letras que contem no texto.

*******************************************************************************/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main() {
  char alfabeto[28] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'A', 'I',
                       'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                       'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
  char texto_user[1001];
  int i, j, h;
  system("@cls||clear");
  printf(
      " \n**** Seja bem vindo ao histograma de texto ****\n\nDigite seu texto abaixo:\n");
  gets(texto_user);

  for (i = 0; i < strlen(texto_user); i++) {
    texto_user[i] = toupper(texto_user[i]);
  }

  for (i = 0; i < strlen(alfabeto); i++) {

    int contador = 0;
    for (j = 0; j < strlen(texto_user); j++) {
      if (texto_user[j] == alfabeto[i]) {
        contador++;
      }
    }
    printf("\nLetra %c : %d ", alfabeto[i], contador);
    for (h = 0; h < contador; h++) {
      printf("*");
    }
  }
       printf("\n\n*** FIM ***");
}