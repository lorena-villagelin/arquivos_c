/*Elabore um programa que crie uma estrutura com as
seguintes informações de um produto:
• Código do produto – inteiro de 3 dígitos
• Quantidade em estoque - inteiro
• Valor de compra - real
• Valor de Venda - real
O programa deverá ler a informação de 10 produtos e determinar
• O código do produto com maior quantidade de estoque
• O quantidade de estoque do produto que proporciona o maior
lucro*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 2

typedef struct store
{
    int cod, qt;
    float vcompra, vvenda;
}Store;

int estoque(Store aux[])
{
    int i, maiorqt=0, codqt;
    for(i=0;i<tam;i++)
    {
        if(aux[i].qt>maiorqt)
        {
            maiorqt=aux[i].qt;
            codqt=aux[i].cod;
        }
    }
    return codqt;
}

int lucro(Store aux[])
{
    int i, maiorlucro=0, lucro, qt, vcompra, vvenda;
    for(i=0;i<tam;i++)
    {
        lucro = vvenda - vcompra;
        if (lucro>maiorlucro)
        {
            maiorlucro=lucro;
        }
    }
    return maiorlucro;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int maiorqt=0, codqt, maiorlucro, i, j;
    Store prod[tam];

    for (i=0; i<tam; i++)
    {
        printf("\nProduto %d", i+1);
        printf("\nCódigo: ");
        scanf("%d", &prod[i].cod);
        printf("Quantidade em estoque: ");
        scanf("%d", &prod[i].qt);
        printf("Valor de compra: ");
        scanf("%f", &prod[i].vcompra);
        printf("Valor de venda: ");
        scanf("%f", &prod[i].vvenda);
    }

    maiorlucro=lucro(prod);
    codqt=estoque(prod);
    printf("\n\nMaior estoque: %d", codqt);
    printf("\nMaior lucro: %d", maiorlucro);

}

//versao gpt
/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

typedef struct store
{
    int cod;
    int qt;
    float vcompra;
    float vvenda;
} Store;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int maiorqt = 0, codqt = 0, maiorlucro = 0, codlucro = 0;
    Store prod[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("\nProduto %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &prod[i].cod);
        printf("Quantidade em estoque: ");
        scanf("%d", &prod[i].qt);
        printf("Valor de compra: ");
        scanf("%f", &prod[i].vcompra);
        printf("Valor de venda: ");
        scanf("%f", &prod[i].vvenda);

        // Verifica o produto com maior quantidade em estoque
        if (maiorqt < prod[i].qt)
        {
            maiorqt = prod[i].qt;
            codqt = prod[i].cod;
        }

        // Calcula o lucro do produto atual
        float lucro_atual = (prod[i].vvenda - prod[i].vcompra) * prod[i].qt;

        // Verifica se o lucro atual é maior que o maior lucro encontrado até agora
        if (lucro_atual > maiorlucro)
        {
            maiorlucro = lucro_atual;
            codlucro = prod[i].cod;
        }
    }

    printf("\n\nCódigo do produto com maior quantidade de estoque: %d\n", codqt);
    printf("Quantidade em estoque do produto que proporciona o maior lucro: %d\n", maiorlucro);
    printf("Código do produto que proporciona o maior lucro: %d\n", codlucro);

    return 0;
}
*/


