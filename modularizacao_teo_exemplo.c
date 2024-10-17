/*Elabore um programa que leia um numero inteiro e
construa os seguintes procedimentos
• int ler_Inteiro() – este procedimento irá ler um nome do tipo inteiro e retornar o valor lido
• int qtd_3(int a, int b, int c) – este procedimento irá retornar quantos números são múltiplos de 3
• Os resultados deverão ser impressos no programa principal*/

#include <stdio.h>

int ler_inteiro()
{
    int num;
    printf("Insira o valor: ");
    scanf("%d", &num);
    return num;
}

int qtd_3(int a, int b, int c)
{
    int mult=0;
    if(a%3==0)
    {
        mult++;
    }
    if(b%3==0)
    {
        mult++;
    }
    if(c%3==0)
    {
        mult++;
    }

    return mult;
}

int main()
{
    int um, dois, tres, mult;

    um=ler_inteiro();
    dois=ler_inteiro();
    tres=ler_inteiro();

    mult=qtd_3(um, dois, tres);
    printf("Total de multiplos: %d", mult);

    return 0;
}
