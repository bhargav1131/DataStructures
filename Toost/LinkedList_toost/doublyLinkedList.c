#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *beginning(struct node *head, int info){
    struct node *new = malloc(sizeof(struct node));
    new -> data = info;
    new -> prev = NULL;
    new -> next = NULL;

    new -> next = head;
    head -> prev = new;
    head = new;

    return head;
}

struct node *end(struct node *head, int info){
    struct node *new = malloc(sizeof(struct node));
    new -> data = info;
    new -> prev = NULL;
    new -> next = NULL;
    struct node *ptr = head;
    ptr -> next = new;
    new -> prev = ptr;

    return new;
}

void printData(struct node *head){
    printf("\n");
    if(head == NULL){
        printf("\nList is empty");
    }
    else{
        while(head != NULL){
            printf("%3d", head -> data);
            head = head -> next;
        }
    }
}

struct node *addAtPos(struct node *head, int data, int pos){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> prev = NULL;
    temp -> next = NULL;

    struct node *p = head;
    pos--;
    while(pos != 1){
        p = p -> next;
        pos--;
    }
    temp -> next = p -> next;
    temp -> prev = p;
    p -> next = temp;
    printf("\n  %d is inserted at position %d..", data, pos);

    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> prev = NULL;
    head -> next = NULL;

    // head = beginning(head, 04);
    // head = beginning(head, 03);
    // head = beginning(head, 02);
    // head = beginning(head, 01);

    struct node *ptr = head;
    ptr = end(ptr, 02);
    ptr = end(ptr, 03);
    ptr = end(ptr, 04);
    ptr = end(ptr, 05);
    printData(head);
    head = addAtPos(head, 7, 3);
    printData(head);
    return 0;
}