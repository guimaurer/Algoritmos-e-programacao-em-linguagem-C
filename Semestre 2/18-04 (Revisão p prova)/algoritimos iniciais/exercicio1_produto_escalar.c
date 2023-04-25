/*
1) Dados dois vetores x e y, ambos com n elementos,
determinar o produto escalar desses vetores.
OBS.: o produto escalar é soma de todos os produtos dos
números de mesma posição. Por exemplo, se n = 4:

*/

#include <stdio.h>

void main(){
    int vetorA[] = {0,3,5,6};
    int vetorB[] = {2,4,9,8};
    int resultado = 0, i;

    for (i=0; i<4; i++) {
    resultado = resultado + (vetorA[i]*vetorB[i]);
    }
    printf("resultado final é %d", resultado);

}