#include <stdio.h>

int main() {
  int num, prim, segu, next;
  printf("\nDigite um numero com a operação escolida\n");
  printf("1 - Divisão\n2 - Soma\n3 - Subtração\n4 - Multiplicação\n");
  scanf("%d", &num);

  if (num < 5 && num > 0) {
    printf("\nDigite o primeiro valor\n");
    scanf("%d", &prim);

    printf("\nDigite o segundo valor\n");
    scanf("%d", &segu);
  } else {
    printf("Digite uma operacao válida\n");
    main();
  }

  switch (num) {
  case 1:
    if (segu == 0) {
      printf("Resultado %d \n", 0);
      break;
    } else {
		printf("Resultado %f \n", (float)prim / (float)segu);
    	break;
    }

  case 2:
    printf("Resultado %d \n", prim + segu);
    break;

  case 3:
    printf("Resultado %d \n", prim - segu);
    break;

  case 4:
    printf("Resultado %d \n", prim * segu);
    break;
  }

  printf("\nDeseja retornar?\n1 - Sim\n2 - Não\n");
  scanf("%d", &next);
  if (next == 1) {
    main();
  }
}