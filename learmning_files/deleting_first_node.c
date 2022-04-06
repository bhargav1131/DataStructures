#include <stdio.h>
#include <stdlib.h>
#include "vimdhayak.h"
//05 Dec, 2021
struct node *del_first(struct node *head){
    if(head == NULL){
        printf("\nLinked list is empty");
    }
    else {
       struct node *temp = head;
       head = head -> link;
       free(temp);
    }
return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 01;
    head -> link = NULL;

    struct node *new = head;
    new = add_at_end(new, 02);
    new = add_at_end(new, 03);
    new = add_at_end(new, 04);
    printf("\nPrinting the linked list -->");
    struct node *ptr = head;  
    while(ptr != NULL){
        printf("%2d", ptr -> data);
        ptr = ptr -> link;
    }

    printf("\nDeleting the first node of the linked list -->");
    head = del_first(head);
    struct node *current = head;
    while(current != NULL){
        printf("%2d", current -> data);
        current = current -> link;
    }
}