#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

// methods
int isFull(struct queue *q){
    if(q->r == q->size-1)
    return 1;
    else 
        return 0;
}
//--------------------------
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}
//----------------------------
void enqueue(struct queue *q, int data){
    if(isFull(q)){
        printf("\nNo more space to add elements !");
    }
    else{
    q -> r++;
    q -> arr[q -> r] = data;
    printf("The enqueued element is %d\n", data);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("\nNo elements to be removed from the queue...");
    }
    else{
        q -> f++;
        a = q-> arr[q -> f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 25;
    q.f = q.r = 0;
    q.arr = (int *) malloc(q.size * sizeof(int));

    enqueue(&q, 01);
    enqueue(&q, 02);
    enqueue(&q, 03);
    enqueue(&q, 04);
    enqueue(&q, 05);
return 0;

}