#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// method to add node at the end of the list
struct node *add(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

    head->next = temp;
    temp->prev = head;
    return temp;
}

// method to print the data of the list
void print(struct node *head)
{
    if (head == NULL)
    {
        printf("\nEmpty list");
    }
    else
    {
        while (head != NULL)
        {
            printf("%2d", head->data);
            head = head->next;
        }
    }
    printf("\n");
}

// method to delete the first node
struct node *deleteFirst(struct node *head)
{
    struct node *store = head;
    head = head->next;
    head->prev = NULL;
    free(store);
    store = NULL;
    return head;
}

// method to delete the last node
struct node *deleteLast(struct node *head)
{
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp -> next = NULL;
    }
    return head;
}

struct node *deleteAnyPos(struct node *head, int pos){
    struct node *previous = head;
    struct node *current = head;
    if(pos == 1){
        head = current -> next;
        free(current);
        current = NULL;
    }
    else{
        while(pos != 1){
            previous = current;
            current = current -> next;
            pos--;
        }
        previous -> next = current -> next;
        current -> next = previous -> prev;
        free(current);
        current = NULL;
    }
    printf("Deleted data from %d position.", pos );
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 01;
    head->prev = NULL;
    head->next = NULL;

    struct node *ptr = head;
    ptr = add(ptr, 02);
    ptr = add(ptr, 03);
    ptr = add(ptr, 04);
    ptr = add(ptr, 05);
    ptr = add(ptr, 06);
    ptr = add(ptr, 07);
    ptr = add(ptr, 8);
    ptr = add(ptr, 9);

    print(head);
    head = deleteAnyPos(head, 5);
    print(head);
    return 0;
}