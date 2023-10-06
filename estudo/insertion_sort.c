#include <stdio.h>

void insertion(int vetor[], int n)
{
    int i, j, key;

    for (i = 0; i < n; i++)
    {
        key = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > key)
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int vetor[5] = {56,34,55,90,32};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int i;

    insertion(vetor, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    

    return 0;
}
