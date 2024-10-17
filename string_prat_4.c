/*Faça um programa que leia três strings de no máximo 10
caracteres. Ordene-as em ordem alfabética e as imprima*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 11

int main()
{
    char s1[max], s2[max], s3[max], aux[max];

    printf("String 1: ");
    fflush(stdin);
    gets(s1);

    printf("String 2: ");
    fflush(stdin);
    gets(s2);

    printf("String 3: ");
    fflush(stdin);
    gets(s3);

    if(strcmp(s1, s2)>0)
    {
        strcpy(aux, s1);
        strcpy(s1, s2);
        strcpy(s2, aux);

    }
    if(strcmp(s1, s3)>0)
    {
        strcpy(aux, s1);
        strcpy(s1, s3);
        strcpy(s3, aux);
    }
    if(strcmp(s2, s3)>0)
    {
        strcpy(aux, s2);
        strcpy(s2, s3);
        strcpy(s3, aux);
    }

    puts(s1);
    puts(s2);
    puts(s3);

    return 0;

}
