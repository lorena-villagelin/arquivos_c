/*Elabore um programa que contenha duas fun��es:
� Uma fun��o que l� um n�mero real
� E uma fun��o que a partir do n�mero real lido retorna a parte
fracion�ria do mesmo*/

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
