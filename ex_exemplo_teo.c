#include <stdio.h>
#define N 5

int main()
{
    int ident[N][N];
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if(i==j)
            {
                ident[i][j]=1;
            }
            else
            {
                ident[i][j]=0;
            }
        }
    }

    printf("\n\n\t\tMATRIZ IDENTIDADE: ");
    printf("\n\t--------------------------------");

    for (i=0; i<N; i++)
    {
        printf("\n\t\t");
        for (j=0; j<N; j++)
        {
            printf("%2d", ident[i][j]);
        }
    }

    printf("\n\t--------------------------------");
    return 0;
}
