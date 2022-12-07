#include <stdio.h>
#include <ctype.h>

int main()
{
    char mat[4][4], cont = 0;
    int i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite a letra da posicao %dx%d: ", i + 1, j + 1);
            scanf("%s", &mat[i][j]);
            mat[i][j] = toupper(mat[i][j]);
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(mat[i][j] == 'C')
            {
            	if (i == 0)
            	{
				
                   if(mat[i + 1][j] == 'A' && mat[i + 2][j] == 'F' && mat[i + 3][j] == 'E')
                    {
                       printf("\n\nLetra C esta na posicao %dx%d", i + 1, j + 1);
                       printf("\nLetra A esta na posicao %dx%d", i + 2, j + 1);
                       printf("\nLetra F esta na posicao %dx%d", i + 3, j + 1);
                       printf("\nLetra E esta na posicao %dx%d\n", i + 4, j + 1);
                       cont++;
                    }
                }
                if (j == 0)
                {
				
                   if(mat[i][j + 1] == 'A' && mat[i][j + 2] == 'F' && mat[i][j + 3] == 'E')
                   {
                    printf("\n\nLetra C esta na posicao %dx%d", i + 1, j + 1);
                    printf("\nLetra A esta na posicao %dx%d", i + 1, j + 2);
                    printf("\nLetra F esta na posicao %dx%d", i + 1, j + 3);
                    printf("\nLetra E esta na posicao %dx%d\n", i + 1, j + 4);
                    cont++;
                    }
                }
                if(mat[i + 1][j + 1] == 'A' && mat[i + 2][j + 2] == 'F' && mat[i + 3][j + 3] == 'E')
                {
                    printf("\n\nA palavra CAFE esta na diagonal principal");
                    printf("\nLetra C esta na posicao %dx%d", i + 1, j + 1);
                    printf("\nLetra A esta na posicao %dx%d", i + 2, j + 2);
                    printf("\nLetra F esta na posicao %dx%d", i + 3, j + 3);
                    printf("\nLetra E esta na posicao %dx%d\n", i + 4, j + 4);
                    cont++;
                }
            }
        }
    }
    if(cont == 0)
    {
        printf("\nNao ha nenhuma ocorrencia da palavra CAFE nessa matriz!\n");
    }
}
