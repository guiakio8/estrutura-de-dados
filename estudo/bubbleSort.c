#include <stdio.h>

void bubbleSort(int vetor[], int n)
{
    int k, j, aux;
    int x;

    for (k = 0; k < n; k++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for (x = 0; x < n; x++)
    {
        printf(" %d", vetor[x]);
    }
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int vetor[5] = {10,4,3,6,9};
    int i;

    scanf(" %d", &n)

    bubbleSort(vetor, n);

    return 0;
}
