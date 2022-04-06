#include<stdio.h>
#include<stdlib.h>
#include "vimdhayak.h"

struct node *del_last(struct node *head){
    if(head == NULL){
        printf("\nList is already empty");
    }
    else if(head -> link ==NULL){
        free(head);
        head = NULL;
    }
    else {
       struct node *temp = head;
       struct node *temp2 = head;
       while(temp -> link != NULL){
           temp2 = temp;
           temp = temp -> link;
       }
       temp2 -> link = NULL;
       free(temp);
       temp = NULL;
    }
return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *new = head;
    new = add_at_end(new, 01);
    new = add_at_end(new, 71);
    new = add_at_end(new, 12);

    struct node *new1 = head;
    printf("\nPrinting the unmodified linked list -->");
    while(new1 != NULL){
        printf("%3d", new1 -> data);
        new1 = new1 -> link;
    }
    head = del_last(head);
    struct node *ptr = head;
    printf("\nPrinting the linked list after deleting the last node-->\n");
    while(ptr != NULL){
        printf("%3d", ptr -> data);
        ptr = ptr -> link;
    }
return 0;
}