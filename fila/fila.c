#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct
{
    int items[MAX];
    int front, rear;
} Queue;

// Função para inicializar a fila
void init(Queue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

// Função para verificar se a fila está vazia
int isEmpty(Queue *queue)
{
    return queue->front == -1;
}

// Função para verificar se a fila está cheia
int isFull(Queue *queue)
{
    return (queue->rear + 1) % MAX == queue->front;
}

// Função para adicionar um elemento à fila
void enqueue(Queue *queue, int data)
{
    if (isFull(queue))
    {
        printf("Fila cheia");
        return;
    }
    if (isEmpty(queue))
    {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX;
    queue->items[queue->rear] = data;
}

// Função para remover um elemento da fila
int dequeue(Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Fila vazia");
        return -1;
    }

    int removedItem = queue->items[queue->front];
    if (queue->front == queue->rear)
    {
        queue->front = -1;
        queue->rear = -1;
    }
    else
    {
        queue->front = (queue->front + 1) % MAX;
    }

    return removedItem;
}

int main(int argc, char const *argv[])
{
    Queue queue;
    init(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Elemento removido %d\n", dequeue(&queue));
    printf("Elemento removido %d\n", dequeue(&queue));
    printf("Elemento removido %d\n", dequeue(&queue));

    dequeue(&queue);

    return 0;
}
