/*Uma palavra � pal�ndroma se ela n�o se altera quando lida
da direita para esquerda. Por exemplo, RAIAR � pal�ndroma.
Escreva um programa que verifique se uma palavra dada �
pal�ndroma
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char st[20], inv[20];
    int i, j=0;

    printf("Palavra: ");
    fflush(stdin);
    gets(st);

    for(i=strlen(st)-1; st[i]>=0; i--)
    {
        inv[j]=st[i];
        j++;
    }

    if(strcmp(st, inv)==0)
    {
        printf("Palindroma.");
    }
    else
    {
        printf("Nao e palindroma.");
    }

    return 0;
}
