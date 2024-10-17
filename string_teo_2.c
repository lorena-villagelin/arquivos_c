#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char st[10], a;
    int i, num=0;

    printf("Insira a string: ");
    fflush(stdin);
    gets(st);

    a = 'a';

    for (i=0; st[i]!='\0'; i++)
    {
        if (st[i]==a)
        {
            num++;
        }
    }
    printf("Números de 'a' em '%s': %d", st, num);
}
