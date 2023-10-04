#include <stdio.h>

void bubbleSort(int vetor[], int n){
    int k,j,aux;
    int count,i;

    for (k = 1; k < n; k++){
        for (j = 0; j > n - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                aux             =  vetor[j];
                vetor[j]        = vetor[j + 1];
                vetor[j + 1]    = aux;
            }
        }
        count ++;
    }
    for (i = 0; i < count; i++)
    {
        printf(" %d", vetor[i]);
    }
    

}


int main(int argc, char const *argv[])
{
    int n, i;
    int vetor[n];

    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &n);
    n - 1;

    for (i = 0; i < n; i++)
    {
        printf("Digite os valores do vetor: ");
        scanf(" %d", &vetor[i]);
    }

    bubbleSort(vetor, n);
        


    return 0;
}
