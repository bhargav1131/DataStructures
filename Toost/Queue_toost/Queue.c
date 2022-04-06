#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q -> front == q -> rear){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q -> rear == q -> size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("\nQueue is full");
    }
    else{
        q -> rear++;
        q -> arr[q -> rear] = val;
        printf("\nEnqueued data is %d",val);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("\nQueue is empty");
    }
    else{
        q -> front++;
        a = q -> arr[q -> front];
    }
    return a;
}

void displayData(struct queue *q){
    if(isEmpty(q)){
        printf("\nNo data to display");
    }
    printf("\nElements of the queue are: \n");
    for(int i=q->front+1; i<=q->rear; i++){
        printf("  %2d", q->arr[i]);
    }
}

int main()
{
    struct queue q;
    q.size = 50;
    q.front = q.rear = -1;
    q.arr= malloc(q.size * sizeof(int));
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    displayData(&q);
    printf("\n\n%d is dequeued from the queue", dequeue(&q));
    displayData(&q);
    return 0;
}