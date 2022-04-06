#include <stdio.h>
#include <stdlib.h>
#include "vimdhayak.h"
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
    add_at_pos(head, 07, 3);
    struct node *pt = head;
    while (pt != NULL){
        printf("%2d", pt -> data);
        pt = pt -> link;
    }
return 0;
}