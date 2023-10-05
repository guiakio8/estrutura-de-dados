#include <stdio.h>

void bubble(int vetor[], int tam)
{
    int pos, obj, aux;
    int i;

    for (pos = 0; pos < tam; pos++)
    {
        for (obj = 0; obj < tam - 1; obj++)
        {
            if (vetor[obj] > vetor[obj + 1])
            {
                aux = vetor[obj];
                vetor[obj] = vetor[obj + 1];
                 vetor[obj + 1] = aux;
            }
        }
    }
    for (i = 0; i < tam; i++)
    {
        printf(" %d", vetor[i]);
    }
}

int main()
{
    int tam, i;

    printf("Tamanho: ");
    scanf(" %d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Array: ");
        scanf(" %d", &vetor[i]);
    }
    
    bubble(vetor, tam);

    return 0;
}
