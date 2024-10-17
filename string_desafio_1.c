/*Strings que gaguejam. Elabore um programa que leia uma
string de no máximo 7 caracteres e duplique cada caractere
da string. O programa deverá imprimir a string original e a
“gaga*/

#include <stdio.h>
#include <string.h>

int main()
{
    char st[7], gaga[7];
    int i, j=0;

    printf("String: ");
    fflush(stdin);
    gets(st);
    printf("%s", st);

    for(i=0; st[i]!='\0'; i++)
    {
        gaga[j++]=st[i];
        gaga[j++]=st[i];
    }

    gaga[j]='\0';

    printf("\n%s", gaga);

    return 0;
}
