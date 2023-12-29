#include "header.h"

void InitQueue(Queue* q)
{
    q->front = NULL;
    q->rear = NULL;
}

int EmptyQueue(Queue* q)
{
    return q->front == NULL;
}

void Enqueue(Queue* q, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode -> data = data;
    newNode -> next = NULL;
    
    if(EmptyQueue(q)){
        q->front = newNode;
        q->rear = newNode;
    }
    else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int Dequeue(Queue* q)
{
    Node* tmp;
    int data;

    if(EmptyQueue(q)){
        printf("Error\n");
        return 0;
    }
    tmp = q -> front;
    data = tmp -> data;
    q -> front = tmp -> next;

    if(q->front == NULL){
        q->rear == NULL;
    }

    free(tmp);
    
    return data;
}

void PrintQueue(Queue* q)
{
    while (!EmptyQueue(q)){
        printf("%d", Dequeue(q));
    
        if(!EmptyQueue(q)){
            printf(" -> ");
        }
    }
    printf("\n");
}