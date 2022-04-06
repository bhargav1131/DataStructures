#include <stdio.h>
#include <stdlib.h>
#include "vimdhayak.h"

struct node *del_list(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        temp = temp -> link;
        free(head);
        head = temp;
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
    new = add_at_end(new, 05);

    struct node *ptr = head;
    printf("\nPrinting the linked list...\n");
    while(ptr != NULL){
        printf("%2d", ptr -> data);
        ptr = ptr -> link;
    }
    head = del_list(head);
    if(head == NULL){
        printf("\nLinked list deleted successfully _/\\_");
    }
return 0;
}