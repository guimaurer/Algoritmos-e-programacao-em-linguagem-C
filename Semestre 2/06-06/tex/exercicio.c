#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char enterValidDate() {
  char date[9];

  while (1) {
    printf("Digite uma data no formato DD-MM-YY: ");
    scanf("%8s", date);

    int valido = 1;

    if (strlen(date) != 8) {
      valido = 0;
    } else {
      
      int dia, mes, ano;
      sscanf(date, "%2d-%2d-%2d", &dia, &mes, &ano);

      
      if (ano < 0 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        valido = 0;
      }

      
      if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        valido = 0;
      }

      
      if (mes == 2 && dia > 28) {
        valido = 0;
      }
    }

    if (valido) {
      return date;  
    } else {
      printf("Data inválida. Digite novamente.\n");
    }
  }
}

struct cliente {
  char nome[30];
  char cpf[12];
  char rua_e_numero[30];
  char bairro[30];
  char dataNascimento[11];
  char dataUltimaCompra[11];
  float valorAcumuladoCompras;
};

void cadastrarCliente() {
  struct cliente novoCliente;
  printf("Digite o nome do cliente: ");
  scanf("%s", novoCliente.nome);
  printf("Digite o CPF do cliente (000.000.000-00): ");
  scanf("%s", novoCliente.cpf);
  printf("Digite o endereço do cliente (Rua e Número): ");
  scanf("%s", novoCliente.rua_e_numero);
  printf("Digite o bairro do cliente: ");
  scanf("%s", novoCliente.bairro);
  printf("Data de nascimento do cliente, ");
  novoCliente.dataNascimento = enterValidDate();
  printf("Data da última compra do cliente, ");
  novoCliente.dataUltimaCompra = enterValidDate();
  printf("Digite o valor acumulado de compras do cliente: R$");
  scanf("%f", &novoCliente.valorAcumuladoCompras);

  FILE *arquivo = fopen("banco.txt", "a");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
  } else {
    fprintf(arquivo, "%s;%s;%s;%s;%s;%s;%.2f\n", novoCliente.nome,
            novoCliente.cpf, novoCliente.rua_e_numero, novoCliente.bairro,
            novoCliente.dataNascimento, novoCliente.dataUltimaCompra,
            novoCliente.valorAcumuladoCompras);

    fclose(arquivo);
  }
}




void list_by_data(char data) {
  struct cliente *c;
  c =  (struct cliente*) malloc (sizeof(struct cliente));
  
  FILE* arquivo = fopen("banco.txt", "r");
  if (arquivo == NULL) {
    printf("\nErro, não foi possível abrir o arquivo.\n");
  } else {
    int cont = 0;
    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%f\n",
                  c[cont].nome, c[cont].cpf, c[cont].rua_e_numero, c[cont].bairro, c[cont].dataNascimento,
                  c[cont].dataUltimaCompra, &c[cont].valorAcumuladoCompras) != EOF) {
                    cont++;
    }
    int empty_data = 0;
    for(int i = cont; i >= 0; i--){
        if (strcmp(c[i].dataUltimaCompra, data) == 0) {
        empty_data = 1;
        printf("\nCPF: %s\n", c[i].cpf);
        printf("Nome: %s\n", c[i].nome);
        printf("Endereço: %s\n", c[i].rua_e_numero);
        i = 0;
        }
    }
    if(empty_data == 0){
         printf("\n\nNenhum cliente nesta data\n\n");
    }
    fclose(arquivo);
  }

  free(c);
}


void cont_customers_live(char* bairro) {
  struct cliente c;
  int cont = 0;
  FILE* arquivo = fopen("banco.txt", "r");
  if (arquivo == NULL) {
    printf("Erro, não foi possível abrir o arquivo.\n");
  } else {
    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%f\n",
                  c.nome, c.cpf, c.rua_e_numero, c.bairro, c.dataNascimento,
                  c.dataUltimaCompra, &c.valorAcumuladoCompras) != EOF) {
      if (strcmp(c.bairro, bairro) == 0) {
        cont++;
      }
    }
    printf("\n\nExiste um total de %d clientes que moram no bairro %s\n\n", cont, bairro);
    fclose(arquivo);
  }
}

void list_customers_plus() {
  struct cliente c;
  char name[30] = "";
  float maior = 0;
  
  FILE* arquivo = fopen("banco.txt", "r");
  if (arquivo == NULL) {
    printf("Erro, não foi possível abrir o arquivo.\n");
  } else {
    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%f\n",
                  c.nome, c.cpf, c.rua_e_numero, c.bairro, c.dataNascimento,
                  c.dataUltimaCompra, &c.valorAcumuladoCompras) != EOF) {
      if (c.valorAcumuladoCompras > maior) {
        strcpy(name, c.nome);
        maior = c.valorAcumuladoCompras;
      }
    }
    printf("\n\nO cliente %s teve o maior valor acumulado, total de R$%.2f\n\n", name, maior);
    fclose(arquivo);
  }
}







int main() {
  system("@cls||clear");
  int menu = 1;

  while (menu != 5) {

    printf("1 - Cadastrar cliente\n");
    printf(
        "2 - Listar cliente que fez a última compra em uma data informada\n");
    printf("3 - Contar quantos clientes moram em um bairro informado\n");
    printf("4 - Listar o nome do cliente que tem o maior valor acumulado de "
           "compras\n");
    printf("5 - Fim\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &menu);
    switch (menu) {
    case 1:
      system("@cls||clear");
      cadastrarCliente();
      break;
    case 2:
        list_by_data(12/02/1998);
      break;
    case 3:
    char bairroInformado[50];
    printf("Informe o nome do bairro: ");
    scanf("%s", bairroInformado);
    cont_customers_live(bairroInformado);
    break;
    case 4:
        list_customers_plus();
      break;
    case 5:
      break;
    case 6:

      break;
    default:
      printf("Opcao invalida. Tente novamente.\n");
      break;
    }
  }
}
