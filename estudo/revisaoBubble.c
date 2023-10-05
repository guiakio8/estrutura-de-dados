#include <stdio.h>

void bubble(int vetor[], int n){
    int k,j,aux;
    int i;

    for (k = 0; k < n; k++)
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
    for (i = 0; i < n; i++)
    {
        printf(" %d", vetor[i]);
    }
    
}


int main()
{
    int vetor[7] = {9,5,12,3,4,8,34};
    int n = 7;

    bubble(vetor, n);


    return 0;
}
