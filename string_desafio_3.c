/*Faça um programa que verifica se duas strings são
anagramas. Uma string é um anagrama de outra string se
todas as letras de uma ocorrem na outra em mesmo
número, independentemente da posição. Exemplos: ROMA,
MORA, ORAM, AMOR, RAMO são anagramas entre si. O
programa deve considerar que as strings possuem somente
letras e que as letras são sempre minúsculas*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[20], s2[20];
    int i;

    do
    {
        printf("String 1: ");
        fflush(stdin);
        gets(s1);
        strlwr(s1);
        puts(s1);

    } while(isdigit(s1));

    printf("String 2: ");
    fflush(stdin);
    gets(s2);
    strlwr(s2);
    puts(s2);


    return 0;


}
