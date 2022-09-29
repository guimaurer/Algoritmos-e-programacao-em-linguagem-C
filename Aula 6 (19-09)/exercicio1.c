/*
Elabore um programa que solicita o total gasto de um cliente de uma loja e
imprime as opções de pagamento. Solicita a opção desejada e imprime o valor
total das prestações (se houverem).
1-opção: a vista com 10% de desconto
2-opção: em duas vezes (preço de etiqueta)
3-opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de
R$ 100,00).
*/

#include <stdio.h>

int main() {
  int op_cliente;
  float val_compra;

  printf("\nQual o valor da compra? : ");
  scanf("%f", &val_compra);

  if (val_compra > 0) {

    printf("\nSelecione o tipo de usuário :"
           "\n 1-opção: a vista com 10%% de desconto"
           "\n 2-opção: em duas vezes (preço de etiqueta)"
           "\n 3-opção: de 3 até 10 vezes com 3%% de juros ao mês\n");
    scanf("%d", &op_cliente);

    switch (op_cliente) {
    case 1:
      printf("\nTotal da compra é R$%.2f", val_compra * 0.90);
      break;

    case 2:
      printf("\nValor ficou com duas parcelas de R$%.2f", val_compra / 2);
      break;

    case 3:
      printf("\nValor ficou em 3 parcelas de R$%.2f + R$%.2f de juros, ficando "
             "= R$%.2f",
             val_compra / 3, val_compra * 0.90 / 3, val_compra * 1.10 / 3);
      break;

    default:
      printf("Valor do tipo de desconto incorreto");
    }
  } else {
    printf("Valor da compra incorreto");
  }
}
