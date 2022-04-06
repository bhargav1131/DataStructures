#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *f = NULL;
struct node *r = NULL;

void print(){
    struct node *ptr = f;
    printf("\nPrinting the elements of the queue..");
    while(ptr != NULL){
        printf("\n%d", ptr -> data);
        ptr = ptr -> link;
    }
}

void enqueue(int info){
    struct node *new = malloc(sizeof(struct node));
    if(new == NULL){
        printf("\nQueue is already full");
    }
    else{
    new -> data = info;
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
        printf("\nQueue is empty !");
    }
    else{
        f = f -> link;
        val = ptr -> data;
        free(ptr);
    }
    return val;
}
main(){
    enqueue(42);
    enqueue(41);
    enqueue(43);
    print();
}