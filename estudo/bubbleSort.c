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
    

}


int main(int argc, char const *argv[])
{
    int n, i, x;
    int vetor[n];

    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &n);
    

    for (i = 0; i <= n; i++)
    {
        printf("Digite os valores do vetor: ");
        scanf(" %d", &vetor[i]);
    }

    bubbleSort(vetor, n);

    
    for (x = 0; x <= n; x++)
    {
        printf("%d ", vetor[x]);
    }
        


    return 0;
}
