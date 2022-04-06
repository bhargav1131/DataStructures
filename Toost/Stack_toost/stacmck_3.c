#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
} *top = NULL;

void push(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    temp -> link = top;
    top = temp;
}

void pop(){
    struct node *del = top;
    printf("\ndeleted data is %d", del -> data);
    top = top -> link;
    free(del);
    del = NULL;
}

void printData(){
    struct node *trev = top;
    printf("\nThe stack elements are:\n");
    while(trev != NULL){
        printf("%2d", trev -> data);
        trev = trev -> link;
    }
}

int main()
{
    push(1);   
    push(2);  
    push(3);   
    push(4);
    printData();   
    pop();
    printData();   
    return 0;
}
