typedef struct no
{
    int valor;
    struct no *prox;
} nodo;


#include<stdio.h>
#include <stdlib.h>
#include "insere_inicio.c"
#include "insere_meio.c"
#include "insere_fim.c"
#include "remove_inicio.c"
#include "remove_meio.c"
#include "remove_fim.c"
#include "procura_valor.c"

int main()
{
    
   int num, continua = 0;
   nodo *inicio = NULL, *proximo, *pont;
   while (continua == 0)
   {
       
        pont = (nodo *) malloc (sizeof (nodo));
        
        if (pont != NULL)
        {
            printf ("informe um valor :");
            scanf ("%d", &num);
            pont->valor = num;
            pont->prox = NULL;
            if (inicio == NULL)
            {
                inicio = pont;
                proximo = inicio;
               
            }
            else
            {
               proximo->prox = pont;
               proximo = pont;
              
            }   
        }
        else
        {
            printf ("\n nao conseguiu alocar espaco de memoria para nodo");
        }
        printf ("\n deseja continuar inserindo na lista ");
        scanf ("%d", &continua);
   }   
   proximo = inicio;
   
   while (proximo != NULL)
   {
       printf ("\n Valor armazenado na lista %d", proximo->valor);
       proximo = proximo->prox;
   }
}
