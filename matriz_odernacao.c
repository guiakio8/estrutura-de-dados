#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int matriz[3][4] = {
        {12, 45, 7, 23},
        {6, 78, 31, 1},
        {3, 56, 89, 9}};

    int m = 3;
    int n = 4;

    for (int i = 0; i < m; i++)
    {
        insertionSort(matriz[i], n);
    }

    printf("Matriz ordenada:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
