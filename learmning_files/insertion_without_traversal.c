// inserting node at the end without traversing
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}; 

struct node * add_at_end(struct node *ptr, int info){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = info;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}

int main (void){
    struct node *head = malloc (sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 02);
    ptr = add_at_end(ptr, 03);
    ptr = add_at_end(ptr, 04);
    ptr = add_at_end(ptr, 05);

    ptr = head;

    printf("\nPrinting the linked list without traversal..\nhuehuehue\n");
    while(ptr != NULL){
        printf("%3d", ptr -> data);
        ptr = ptr -> link;
    }
return 0;
}