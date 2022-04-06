#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *f = NULL;
struct node *r = NULL;

int isEmpty(){
    if(f==NULL){
        return 1;
    }
    return 0;
}

int isFull(struct node *temp){
    if(temp == NULL){
        return 1;
    }
    return 0;
}

void enqueue(int val){
    struct node *new = malloc(sizeof(struct node));
    if(isFull(new)){
        printf("\nQueue is full");
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

void dequeue(){
    int a = -1
    struct node *ptr = f;
    if(isEmpty()){
        printf("\nQueue is already empty");
        exit(1);
    }
    f = f -> link;
    a = ptr -> data;
    free(ptr);
    ptr = NULL;
    if(a>-1){
        printf("\n%d successfully deleted from the queue", a);
    }
}

void printData(){
    printf("\nPrinting data..\n");
    struct node *ptr = f;
    while(ptr != NULL){
        printf("%2d", ptr -> data);
        ptr = ptr -> link;
    }
}

int main()
{
    enqueue(01);
    enqueue(02);
    enqueue(03);
    enqueue(04);
    enqueue(05);

    printData();
    dequeue();
    dequeue();
    printData();
    
    return 0;
}