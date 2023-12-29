#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void)
{
    Queue q;

    InitQueue(&q);

    for (int i=1; i<=10; ++i){
        Enqueue(&q, i);
    }

    PrintQueue(&q);

    return 0;
}