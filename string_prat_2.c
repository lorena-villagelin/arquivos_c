/*
Faça um programa que lê uma string de 5 caracteres e
inverte esta string. No final o programa deverá imprimir a
string original e a invertida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char og[6], inv[6];
    int i, j=0;

    fflush(stdin);
    gets(og);

    for(i=(strlen(og)-1); i>=0; i--)
    {
        inv[j]=og[i];
        j++;
    }

    inv[j]='\0';

    printf("\n");
    puts(og);
    puts(inv);
}
