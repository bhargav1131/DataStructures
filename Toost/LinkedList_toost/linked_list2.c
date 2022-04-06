#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add(struct node *head, int info)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = info;
    temp->link = NULL;

    head->link = temp;
    return temp;
}

void printData(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("Linked list is already empty");
    }
    while (ptr != NULL)
    {
        printf("%3d", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

struct node *del(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\nLinked list already empty");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
    return head;
}

struct node *delAnyPos(struct node *head, int pos)
{
    printf("Printing data after deleting the element at position %d..\n", pos);
    struct node *current = head;
    struct node *prev = head;
    if (head == NULL)
    {
        printf("\nList is already empty");
    }
    else if (pos == 1)
    {
        head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (pos != 1)
        {
            prev = current;
            current = current->link;
            pos--;
        }
        prev->link = current->link;
        free(current);
        current = NULL;
    }
    return head;
}

int count = 0;
void counting(struct node *head){
    if(head == NULL){
        printf("\nList is empty");
    }
    else{
        while(head != NULL){
            head = head -> link;
            count ++;
        }
    }
    printf("\n %d number of elements is present in the list", count);
}

int search(struct node *head, int val){
int flag = -1;
int var = 1;
    if(head == NULL){
        printf("\nList is empty");
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if(ptr -> data == val){
            flag = 1;
            break;
        }
        var++;
        ptr = ptr -> link;         
    }    
    printf("\n%d found at position %d", val, var);
return flag;    
}
    
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 01;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add(ptr, 02);
    ptr = add(ptr, 03);
    ptr = add(ptr, 04);
    ptr = add(ptr, 05);
    ptr = add(ptr, 06);
    ptr = add(ptr, 07);

    printData(head);
    // head = delAnyPos(head, 3);
    // printData(head);
    // counting(head);

    int receive = search(head, 9);
    printf("\n%2d", receive);
    return 0;
}