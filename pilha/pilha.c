#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct 
{
    int itens[MAX_SIZE];
    int top;
}Pilha;

void inicializa(Pilha *pilha){
    pilha->top = -1;
}

int estaVazia(Pilha *pilha){
    return pilha->top == -1;
}

int estaCheia(Pilha *pilha){
    return pilha->top == MAX_SIZE - 1;
}

void inseri(Pilha *pilha, int data){
    if (estaCheia(pilha))
    {
        printf("A pilha está cheia\n");
    }
    else
    {
        pilha->itens[++pilha->top] = data;
    }
}

int apagar(Pilha *pilha){
    if (estaVazia(pilha))
    {
        printf("A pilha esta vazia\n");
        return -1;
    }
    else
    {
        return pilha->itens[pilha->top--];
    }
}

int main(int argc, char const *argv[])
{
    Pilha pilha;
    inicializa(&pilha);
    char nome[50];
    int qtd;


    printf("Nome: ");
    scanf(" %s", nome);

    printf("\nQuantidade de pecas: ");
    scanf(" %d", &qtd);
    
    for (int i = 1; i <= qtd; i++)
    {
        inseri(&pilha, i);
    }

    printf("%s\n", nome);
    for (int j = 0; j < qtd; j++)
    {
        printf("%d\n", pilha.itens[j]);
    }


    return 0;
}
