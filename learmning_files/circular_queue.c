#include <stdio.h>
#include <stdlib.h>

struct cir_queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct cir_queue *q){
    if(q -> f == q -> r){
        return 1;
    }
    return 0;
}

int isFull(struct cir_queue *q){
    if( (q-> r + 1) % q -> size == q-> f){
        return 1;
    }
    return 0;
}

void enqueue(struct cir_queue *q, int val){
    if(isFull(q)){
        printf("\nSorry ! The queue is already full");
    }
    else{
        q -> r = (q -> r + 1) % q -> size;
        q -> arr[ q -> r] = val;
        printf("\nThe enqueued element is %d", val);
    }
}

int dequeue(struct cir_queue *q){
    int a = -1;
    if(isEmpty(&q)){
        printf("\nOops ! The queue is already empty. Please insert some elements first");
    }
    else{
    q -> f = (q -> f + 1) % q -> size;
    a = q -> arr[q -> f];
    }
    return a;
}

int main(){
    struct cir_queue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = malloc(q.size * sizeof(int));
    enqueue(&q, 01);
    enqueue(&q, 02);
    enqueue(&q, 03);
    enqueue(&q, 04);
    // enqueue(&q, 05);
}