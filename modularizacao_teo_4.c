/*Faça uma função no programa anterior que imprime
os divisores do numero inteiro natural lido*/

#include <stdio.h>
#include <locale.h>

int fat(int numero)
{
    if (numero == 0 || numero == 1)
        return 1;
    else
        return numero * fat(numero-1);
}

void divisores(int numero)
{
    printf("Divisores: ");
    int i;
    for (i=1; i<=numero; i++)
    {
        if(numero%i==0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero, resultado, div;

    printf("Digite um número inteiro natural: ");
    scanf("%d", &numero);

    resultado = fat(numero);
    printf("O fatorial de %d é %d.\n", numero, resultado);

    divisores(numero);
    return 0;
}
