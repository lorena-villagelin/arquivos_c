/*Elabore um programa que contenha uma fun��o que
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

    printf("Digite um n�mero inteiro natural: ");
    scanf("%d", &numero);

    resultado = fat(numero);
    printf("O fatorial de %d � %d.\n", numero, resultado);
    return 0;
}
