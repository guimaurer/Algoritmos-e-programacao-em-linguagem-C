/*Elabore um programa que solicita o total gasto de um cliente de uma loja e
imprime as opções de pagamento. Solicita a opção desejada e imprime o valor
total das prestações (se houverem). 1- Opção: a vista com 10% de desconto 2-
Opção: em duas vezes (preço da etiqueta) 3- Opção: de 3 até 10 vezes com 3% de
juros ao mês (somente para compras acima de R$ 100,00).*/
#include <stdio.h>
int main() {
  float vl_compra, vl_parcela;
  int tipo_pagamento, numero_parcelas, i;

  printf("Informe o valor da compra");
  scanf("%f", &vl_compra);

  while (vl_compra <= 0) {
    printf("\nInforme o valor da compra valido");
    scanf("%f", &vl_compra);
  }

  printf("\n Informe o tipo de pagamento");
  scanf("%d", &tipo_pagamento);

  while (tipo_pagamento < 1 || tipo_pagamento > 3) {
    printf("\n Informe o tipo de pagamento");
    scanf("%d", &tipo_pagamento);
  }

  switch (tipo_pagamento) {
  case 1:
    printf("\nValor pago = %f", vl_compra * 0.90);
    break;
  case 2:
    printf("\n Pagamento total %f em 2 vezes de %f", vl_compra, vl_compra / 2);
    break;
  case 3:
    if (vl_compra > 100) {
      printf("\nInforme o numero de parcelas");
      scanf("%d", &numero_parcelas);
      while (numero_parcelas < 3 || numero_parcelas > 10) {
        printf("\nInforme o numero de parcelas");
        scanf("%d", &numero_parcelas);
      }
      vl_parcela = vl_compra / numero_parcelas;
      vl_compra = 0;
      for (i = 1; i <= numero_parcelas; i++) {
        vl_parcela = vl_parcela * 1.03;
        printf("\nValor da parcela %d = %f", i, vl_parcela);
        vl_compra = vl_parcela + vl_compra;
      }
      printf("\n Valor Total depois do parcelamento %f", vl_compra);
      break;
    }
  }
  float res = numero_parcelas * 
}
