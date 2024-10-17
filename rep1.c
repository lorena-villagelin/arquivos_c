/*Escrever um algoritmo que leia uma quantidade desconhecida de
números e conte quantos deles estão nos seguintes intervalos:
[0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve
terminar quando for lido um número negativo*/

#include <stdio.h>
#include <locale.h>

int main
{
    setlocale(LC_ALL, "portuguese");
    int num, a, b, c, d;
    while (num>=0)
    {
        printf("Número: "); scanf ("%d", &num);
        if (num<25)
        {
            a++;
            if (num<50)
            {
                b++;
                if (num<75)
                {
                    c++;
                    if (num<100)
                    {
                        d++;
                    }
                }
            }
        }
    }
    printf ("0 a 25: %d \n26 a 50: %d \n51 a 75: %d \n76 a 100: %d", &a, &b, &c, &d);
} return 0;
