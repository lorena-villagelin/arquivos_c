#include <stdio.h>
int main ()
{
    int num, soma = 0;
    printf("Número: "); scanf("%d", &num);
    while(num!=0)
    {
        soma += num%10;
        num /=10;
    }
    printf ("Numero: %d\n Soma: %d", num, soma);
    return 0;