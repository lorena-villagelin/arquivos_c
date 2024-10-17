/*Faça um algoritmo que leia uma matriz de no máximo 20
linha e 20 colunas e que:
• Troque os valores da coluna 0 com a coluna 3
• Determine quantos números pares tem essa matriz
• A soma dos valores da diagonal principal
• Determine a soma de cada linha desta matriz, coloque o
resultado em um vetor
• Determine o maior valor de cada coluna dessa matriz,
coloque o resultado em um vetor*/

#include <stdio.h>

int main()
{
    int M[5][5], T[5][5];
    int i, j, coluna, par, dsoma, lsoma[5], csoma[5];

    for(i=0; i<5; i++)
    {
        lsoma[i]=0;
        csoma[i]=0;
        for(j=0; j<5; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            if(M[i][j]%2==0)
            {
                par++;
            }
        }
    }

    //matriz normal
    printf("\n\n\nmatriz normal");
    for(i=0; i<5; i++)
    {
        printf("\n\t");
        for(j=0; j<5; j++)
        {
            printf("%d ", M[i][j]);
        }
    }

    //troca coluna 0 por coluna 3

    coluna=M[0][0];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            T[i][j]=M[i][j];
        }
        coluna=T[i][3];
        T[i][3]=T[i][0];
        T[i][0]=coluna;
        printf("\n\t");
        for(j=0; j<5; j++)
        {
            printf("%d ", T[i][j]);
        }

    }

    /*for(i=0; i<5; i++)
    {
        coluna=T[i][3];
        T[i][3]=T[i][0];
        T[i][0]=coluna;
    }*/

    //print
    /*printf("\n\n\nmatriz trocada");
    for(i=0; i<5; i++)
    {
        printf("\n\t");
        for(j=0; j<5; j++)
        {
            printf("%d ", T[i][j]);
        }
    }*/

    //pares
    printf("\n\nPares: %d", par);

    //soma diagonal
    dsoma=0;
    for(i=0; i<5; i++)
    {
        dsoma+=M[i][i];
    }
    printf("\nSoma diagonal: %d", dsoma);

    //soma linhas

    printf("\n\nSoma linhas:");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            lsoma[i]+=M[i][j];
        }
        printf("%d ",lsoma[i]);
    }

    //soma colunas

    printf("\n\nSoma colunas: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            csoma[i]+=M[j][i];
        }
        printf("%d ", csoma[i]);
    }


}
