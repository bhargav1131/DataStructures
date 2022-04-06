#include <stdio.h>
// inserting data at the beginning of an array

int add_beg(int a[], int n, int data){
    int i; 
    for(i=n-1; i>=0; i--){
        a[i+1]= a[i];
    }
    a[0] = data;
    return n+1;
}

int main(){
    int arr[10], n, i;
    printf("\nHow many elements? ");
    scanf("%d", &n);
    printf("\nEnter the %d elements ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    n = add_beg(arr, n, 20);
    for(i=0; i<n; i++)
        printf("%3d", arr[i]);
return 0;
}