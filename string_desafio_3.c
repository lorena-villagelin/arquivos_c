/*Fa�a um programa que verifica se duas strings s�o
anagramas. Uma string � um anagrama de outra string se
todas as letras de uma ocorrem na outra em mesmo
n�mero, independentemente da posi��o. Exemplos: ROMA,
MORA, ORAM, AMOR, RAMO s�o anagramas entre si. O
programa deve considerar que as strings possuem somente
letras e que as letras s�o sempre min�sculas*/

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
