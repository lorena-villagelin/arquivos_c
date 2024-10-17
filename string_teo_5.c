#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[100], iniciais;
    int i;

    printf("Nome completo (digitar primeira letra de cada nome maiuscula): ");
    fflush(stdin);
    gets(nome);

    for(i=0; nome[i]!='\0'; i++)
    {
        if(isupper(nome[i]))
        {
            printf("%c", nome[i]);
        }
    }
    return 0;
}
