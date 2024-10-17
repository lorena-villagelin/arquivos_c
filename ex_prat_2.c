/*Faça um algoritmo que leia e some 2 matrizes 2X4.*/

#include <stdio.h>

int main()
{
    int M[2][4], N[2][4], S[2][4];
    int i, j;

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("M1[%d][%d]: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("M2[%d][%d]: ", i+1, j+1);
            scanf("%d", &N[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            S[i][j]=M[i][j]+N[i][j];
        }
    }

    for(i=0; i<2; i++)
    {
        printf("\n\t");
        for(j=0; j<4; j++)
        {
            printf("%d ", S[i][j]);
        }
    }

}
