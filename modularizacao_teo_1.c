/*Elabore um programa que possua uma fun��o que recebe um valor
inteiro e verifica se o valor � par. A fun��o deve retornar 1 se o
n�mero for par e 0 se for �mpar e o resultado dever� ser impresso no
programa principal*/

#include <stdio.h>
#include <locale.h>

int valor()
{
    int num;
    printf("Insira um valor inteiro: ");
    scanf("%d", &num);
    return num;
}

int imp_par()
{
    int p, n;

    p=valor();
    if(p%2==0)
    {
        n=1;
    }
    else
    {
        n=0;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int res=imp_par();

    printf("%d", res);
    return 0;
}
