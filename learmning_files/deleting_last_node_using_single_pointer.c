#include <stdio.h>
#include <stdlib.h>
#include "vimdhayak.h"

void del_last02(struct node *head){
    if(head == NULL){
        printf("\nLinked list is already empty");
    }
    else if (head -> link == NULL){
        free(head);
        head = NULL;
    }
    else {
       struct node *temp = head;
       while(temp -> link -> link != NULL){
           temp = temp -> link;
       }
       free(temp -> link);
       temp -> link = NULL;
    }
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

    printf("Printing the linked list ->\n");
    struct node *print = head;
    while(print != NULL){
        printf("%2d", print -> data);
        print = print -> link;
    }
    printf("\nPrinting the linked list after deletion ->\n");
    del_last02(head);
    struct node *print2 = head;
    while(print2 != NULL){
        printf("%2d", print2 -> data);
        print2 = print2 -> link;
    }
return 0;
}