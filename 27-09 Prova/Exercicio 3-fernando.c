#include <stdio.h>
int main(){
	int x = 1, clientes = 0, denovo, menu, sabao, alcool, sabonete, escova, amaciante, qtd3, qtd4;
	float pr1, pr2, pr3, pr4, pr5, qtd1, qtd2, qtd5, totcompra, tot = 0;
	
	while(x){
		clientes ++; 
		sabao = 0; alcool = 0; sabonete = 0; escova = 0; amaciante = 0;  
		pr1 = 0; pr2 = 0; pr3 = 0; pr4 = 0; pr5 = 0;
		qtd1 = 0; qtd2 = 0; qtd3 = 0; qtd4 = 0; qtd5 = 0;
		totcompra = 0;
		
		printf("Informe o produto: \n[1 - Sabao em po] \n[2 - Alcool] \n[3 - Sabonete] \n[4 - Escova de dente] \n[5 - Amaciante de roupas] \n[6 - Sair] \n");
		scanf("%d", &menu);
		printf("\n");
		while(menu < 1 || menu > 6){
			printf("Invalido! Informe o produto: \n[1 - Sabao em po] \n[2 - Alcool] \n[3 - Sabonete] \n[4 - Escova de dente] \n[5 - Amaciante de roupas] \n[6 - Sair] \n");
			scanf("%d", &menu);
			printf("\n");
		}
		while(menu != 6){
			switch(menu){
				case 1:
					printf("Digite o preco do sabao em po (p/ Kg): ");
					scanf("%f", &pr1);
					while(pr1 <= 0){
						printf("Invalido! Digite novamente o preco do sabao em po (p/ Kg): ");
						scanf("%f", &pr1);
					}
					printf("Digite a quantia do sabao em po (em Kg): ");
					scanf("%f", &qtd1);
					while(qtd1 < 0.2){
						printf("Invalido! Digite novamente a quantia do sabao em po (em Kg): ");
						scanf("%f", &qtd1);
					}
					tot += pr1*qtd1;
					totcompra += pr1*qtd1;
					sabao = 1;
					break;
				case 2:
					printf("Digite o preco do alcool (p/ L): ");
					scanf("%f", &pr2);
					while(pr2 <= 0){
						printf("Invalido! Digite novamente o preco do alcool (p/ L): ");
						scanf("%f", &pr2);
					}
					printf("Digite a quantia do alcool (em L): ");
					scanf("%f", &qtd2);
					while(qtd2 < 0.5){
						printf("Invalido! Digite novamente a quantia do alcool (em L): ");
						scanf("%f", &qtd2);
					}
					tot += pr2*qtd2;
					totcompra += pr2*qtd2;
					alcool = 1;
					break;
				case 3:
					printf("Digite o preco do sabonete (p/ u.): ");
					scanf("%f", &pr3);
					while(pr3 <= 0){
						printf("Invalido! Digite novamente o preco do sabonete (p/ u.): ");
						scanf("%f", &pr3);
					}
					printf("Digite a quantia do sabonete (u.): ");
					scanf("%d", &qtd3);
					while(qtd3 <= 0){
						printf("Invalido! Digite novamente a quantia do sabonete (u.): ");
						scanf("%d", &qtd3);
					}
					tot += pr3*qtd3;
					totcompra += pr3*qtd3;
					sabonete = 1;
					break;
				case 4:
					printf("Digite o preco da escova (p/ u.): ");
					scanf("%f", &pr4);
					while(pr4 <= 0){
						printf("Invalido! Digite novamente o preco da escova (p/ u.): ");
						scanf("%f", &pr4);
					}
					printf("Digite a quantia do da escova (u.): ");
					scanf("%d", &qtd4);
					while(qtd4 <= 0){
						printf("Invalido! Digite novamente a quantia da escova (u.): ");
						scanf("%d", &qtd4);
					}
					tot += pr4*qtd4;
					totcompra += pr4*qtd4;
					escova = 1;
					break;
				case 5:
					printf("Digite o preco do amaciante (p/ L): ");
					scanf("%f", &pr5);
					while(pr5 <= 0){
						printf("Invalido! Digite novamente o preco do amaciante (p/ L): ");
						scanf("%f", &pr5);
					}
					printf("Digite a quantia do amaciante (em L): ");
					scanf("%f", &qtd5);
					while(qtd5 < 0.5){
						printf("Invalido! Digite novamente a quantia do amaciante (em L): ");
						scanf("%f", &qtd5);
					}
					tot += pr5*qtd5;
					totcompra += pr5*qtd5;
					amaciante = 1;
					break;
			}
			printf("\nInforme outro produto: \n[1 - Sabao em po] \n[2 - Alcool] \n[3 - Sabonete] \n[4 - Escova de dente] \n[5 - Amaciante de roupas] \n[6 - Sair] \n");
			scanf("%d", &menu);
			while(menu < 1 || menu > 6){
				printf("Invalido! Informe outro produto: \n[1 - Sabao em po] \n[2 - Alcool] \n[3 - Sabonete] \n[4 - Escova de dente] \n[5 - Amaciante de roupas] \n[6 - Sair] \n");
				scanf("%d", &menu);
			}
			printf("\nForam informados: ");
			if(sabao == 1)
				printf("\n%.2fKg de sabao em po por R$%.2f;", qtd1, pr1);
			if(alcool == 1)
				printf("\n%.2fL de alcool por R$%.2f;", qtd2, pr2);
			if(sabonete == 1)
				printf("\n%du. de sabonete(s) por R$%.2f;", qtd3, pr3);
			if(escova == 1)
				printf("\n%du. de escova(s) de dente por R$%.2f;", qtd4, pr4);
			if(amaciante == 1)
				printf("\n%.2fL de amaciante de roupas por R$%.2f;", qtd5, pr5);
		}
		printf("\n\nDeseja cadastrar a compra de mais um cliente? [SIM - 1] [NAO - 0]: ");
		scanf("%d", &denovo);
		printf("\n");
		while(denovo != 1 && denovo != 0){
			printf("Invalido! Deseja cadastrar a compra de mais um cliente? [SIM - 1] [NAO - 0]: ");
			scanf("%d", &denovo);	
			printf("\n");
		}
		if(denovo == 0)
			x = 0;
	}
	printf("Hoje foram registradas compras de %d clientes, com um total arrecadado de R$%.2f e uma media de R$%.2f por compra.", clientes, tot, tot/clientes);
}
