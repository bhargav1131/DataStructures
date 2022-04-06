#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

// function to insert node in the linked list
void add_at_end(struct node *head, int info){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = info;
    temp -> link = NULL;

    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}

// function to print the linked list
void print_data(struct node *head){
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node *p = head;
    p = head;
    while(p != NULL){
        printf("\n%3d", p -> data);
        p = p -> link;
    }
}

int main(){
    // creating a linked list with three nodes
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 02;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 03;
    current -> link = NULL;
    head -> link -> link = current;

    // inserting  node at the end of the list
    add_at_end(head, 04);
    print_data(head);

return 0;
}