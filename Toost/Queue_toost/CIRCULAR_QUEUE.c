#include <stdio.h>
#include <stdlib.h>

//declaring the structure of a queue
struct circular_queue{
    int size;
    int front;
    int rear;
    int *arr;
};

// checking if the queue is empty
int isEmpty(struct circular_queue *q){
    if(q->rear == q-> front){
        return 1;
    }
    return 0;
}

//method to check if the queue is full
int isFull(struct circular_queue *q){
    if((q->rear+1)%q->size == q->front){
        return 1;
    }
    return 0;
}

//method to entry data into the queue
void enqueue(struct circular_queue *q, int value){
    if(isFull(q)){
        printf("\nSorry !The queue is full.");
    }
    else{
        q -> rear = (q -> rear+1)% q -> size;
        q -> arr[q -> rear] = value;
        printf("\n%d is successfully inserted into the queue..", value);
    }
}

//method to delete data from the queue
int dequeue(struct circular_queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("\nThere's nothing to be deleted from the queue");
    }
    else{
        q -> front = (q -> front + 1)% q -> size;
        a = q -> arr[q -> front];
    }
    return a;
}


void displayData(struct circular_queue *q){
    printf("\n");
    int i;
    if(isEmpty(q)){
        printf("\nNothing to print");
        return;
    }
    else{
        printf("\nPrinting all the elements of the circular queue-->");
        for(i=q->front+1; i<=q->rear; i=(i+1)%q->size){
            printf("%2d", q->arr[i]);
        }
    }
}


//driver method
int main()
{
    struct circular_queue q;
    q.front = q.rear = -1;
    q.size = 8;
    q.arr = malloc(q.size * sizeof(int));
  
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 7);
    printf("\n");
    printf("\nThe dequeued element is %d", dequeue(&q));
    printf("\nThe dequeued element is %d", dequeue(&q));
    printf("\nThe dequeued element is %d", dequeue(&q));
    printf("\n");
    enqueue(&q,8);
    enqueue(&q,-1);
    enqueue(&q,0);
    // displayData(&q);
    return 0;
}