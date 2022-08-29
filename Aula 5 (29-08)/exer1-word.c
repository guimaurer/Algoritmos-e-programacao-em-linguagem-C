/******************************************************************************

Uma loja forne 10% de desconto para funcionários e 5% para clientes vips. Faça
um programa que calcule o valor total a ser pago por uma pessoa. O programa
deverá ler o valor total da compra efetuada e um código que indentifique o
cliente.


*******************************************************************************/

#include <stdio.h>

int main() {
  int tipo_user;
  float val_compra;

  printf("\nDigite o nivel de usuario:\n1 - Usuario comum  \n2 - "
"Funcionario\n3 - VIP\n");
  scanf("%d", &tipo_user);

  if (tipo_user > 0 && tipo_user < 4) {
    printf("\nDigite o valor total da sua conta: ");
    scanf("%f", &val_compra);

    if (val_compra > 0) {

      switch (tipo_user) {
      case 1:
        printf("\nTotal da sua compra é %.2f", val_compra);
        break;

      case 2:
        printf("\nTotal da sua compra é %.2f", val_compra * 0.9);
        break;

      case 3:
        printf("\nTotal da sua compra é %.2f", val_compra * 0.95);
        break;
      }
    } else {
      printf("voce digitou um valor menor que 0");
    }

  } else {
    printf("\n\nVoce digitou o nivel de usuario errado");
    main();
  }
}
