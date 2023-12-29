#ifndef __HEADER_H__
#define __HEADER_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    struct _node* next;
    int data;
} Node;

typedef struct _queue
{
    Node* front;
    Node* rear;
} Queue;

void InitQueue(Queue* q);
int EmptyQueue(Queue* q);
void Enqueue(Queue* q, int data);
int Dequeue(Queue* q);
void PrintQueue(Queue* q);

#endif