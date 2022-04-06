#include <stdio.h>
void add_at_pos(int a[], int b[], int n, int data, int pos){
    int i;
    int index = pos-1;
    for(i=0; i<index; i++)
        b[i] = a[i];
    b[index] = data;
    int j;
    for(i= index +1,j = index; j<n,i<n+1; i++, j++)
        b[i] = a[j];
}
int main(){
    int a[8] = {1, 2, 3, 4, 6, 7, 8};
    int pos = 5; int data = 5;
    int size = sizeof(a)/sizeof(a[0]);
    int b[size + 1];
    
    int i;
    add_at_pos(a,b,size, data, pos);
    for(i=0; i<size+1; i++)
        printf("%2d", b[i]);
}