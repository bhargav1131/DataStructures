//code to add a node at the end of a linked list
// without traversing
struct node{
    int data;
     struct node *link;
};

struct node *add_at_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    ptr -> link = temp;
    return temp;
}

//node insertion code to insert at any position
void add_at_pos(struct node *head, int data, int pos){
    struct node *current = head;
    struct node *new = malloc(sizeof(struct node));
    new -> data = data;
    new -> link = NULL;

    pos--;
    while(pos != 1){
        current = current -> link;
        pos --;
    }
    new -> link = current -> link;
    current -> link = new;
}