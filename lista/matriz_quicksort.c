#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[][5], int baixo, int alto)
{
    int pivo = arr[alto][0];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++)
    {
        if (arr[j][0] < pivo)
        {
            i++;
            for (int k = 0; k < 5; k++)
            {
                trocar(&arr[i][k], &arr[j][k]);
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        trocar(&arr[i + 1][k], &arr[alto][k]);
    }
    return (i + 1);
}

void quicksort(int arr[][5], int baixo, int alto)
{
    if (baixo < alto)
    {
        int pi = particionar(arr, baixo, alto);
        quicksort(arr, baixo, pi - 1);
        quicksort(arr, pi + 1, alto);
    }
}

void imprimirMatriz(int arr[][5], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[][5] = {
        {12, 11, 13, 5, 6},
        {5, 9, 0, 11, 18},
        {8, 7, 6, 5, 4}};
    int linhas = 3;
    int colunas = 5;

    printf("Matriz original:\n");
    imprimirMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++)
    {
        quicksort(matriz, 0, linhas - 1);
    }

    printf("\nMatriz ordenada:\n");
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}