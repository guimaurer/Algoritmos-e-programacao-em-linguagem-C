/******************************************************************************

5)	O programa deve calcular o peso ideal de uma pessoa, porém este cálculo é diferente
para homens e mulheres, assim utilize a fórmula adequada:
homens: (72.7 * Altura) –58 
mulheres: (62.1 * Altura) –44.7


*******************************************************************************/

#include <stdio.h>

int main(){   
    int gen;
    float altura;
    
    printf("\nDigite o seu genero \n1 - Mulher  \n2 - Homem \n");
    scanf ("%d", &gen);

    printf("\nDigite a sua altura : ");
    scanf ("%f", &altura);

    if(gen == 1){
        printf("\nSeu peso ideal é %.2f", (62.1 * altura) -44.7 );
    } else if(gen == 2){
         printf("\nSeu peso ideal é %.2f", (72.7 * altura) -58 );
    } else {
        printf("\n Digite um gênero válido");
        main();
    }


    return 0;
}
