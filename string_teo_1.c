/*Elabore um programa que leia uma string de no máximo 20
caracteres e um caractere. O programa deverá determinar o
número de vezes que esse caractere aparece na string*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[20], c;
    int i, n=0;

    printf("String: ");
    fflush(stdin);
    gets(s);

    printf("Caractere: ");
    fflush(stdin);
    c = getchar();

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==c)
        {
            n++;
        }
    }

    printf("A letra %c aparece %dx na string %s", c, n, s);
    return 0;
}
