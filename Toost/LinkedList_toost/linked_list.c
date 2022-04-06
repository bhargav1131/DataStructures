#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty");
    }
    struct node *trev = head;
    printf("\nPrinting the data of the linked list...\n");
    while (trev != NULL)
    {
        printf("%3d", trev->data);
        trev = trev->link;
    }
}

struct node *add_at_beg(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    temp->link = head;
    head = temp;
    return head;
}

struct node *insert_at_pos(struct node *head, int data, int pos)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node *ptr = head;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    temp->link = ptr->link;
    ptr->link = temp;

    return head;
}

struct node *delete_beg(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 05;
    head->link = NULL;

    struct node *ptr = head;
    head = add_at_beg(head, 04);
    head = add_at_beg(head, 03);
    head = add_at_beg(head, 02);
    head = add_at_beg(head, 01);
    // head = insert_at_pos(head, -1, 3);

    print(head);
    head = delete_beg(head);
    print(head);
    return 0;
}