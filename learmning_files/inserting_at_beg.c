// inserting a node at the beginning of a linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node * add_beg(struct node *head, int info){
    struct node *current = malloc(sizeof(struct node));
    current -> data = info;
    current -> link = NULL;

    current -> link = head;
    head = current;
    return head;
}
int main(void){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = 02;
    ptr -> link = NULL;
    head -> link = ptr;

    int data = 03;
    head = add_beg(head, data);
    struct node *point;
    point = head;
    while(point != NULL){
        printf("%3d", point -> data);
        point = point -> link;
    }

return 0;
}