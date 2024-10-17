/*Elabore um programa que leia um n�mero inteiro e
construa os seguintes procedimentos
� int soma_digit(int a) � este procedimento ir� somar os d�gitos
desse n�mero inteiro
� void Maior_Digit(int N, int *M) � este procedimento ir�
determinar o maior d�gito desse n�mero inteiro
� Os resultados dever�o ser impressos no programa principal*/

#include <stdio.h>

// Fun��o para ler um n�mero inteiro
int ler()
{
    int num;
    printf("Valor: ");
    scanf("%d", &num);
    return num;
}

// Fun��o para somar os d�gitos de um n�mero inteiro
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

// Fun��o para encontrar o maior d�gito de um n�mero inteiro
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

    printf("Soma dos d�gitos: %d\n", soma);
    printf("Maior d�gito: %d\n", maior);

    return 0;
}
