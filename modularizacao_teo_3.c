/*Elabore um programa que contenha uma função que
dado um numero inteiro natural ela retorne a o seu
fatorial.*/

#include <stdio.h>
#include <locale.h>

int fat(int numero)
{
    if (numero == 0 || numero == 1)
        return 1;
    else
        return numero * fat(numero-1);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero, resultado;

    printf("Digite um número inteiro natural: ");
    scanf("%d", &numero);

    resultado = fat(numero);
    printf("O fatorial de %d é %d.\n", numero, resultado);
    return 0;
}
