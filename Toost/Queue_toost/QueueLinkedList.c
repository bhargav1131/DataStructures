#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *f;
struct node *r;

void enqueue(int val){
    struct node *new = malloc(sizeof(struct node));
    if(new == NULL){
        printf("\nqueue is full");
    }
    else{
        new -> data = val;
        new -> link = NULL;
        if(f == NULL){
            f = r = new;
        }
        else{
            r -> link = new;
            r = new;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node *ptr = f;
    if(f == NULL){
        printf("\nQueue is already empty");
        exit(1);
    }
    f = f -> link;
    val = ptr -> data;
    free(ptr);
    ptr= NULL;

    return val;
}

void displayData(){
    struct node *trev = f;
    printf("\nPrinting the data of the queue: \n");
    while(trev != NULL){
        printf("%3d", trev -> data);
        trev = trev -> link;
    }
}

int main()
{
    enqueue(01);
    enqueue(02);
    enqueue(03);
    enqueue(04);
    enqueue(05);
    displayData();
    printf("\nDequeuing %d", dequeue());
    printf("\nDequeuing %d", dequeue());
    displayData();
    return 0;
}