#include <stdio.h>

void printData(int a[], int n)
{
    printf("\nPrinting data of the array..");
    for(int i=0; i<=n-1; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int n)
{
    int temp,i,j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
}

int main()
{
    int a[] = {25, 17, 31, 13, 2};
    int n = sizeof(a)/sizeof(a[0]);
    printData(a, n);
    bubble_sort(a, n);
    printData(a, n);
    return 0;
}