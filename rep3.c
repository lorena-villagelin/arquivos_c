#include <stdio.h>
int main ()
{
    int num, tab, res;
    printf("Escolha um número para tabuada: ");
    scanf("%d", num);
    for (tab = 1; tab <= 10 ; tab++)
    {
        res = tab * num;
        printf("%d x %d = %d", num, tab, res);
    }
}
