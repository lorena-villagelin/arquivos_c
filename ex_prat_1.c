/*Faça um algoritmo que leia uma matriz quadrada de no
máximo 10 posições e determine qual é o maior e o menor
valor da linha 5 e qual é o maior e o menor valor da coluna 7.*/

#include <stdio.h>
#define tam 10

int main()
{
    int M[10][10];
    int i, j, Lmaior, Lmenor, Cmaior, Cmenor;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    /*for(i=0; i<tam; i++)
    {
        printf("\n\t");
        for(j=0; j<tam; j++)
        {
            printf("%d ", M[i][j]);
        }
    }*/

    Lmaior=M[4][0];
    Lmenor=M[4][999];

    for(i=0; i<10; i++)
    {
        if(M[4][i]>Lmaior)
        {
            Lmaior=M[4][i];
        }
        if(M[4][i]<Lmenor)
        {
            Lmenor=M[4][i];
        }
    }

    Cmaior=M[0][6];
    Cmenor=M[999][6];

    for(i=0; i<10; i++)
    {
        if(M[i][6]>Cmaior)
        {
            Cmaior=M[i][6];
        }
        if(M[i][6]<Cmenor)
        {
            Cmenor=M[i][6];
        }
    }

    printf("\n\nLinha 5:\n\tmaior: %d\n\tmenor: %d", Lmaior, Lmenor);
    printf("\n\nColuna 7: \n\tmaior: %d\\tmenor: %d", Cmaior, Cmenor);

    return 0;
}
