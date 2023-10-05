#include <stdio.h>

void bubbleSort(int vetor[], int n)
{
    int k, j, aux;
    int x;

    for (k = 0; k < n; k++) // loop que percorre cada espaço do array
    {
        for (j = 0; j < n - 1; j++) 
        {                           
            if (vetor[j] < vetor[j + 1])    // Aqui o codigo ele vai determinar se ele vai fazer a ordenação
            {                               // de forma crescente ou decrescente
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

int main()
{
    int n;
    int i;

    printf("Valor n: ");
    scanf(" %d", &n);
    
    int vetor[n];

    for (i = 0; i < n; i++)
    {
        printf("Valor vetor: ");
        scanf(" %d", &vetor[i]);
    }
    
    bubbleSort(vetor, n);

    return 0;
}


