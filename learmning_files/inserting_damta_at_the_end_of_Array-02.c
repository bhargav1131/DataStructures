// inserting data at the end of array when the array is full
#include <stdio.h>

int add_at_end(int a[], int b[], int freePos, int data, int n){
    int k;
    for(k=0; k<n; k++){
        b[k] = a[k];
    }
    b[freePos] = data;
    freePos ++;
    return freePos;
}

int main(void){
    int a[4], i, n;
    printf("\nHow many elements? ");
    scanf("%d",&n);

    printf("\nEnter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }
    int size = sizeof(a)/sizeof(a[0]);
    int freePos = n;

    if(n == size){
        int b[size + 3];
        freePos = add_at_end(a, b, freePos, 5, sizeof(a));
        for(i=0; i< freePos; i++){
            printf("%3d", b[i]);
        }

    }
return 0;
}