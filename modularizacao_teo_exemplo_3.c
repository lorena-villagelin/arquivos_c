/*Elabore um programa que leia um número inteiro e
construa os seguintes procedimentos
• int soma_digit(int a) – este procedimento irá somar os dígitos
desse número inteiro
• void Maior_Digit(int N, int *M) – este procedimento irá
determinar o maior dígito desse número inteiro
• Os resultados deverão ser impressos no programa principal*/

#include <stdio.h>

// Função para ler um número inteiro
int ler()
{
    int num;
    printf("Valor: ");
    scanf("%d", &num);
    return num;
}

// Função para somar os dígitos de um número inteiro
int soma_digit(int a)
{
    int soma = 0;
    while (a != 0)
    {
        soma += a % 10;
        a /= 10;
    }
    return soma;
}

// Função para encontrar o maior dígito de um número inteiro
void maior_digit(int N, int *M)
{
    *M = 0;
    while (N != 0)
    {
        int digito = N % 10;
        if (digito > *M)
        {
            *M = digito;
        }
        N /= 10;
    }
}

int main()
{
    int num = ler();
    int soma = soma_digit(num);
    int maior;

    maior_digit(num, &maior);

    printf("Soma dos dígitos: %d\n", soma);
    printf("Maior dígito: %d\n", maior);

    return 0;
}
