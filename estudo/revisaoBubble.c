#include <stdio.h>

void bubble(int vetor[], int n)
{
    int i, j, aux;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

// Metodo main
int main(int argc, char const *argv[])
{
    int vetor[5] = {4,8,2,5,0};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int i;

    bubble(vetor,n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    

    return 0;
}
