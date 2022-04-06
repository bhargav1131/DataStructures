// inserting node at a certain position
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
     struct node *link;
};

//code to add node at end
struct node *add_at_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    ptr -> link = temp;
    return temp;
}

//node insertion code
struct node *add_at_pos(struct node *head, int data, int pos){
    struct node *current = head;
    struct node *new = malloc(sizeof(struct node));
    new -> data = data;
    new -> link = NULL;

    pos--;
    while(pos != 1){
        current = current -> link;
        pos --;
    }
    new -> link = current -> link;
    current -> link = new;

    return head;
}

// main function
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node* ptr = head;
    ptr = add_at_end(ptr, 02);
    ptr = add_at_end(ptr, 03);

    struct node *p = head;
    while (p != NULL){
        printf("%2d", p -> data);
        p = p -> link;
    }
    printf("\nInserting node at position 3...\n");
    head = add_at_pos(head, 07, 3);
    struct node *pt = head;
    while (pt != NULL){
        printf("%2d", pt -> data);
        pt = pt -> link;
    }
return 0;
}