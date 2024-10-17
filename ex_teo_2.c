/*Faça um algoritmo que leia uma matriz quadrada de
inteiros 5x3 e construa sua transposta. O programa deverá
imprimir as duas matrizes, a original e a transposta*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int M[5][3], T[3][5];
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("M[%d][%d] = ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    //matriz original
    printf("\n\n\t\tMATRIZ: ");
    printf("\n\t-----------------------------");

    for (i=0; i<5; i++)
    {
        printf("\n\t\t");
        for (j=0; j<3; j++)
        {
            printf("%2d", M[i][j]);
        }
    }

    printf("\n\t----------------------------");

    //matriz transposta
    printf("\n\n\t\tTRANSPOSTA: ");
    printf("\n\t-----------------------------");

    for (j=0; j<3; j++)
    {
        printf("\n\t\t");
        for (i=0; i<5; i++)
        {
            printf("%2d", M[j][i]);
        }
    }

    printf("\n\t----------------------------");
    return 0;
}
