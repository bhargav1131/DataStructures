#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void no_of_nodes(struct node *head){
    int count = 0;
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    
    while (ptr != NULL) {
       count ++;
       ptr = ptr -> link;
    }
    printf("\nThere are %d no. of nodes in the linked list", count);
}

int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 48;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 56;
    current -> link = NULL;
    head -> link -> link = current;
    
    no_of_nodes(head);

return 0;
}