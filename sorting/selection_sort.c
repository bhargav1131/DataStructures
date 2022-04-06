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
    int indOfMin, temp, j;
    printf("\n-> Executing selection sort...\n");
    for(int i=0; i< n-1; i++){
        indOfMin = i;
        for(int j = i+1; j<n; j++){
            if(a[j] < a[indOfMin])
                indOfMin = j;
        }
        temp = a[i];
        a[i] = a[indOfMin];
        a[indOfMin] = temp;
    }
}

int main()
{
    printf(" \n                                  SELECTION SORTING    ");
    // int arr[] = {1, 4, 3, 7,8, 9, 5};
    int arr[] = {1, 3, 2, 4, 9, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n-> Printing array before sorting...");
    print(arr, n);
    printf("\n-> Calling selection sort function...\n");
    selection_sort(arr, n);
    printf("\n-> Printing the array after sorting...\n");
    print(arr, n);
    return 0;
}