/*Elabore um programa que leia uma matriz de reais 10x10 e
determine:
• A soma da linha 4
• O menor elemento da coluna 5
• O maior elemento da diagonal principal*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int M[5][5];
    int i, j, soma=0, menor, maior;

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("M[%d][%d]: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    menor=M[0][4];
    maior=M[0][0];

    for(j=0; j<5; j++)
    {
        soma+=M[1][j];
    }

    for(i=0; i<5; i++)
    {
        if(M[i][4]<menor)
        {
            menor=M[i][4];
        }
    }

    for(i=0; i<5; i++)
    {
        if(M[i][i]>maior)
        {
            maior=M[i][i];
        }
    }

    printf("\nSoma: %d ", soma);
    printf("\nMenor: %d", menor);
    printf("\nMaior: %d", maior);
    return 0;
}
