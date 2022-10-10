#include <stdio.h>

int main() {
  int compra = 1, qtd_cliente = 0;
  float total_dia;

  while (compra) {
    int cliente = 1;
    float preco_sabao = 0, preco_alcool = 0, preco_sabo = 0,
          preco_esc_dente = 0, preco_amaciante = 0, total_cliente = 0;
    float uni_sabao = 0, uni_amaciante = 0;
    int uni_alcool = 0, uni_sabo = 0, uni_esc_dente = 0;
    while (cliente) {

      int menu_cliente;
      printf("\n\n Selecione os produtos que deseja inserir na compra\n\n1 - "
             "Sabão em Pó\n2 - Alcool\n3 - Sabonete\n4 - Escova de dente\n5 - "
             "Amaciante\n6 - Encerrar\n: ");
      scanf("%d", &menu_cliente);

      switch (menu_cliente) {
      case 1:
        printf("\n Digite o valor de Sabao: ");
        scanf("%f", &preco_sabao);
        printf("\n Digite a quantidade em KG: ");
        scanf("%f", &uni_sabao);
        if (uni_sabao < 0.2 || preco_sabao < 0) {
          printf("\n Dados Inválidos: Unidade de sabao menor que 200g ou preco "
                 "menor que zero");
          preco_sabao = 0;
          uni_sabao = 0;
        }
        break;
      case 2:
        printf("\n Digite o valor de Alcool: ");
        scanf("%f", &preco_alcool);
        printf("\n Digite a quantidade: ");
        scanf("%d", &uni_alcool);
        if (uni_alcool < 0 || preco_alcool < 0) {
          printf("\n Dados Inválidos: Unidade de Alcool menor que zero ou "
                 "preco menor que zero");
          preco_alcool = 0;
          uni_alcool = 0;
        }
        break;
      case 3:
        printf("\n Digite o valor de Sabonete: ");
        scanf("%f", &preco_sabo);
        printf("\n Digite a quantidade: ");
        scanf("%d", &uni_sabo);
        if (uni_sabo < 0 || preco_sabo < 0) {
          printf("\n Dados Inválidos: Unidade de Sabonete menor que zero ou "
                 "preco menor que zero");
          preco_sabo = 0;
          uni_sabo = 0;
        }
        break;
      case 4:
        printf("\n Digite o valor de Escova de Dente: ");
        scanf("%f", &preco_esc_dente);
        printf("\n Digite a quantidade: ");
        scanf("%d", &uni_esc_dente);
        if (uni_esc_dente < 0 || preco_esc_dente < 0) {
          printf("\n Dados Inválidos: Unidade de Escova de Dente menor que "
                 "zero ou preco menor que zero");
          preco_esc_dente = 0;
          uni_esc_dente = 0;
        }
        break;
      case 5:
        printf("\n Digite o valor de Amaciante: ");
        scanf("%f", &preco_amaciante);
        printf("\n Digite a quantidade em Litros: ");
        scanf("%f", &uni_amaciante);
        if (uni_amaciante < 0.5 || preco_amaciante < 0) {
          printf("\n Dados Inválidos: Unidade de Amaciante menor que 500ml ou "
                 "preco menor que zero");
          preco_amaciante = 0;
          uni_amaciante = 0;
        }
        break;
      case 6:
        cliente = 0;
        break;
      default:
        printf("\n Produto inválido, digite novamente ");
      }
    }

    printf("\n1 - Sabao em po, %.2f Unidades,por R$%.2f reais, total = R$%.2f",
           uni_sabao, preco_sabao, uni_sabao * preco_sabao);
    printf("\n2 - Alcool, %d Unidades,por R$%.2f reais, total = R$%.2f",
           uni_alcool, preco_alcool, uni_alcool * preco_alcool);
    printf("\n3 - Sabonete, %d Unidades,por R$%.2f reais, total = R$%.2f",
           uni_sabo, preco_sabo, uni_sabo * preco_sabo);
    printf(
        "\n4 - Escova de Dente, %d Unidades,por R$%.2f reais, total = R$%.2f",
        uni_esc_dente, preco_esc_dente, uni_esc_dente * preco_esc_dente);
    printf("\n5 - Amaciante, %.2f Unidades,por R$%.2f reais, total = R$%.2f",
           uni_amaciante, preco_amaciante, uni_amaciante * preco_amaciante);
    total_cliente = (preco_sabao * uni_sabao) + (preco_alcool * uni_alcool) +
                    (preco_sabo * uni_sabo) +
                    (preco_esc_dente * uni_esc_dente) +
                    (preco_amaciante * uni_amaciante);
    printf("\n TOTAL = R$%.2f", total_cliente);
    total_dia = total_dia + total_cliente;
    qtd_cliente++;
    int menu_compra = 1;
    while (menu_compra) {
      printf("\n\n1 - Proximo Cliente\n2 - Encerrar dia\n: ");
      scanf("%d", &menu_compra);
      switch (menu_compra) {
      case 1:
        menu_compra = 0;
        break;
      case 2:
        compra = 0;
        menu_compra = 0;
        break;
      default:
        printf("\n Inválido, digite novamente");
      }
    }
  }
  printf("\nNo dia de hoje você teve %d Clientes, \nTotal de R$%.2f reais em "
         "vendas,\nMédia de R$%.2f por cliente",
         qtd_cliente, total_dia, total_dia / qtd_cliente);
  printf("\n\n\n**** Fim ****");
}