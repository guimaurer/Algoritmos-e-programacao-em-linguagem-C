#include <stdio.h>
int main ()
{
	int i, j;
	float bufalo[5][3],total_carga = 0, valor_quilo;
	
	for (i=0; i < 5; i++)
	{
		printf ("\nInforme o peso ");
		scanf ("%f", &bufalo[i][0]);
		while (bufalo[i][0] <= 0)
		{
		  printf ("\nInforme o peso ");
		  scanf ("%f", &bufalo[i][0]);
		}
		printf ("\nInforme o preco compra ");
		scanf ("%f", &bufalo[i][1]);
		while (bufalo[i][1] <=0)
		{
		  printf ("\nInforme o preco ");
		  scanf ("%f", &bufalo[i][1]);
		}
		total_carga = total_carga + bufalo[i][1]; 
	}
	printf ("\nInforme o valor do quilo ");
	scanf ("%f", &valor_quilo);
	while (valor_quilo <= 0)
	{
	  printf ("\nInforme o valor do kilo ");
	  scanf ("%f", &valor_quilo);
	}
	printf ("\nPeso total da carga %f", total_carga);
	for (i=0; i < 5; i++)
	{
		bufalo[i][2] = bufalo[i][0]*valor_quilo;
	
    
	}
	for (i=0; i < 5; i++)
	{
		for (j=0; j < 3; j++)
	    {
	    	printf ("\nBufalos %d %d %f", i, j, bufalo[i][j]);
	    }
    }
}
