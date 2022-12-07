#include <locale.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "");
  int gabarito[5][3];
  char questoes_alunos[5];
  int matricula = 1, qtd_aluno = 0, qtd_branco_questoes = 0;;

  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      gabarito[i][j] = 0;
    }
  }
  printf("\n*** Primeiro, Informe o Gabarito ***\n");
  for (i = 0; i < 5; i++) {
    int a = 1, b = 1, c = 1;
    printf("\nQuestão %d: \n", i + 1);
    while (a) {
      printf("\nAlternativa A:\n0 - nao\n1 - Sim\n: ");
      scanf("%d", &gabarito[i][0]);
      if (gabarito[i][0] == 0 || gabarito[i][0] == 1) {
        a = 0;
      } else {
        printf("\n*** Digito invalido ***\n");
      }
    }
    if (gabarito[i][0] == 0) {
      while (b) {
        printf("\nAlternativa B:\n0 - nao\n1 - Sim\n: ");
        scanf("%d", &gabarito[i][1]);
        if (gabarito[i][1] == 0 || gabarito[i][1] == 1) {
          b = 0;
        } else {
          printf("\n*** Digito invalido ***\n");
        }
      }
      if (gabarito[i][1] == 0) {
        while (c) {
          printf("\nAlternativa C:\n0 - nao\n1 - Sim\n: ");
          scanf("%d", &gabarito[i][2]);
          if (gabarito[i][2] == 0 || gabarito[i][2] == 1) {
            c = 0;
          } else {
            printf("\n*** Digito invalido ***\n");
          }
        }
      }
    }
  }
  system("@cls||clear");
  printf("\n*** Gabarito pronto, aguardando Aluno ***\n");
  while (matricula) {
    printf("\nDigite o numero da matricula\n: ");
    scanf("%d", &matricula);
    if (matricula > 0) {
      qtd_aluno++;
      for (i = 0; i < 5; i++) {
        int qtd_acertos = 0;
        int a = 1, b = 1, c = 1;
        int alt_a =0, alt_b=0, alt_c=0;
        printf("\nQuestão %d: \n", i + 1);
        while (a) {
          printf("\nAlternativa A correta?:\n0 - Nao\n1 - Sim\n2 - Pular\n: ");
          scanf("%d", &alt_a);
          if (alt_a >= 0 && alt_a <= 2) {
            a = 0;
          } else {
            printf("\n*** Digito invalido ***\n");
          }
        }
        while (b) {
          printf("\nAlternativa B correta?:\n0 - Nao\n1 - Sim\n2 - Pular\n: ");
          scanf("%d", &alt_b);
          if (alt_b >= 0 && alt_b <= 2) {
            b = 0;
          } else {
            printf("\n*** Digito invalido ***\n");
          }
        }
        while (c) {
          printf("\nAlternativa C correta?:\n0 - Nao\n1 - Sim\n2 - Pular\n: ");
          scanf("%d", &alt_c);
          if (alt_c >= 0 && alt_c <= 2) {
            c = 0;
          } else {
            printf("\n*** Digito invalido ***\n");
          }
        }
        if (alt_a + alt_b + alt_c >= 2) {
          questoes_alunos[i] = 'R';
        }
        if (alt_a + alt_b + alt_c == 0) {
          questoes_alunos[i] = 'Z';
          qtd_branco_questoes++;
        }
        if (alt_a + alt_b + alt_c == 1) {
          if (alt_a == 1) {
            questoes_alunos[i] = 'A';
            if (gabarito[i][1] == 1) {
            //statements
            }
          }
          if (alt_b == 1) {
            questoes_alunos[i] = 'B';
          }
          if (alt_c == 1) {
            questoes_alunos[i] = 'C';
          }
        }
      }
    }
    for (i=0; i<5; i++) {
    printf("Questao %d = %c", i, questoes_alunos[i]);
    }
  }
}