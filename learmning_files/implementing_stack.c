// AUTHOR : BHARGAV PRATIM SHARMA
// STD: 3RD SEMESTER
// DATE: 07 DEC, 2021

#include <stdio.h>
# define  MAX 4
int stack_arr[MAX];
int top = -1;

void push(int data){
    if(top == MAX-1){
        printf("Stack overflow");
        return;
    }
    ++top;
    stack_arr[top] = data;
}

void print(){ 
    int i;
    if (top == -1){
        printf("\nStack underflow");
        return;
    }
    for(i=top; i>=0; i--){
        printf("%3d", stack_arr[i]);
    }

}

int main(){
    printf("\nPushing elements into the stack..");
    push(1);
    push(2);
    push(3);
    push(4);
    printf("\nPrinting the elements of the stack..\n");
    print();
}