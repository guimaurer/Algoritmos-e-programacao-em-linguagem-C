/*

Um sacolão está realizando prmoções nas frutas vendidas . pra o cliente ler
descontos deverá seguir algumas regras. No caixa do sacolão sera utilizado o
programa que você ira desenvolver. no programa aparecer um menu para a seleção
da fruta a ser comprada: 1- Maça 2 - Laranja 3 - Lima 4 - abacaxi

  O caixa do sacolão seleciona a fruta e informa a quantidade que está sendo
comprada, assim como o valor da unidade
Na compra de maças, se o cliente estiver comprando mais de 10 unidade tera
desconto de 7% Na compra de Laranjas, desconto de 2% na unidade para compras de
5 até 10 unidades e 5% para mais de 10 unidades. na Compra de Limas, compras
acima de 7 unidades, tera desconto de 20%

*/

#include <stdio.h>

int main() {
  int op_fruta, qtd_fruta;
  float val_fruta, total_val_fruta;

  printf("\nDigite a opção da fruta :\n1- Maça\n2 - Laranja\n3 - Lima\n4 - "
         "abacaxi       ");
  scanf("%d", &op_fruta);

  printf("\nDigite a quantidade: ");
  scanf("%d", &qtd_fruta);

  total_val_fruta = 0;

  printf("\nDigite o preco da fruta: ");
  scanf("%f", &val_fruta);

  switch (op_fruta) {
  case 1:
    if (qtd_fruta > 10) {
      total_val_fruta = val_fruta * qtd_fruta * .93;
    } else {
      total_val_fruta = val_fruta * qtd_fruta;
    }
    break;
  case 2:
    if (qtd_fruta > 5 || qtd_fruta < 10) {
      total_val_fruta = val_fruta * qtd_fruta * .98;
    } else if (qtd_fruta > 10) {
      total_val_fruta = val_fruta * qtd_fruta * .95;
    } else {
      total_val_fruta = val_fruta * qtd_fruta;
    }
    break;
  case 3:;
  case 4:;
  }
}