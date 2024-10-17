/*Faça um programa que leia o nome e sobrenome de uma
pessoa o programa deve escrever o nome e o sobrenome
numa única string. Deverá ser impresso, a nova string, o
tamanho dela a primeira e a última letra da string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20], sobrenome[80], completo[100], pl, ul;
    int i, tam=0;

    printf("Nome: ");
    fflush(stdin);
    gets(nome);

    printf("Sobrenome: ");
    fflush(stdin);
    gets(sobrenome);

    strcpy(completo, nome);
    strcat(completo, sobrenome);

    for(i=0; completo[i]!='\0'; i++)
    {
        tam++;
    }


    pl=completo[0];
    ul=completo[i-1];

    printf("%s", completo);
    printf("\nTamanhho: %d", tam);
    printf("\nPrimeira: %c", pl);
    printf("\nUltima: %c", ul);

}
