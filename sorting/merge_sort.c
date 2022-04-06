#include <stdio.h>
#include <stdlib.h>

void print(int a[], int n)
{
    int i;
    printf("(");
    for(i=0; i<n; i++)
    {
        printf("%3d", a[i]);
    }
    printf(" )");
}

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[20];
    while(i<=mid && j<= high)
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for(k=low; k<=high; k++)
    {
        a[k] = b[k];
    }  
}

void merge_sort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}


int main()
{
    printf(" \n                                  MERGE SORTING    ");
    int arr[] = {1, 3, 2, 4, 9, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n-> Printing array before sorting: ");
    print(arr, n);
    printf("\n\nCalling merge sort function...\n");
    merge_sort(arr, 0, 6);
    printf("\n-> Printing the array after sorting: ");
    print(arr, n);
    return 0;
}