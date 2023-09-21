#include <stdio.h>


int buscaSequencial(int matriz[][5], int linhas, int colunas, int valor, int *linhaEncontrada, int *colunaEncontrada) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return 1;  
            }
        }
    }
    return 0;  
}

int main() {
    int matriz[3][5] = {{1, 2, 3, 4, 5},
                       {6, 7, 8, 9, 10},
                       {11, 12, 13, 14, 15}};

    int valorProcurado;
    printf("Digite o valor que deseja encontrar: ");
    scanf("%d", &valorProcurado);

    int linhaEncontrada, colunaEncontrada;
    if (buscaSequencial(matriz, 3, 5, valorProcurado, &linhaEncontrada, &colunaEncontrada)) {
        printf("Valor encontrado na linha %d e coluna %d.\n", linhaEncontrada, colunaEncontrada);
    } else {
        printf("Valor não encontrado na matriz.\n");
    }

    return 0;
}