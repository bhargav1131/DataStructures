// inserting data at the end of an array 
// when array is not full
#include <stdio.h>

int add_at_end(int a[], int freePos, int data){
    a[freePos] = data;
    freePos++;
    return freePos;
}

int main(void){
    int a[10];
    int i, freePos, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements: ");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    freePos = n;
    freePos = add_at_end(a, freePos, 5);
    for(i=0; i<freePos; i++){
        printf("%3d", a[i]);
    }
return 0;

}