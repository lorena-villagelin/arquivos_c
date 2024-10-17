#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char st[6], inv[6];
    int i, j=0;

    printf("Digite sua string [5]:");
    fflush(stdin);
    gets(st);

    for (i=strlen(st)-1; i>=0; i--)
    {
        inv[j] = st[i];
        j++;
    }


    inv[j] = '\0';

    printf("\n\nString: %s", st);
    printf("\nInversa: %s\n\n", inv);

    system("pause");
    return 0;
}
