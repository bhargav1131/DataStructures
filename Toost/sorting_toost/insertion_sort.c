#include <stdio.h>

void printData(int a[], int n)
{
    printf("\nPrinting data of the array..");
    for(int i=0; i<=n-1; i++)
    {
        printf("%3d-->", a[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n)
{
    int key, i, j;
    for(i=1; i<=n-1; i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int a[] = {25, 17, 31, 13, 2};
    int n = sizeof(a)/sizeof(a[0]);
    printData(a, n);
    insertion_sort(a, n);
    printData(a, n);
    return 0;
}