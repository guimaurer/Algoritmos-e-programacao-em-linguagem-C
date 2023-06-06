#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *pont_arq;
  char frase[50];
  int i;
  int tamanho;
  
  pont_arq = fopen("arquivo1.txt","w");
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);
  }
  
  printf("Digite a frase a ser gravada no arquivo:");
  gets(frase);
  
  //verificando a quantidade de caracteres da string frase
  tamanho=strlen(frase);
  
  //gravando caracter por caracter
  for(i=0; i < tamanho; i++)
  {
    fputc(frase[i], pont_arq);    
  }
  
  fclose(pont_arq);
  return 0;
}