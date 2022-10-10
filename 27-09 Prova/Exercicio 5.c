#include <stdio.h>

int main() {
  int opcao_menu = 1, qtd_paciente = 0;
  while (opcao_menu) {
    printf("\nDigite a opão desejada: \n\n1-Agendar compromisso\n2-Informar "
           "quantidade\n3-Fim\n:");
    scanf("%d", &opcao_menu);

    switch (opcao_menu) {
    case 1:
      if (qtd_paciente < 6) {
        qtd_paciente++;
      } else {
        printf("\n\n**Agendamento não disponível**\n\n");
      }
      break;
    case 2:
      printf("\nVocê tem %d agendamentos para hoje\n", qtd_paciente);
      break;
    case 3:
    opcao_menu = 0;
    break;
    }
  }
}
