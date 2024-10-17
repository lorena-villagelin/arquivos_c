#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char st[10];
    int i, j=0;

    printf("String: ");
    fflush(stdin);
    gets(st);

    for (i=0; st[i]!='\0'; i++)
    {
        if(st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o' && st[i]!='u')
        {
            st[j] = st[i];
            j++;
        }
    }
    st[j]='\0';

    printf("%s", st);
    return 0;
}
