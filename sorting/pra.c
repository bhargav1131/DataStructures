// bubble sort practice
#include <stdio.h>

void print(int a[], int n){
    int i;
    printf("->");
    for(i=0; i<n; i++){
        printf("%3d", a[i]);
    }
    printf("\n");
}

void selection_sort(int a[], int n){
    int index, i, j, temp;
    for(i=0; i< n-1; i++){
        index = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[index])
                index = j;
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}

int main()
{
    int arr[] = {3, 2, 1, 11, 9, 8, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    selection_sort(arr, n);
    print(arr, n);
    return 0;
}