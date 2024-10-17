/*Construa um programa que seja constituído das seguintes
funções
• Ler um vetor de inteiros de 20 posíções
• Função que retorna a quantidade de números pares e a
quantidade de múltiplos de 5
• Função que retorna a média do vetor e quantos valores são
maiores que essa média*/

#include <stdio.h>

int ler(int v[20])
{
    int i;
    printf("Vetor:\n");
    for(i=0; i<20; i++)
    {
        scanf("%d", &v[i]);
    }

}

void num(int v[20], int *pares, int *mult)
{
    int par=0, cinc=0, i;

    for(i=0; i<20; i++)
    {
        if(v[i]%2==0)
        {
            par++;
        }
        if(v[i]%5==0)
        {
            cinc++;
        }
    }

    *pares=par;
    *mult=cinc;
}

void media(int v[20], float *m, int *maior)
{
    int i, med=0, mai=0;

    for(i=0; i<20; i++)
    {
        med+=v[i];
    }
    *m=med/20;

    for(i=0; i<20; i++)
    {
        if(v[i]>*m)
        {
            mai++;
        }
    }
    *maior=mai;
}

int main()
{
    int v[20], pares, mult, maior;
    float m;

    ler(v);

    num(v, &pares, &mult);
    media(v, &m, &maior);

    printf("\n\nPares: %d", pares);
    printf("\nMultiplos: %d", mult);
    printf("\nMedia: %.2f", m);
    printf("\nMaiores: %d", maior);

}
