/*Faça um algoritmo que leia uma matriz M 5x5 de números
reais. O programa deve determinar o maior número da
matriz e a sua posição (linha, coluna).*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    float M[5][5];
    int i, j, L=0, C=0;
    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

    /*for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if(M[i][j] > M[L][C])
            {
                L=i;
                C=j;
            }
        }
    }

    printf ("%.1f é maior\n", M[L][C]);
    printf ("Está na linha %d, coluna %d", L, C);
    return 0;*/
}

