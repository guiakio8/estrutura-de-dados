#include <stdio.h>

void troca(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int particao(int array[], int baixo, int alto) {
    int pivo = array[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        if (array[j] < pivo) {
            i++;
            troca(&array[i], &array[j]);
        }
    }
    troca(&array[i + 1], &array[alto]);
    return (i + 1);
}

void quickSort(int array[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particao(array, baixo, alto);
        quickSort(array, baixo, pi - 1);
        quickSort(array, pi + 1, alto);
    }
}

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int data[] = {8, 7, 6, 1, 0, 9, 2, 10, 12, 82, 19, 18};
    int n = sizeof(data) / sizeof(data[0]);
    quickSort(data, 0, n - 1);
    printf("Array ordenado em ordem crescente: \n");
    imprimirArray(data, n);
}
