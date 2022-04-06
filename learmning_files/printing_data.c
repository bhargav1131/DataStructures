#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 

};

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

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 50;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 32;
    current -> link = NULL;
    head -> link -> link = current;

    printf("\nPrinting the damta...");
    print_data(head);

return 0;
}