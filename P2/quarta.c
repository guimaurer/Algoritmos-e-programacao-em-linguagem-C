/******************************************************************************



*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int media_idade_solteiros(int matriz[100][3], int cont_pessoas) {
  int i, cont_solteiros = 0, qtd_idade_solteiros = 0;
  for (i = 0; i < cont_pessoas; i++) {
    if (matriz[i][3] == 1) {
      cont_solteiros++;
      qtd_idade_solteiros = qtd_idade_solteiros + matriz[i][0];
    }
  }
  return qtd_idade_solteiros / cont_solteiros;
}

int entrevistados_casados_n_maiteiga(int matriz[100][3], int cont_pessoas) {
  int i, cont_casados = 0;
  for (i = 0; i < cont_pessoas; i++) {
    if (matriz[i][2] == 2 && matriz[i][1] == 2) {
      cont_casados++;
    }
  }
  return cont_casados;
}

void steriscos() {
  printf("\n******************\n");
  printf("\n******************\n");
}

int idade_mais_novo(int matriz[100][3], int cont_pessoas) {
  int i, j, cont_idade = 0;
  for (i = 0; i < cont_pessoas; i++) {
    for (j = 0; j < cont_pessoas; j++) {
      if (matriz[i][0] < matriz[j][0]) {
        cont_idade++;
      }
      if (cont_idade == cont_pessoas) {
        return matriz[i][0];
      }
    }
  }
}

int main() {
  int banco[100][3], cont_pessoas = 0;
  // 0 idade
  // 1 Consome mantega, 1 sim, 2 não
  // 2 estado, Solteiro 1, casado 2

  int consome, idade = 1, estado;
  

  while (idade) {
    int opt_conso = 1, opt_estado = 1;
    printf("\nQual a idade: ");
    scanf("%d", &idade);
    if (idade > 0 || idade != 0) {
      banco[cont_pessoas][0] = idade;
      while (opt_conso) {
        printf("\nConsome Manteiga:\n1 - Sim\n2 - Nao\n: ");
        scanf("%d", &consome);
        if (consome > 0 && consome < 3) {
          opt_conso = 0;
          banco[cont_pessoas][1] = consome;
        } else {
          printf("\n*** Erro: numero invalido ***\n");
        }
      }
      while (opt_estado) {
        printf("\nEstado Civil:\n1 - Solteiro\n2 - Casado\n: ");
        scanf("%d", &estado);
        if (estado > 0 && estado < 3) {
          opt_estado = 0;
          banco[cont_pessoas][2] = estado;
        } else {
          printf("\n*** Erro: numero invalido ***\n");
        }
      }

      cont_pessoas++;
    } else if (idade < 0) {
      printf("\n*** Erro: Idade menor que zero ***\n");
    }
  }
  printf("\n******************\n");
  printf("\n A idade no mais novo: %d anos",idade_mais_novo(banco, cont_pessoas));
  steriscos();
  printf("\n Quantdade de entrevistados casados que não comem manteiga: %d Casados",
         entrevistados_casados_n_maiteiga(banco, cont_pessoas));
  steriscos();
  printf("\n Media de idade dos solteiros: %d anos",
         media_idade_solteiros(banco, cont_pessoas));
  printf("\n******************\n");
}