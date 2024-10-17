/*Elabore um programa que leia tr�s n�meros reais e imprima o maior e
o menor numero lido . O programa dever� ser constitu�do de duas
fun��es:
� Uma fun��o para ler os n�meros reais
� Uma fun��o para determinar quem � o maior e quem � o menor.
Esta fun��o ter� como par�metro os 3 valores a serem analisados
e retornar� para o principal quem � o maior quem � o menor
� O resultado ser� impresso no programa principal*/

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
