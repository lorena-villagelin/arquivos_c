/*Elabore um programa que leia três números reais e imprima o maior e
o menor numero lido . O programa deverá ser constituído de duas
funções:
• Uma função para ler os números reais
• Uma função para determinar quem é o maior e quem é o menor.
Esta função terá como parâmetro os 3 valores a serem analisados
e retornará para o principal quem é o maior quem é o menor
• O resultado será impresso no programa principal*/

#include <stdio.h>

float ler()
{
    float num;
    printf("Insira o valor: ");
    scanf("%f", &num);
    return num;
}

void maior_menor(float x, float y, float z, float *maior, float *menor)
{
    *menor=x;
    *maior=x;

    if(y>*maior)
    {
        *maior=y;
    }
    else
    {
        *menor=y;
    }
    if(z>*maior)
    {
        *maior=z;
    }
    else
    {
        *menor=z;
    }

}


int main()
{
    float num, x, y, z, maior, menor;

    x=ler();
    y=ler();
    z=ler();

    maior_menor(x, y, z, &maior, &menor);


    printf("\n\nMaior: %.1f", maior);
    printf("\nMenor: %.1f\n\n", menor);

    return 0;

}
