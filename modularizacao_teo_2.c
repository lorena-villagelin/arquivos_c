/*Elabore um programa que contenha duas funções:
• Uma função que lê um número real
• E uma função que a partir do número real lido retorna a parte
fracionária do mesmo*/

#include <stdio.h>

float real()
{
    float num;
    printf("Insira um valor: ");
    scanf("%f", &num);
    return num;
}

float fra()
{
    int n;
    float frac, r=real();
    n = r/1;
    frac = r - n;
    return frac;
}

int main()
{
    float f=fra();
    printf("%.2f", f);
}
