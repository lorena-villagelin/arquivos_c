#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[30], sobrenome[80], completo[110], espaco[]=" ", lp, ln;
    int i=0, cont=0, semesp;

    printf("Nome: ");
    fflush(stdin);
    gets(nome);

    printf("Sobrenome: ");
    fflush(stdin);
    gets(sobrenome);

    strcpy(completo, nome);
    strcat(completo, espaco);
    strcat(completo, sobrenome);

    for (i=0; completo[i]!='\0'; i++)
    {
        cont++;
    }


    lp = completo[0];
    ln = completo[cont-1];
    semesp = cont-1;

    printf("\n");
    puts(completo);
    printf("\nTamanho com espaço: %d", cont);
    printf("\nTamanho sem espaço: %d", semesp);
    printf("\nPrimeira letra: %c", lp);
    printf("\nÚltima letra: %c\n\n", ln);
}
