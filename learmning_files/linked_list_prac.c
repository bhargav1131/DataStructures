#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}

void print(struct node *head){
    if(head == NULL){
        printf("\nlinked list is already empty");
    }
    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%3d", ptr -> data);
        ptr = ptr -> link;
    }
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr,02);
    ptr = add_end(ptr,03);
    ptr = add_end(ptr,04);
    ptr = add_end(ptr,05);

    print(head);
}