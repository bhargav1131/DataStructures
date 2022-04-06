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

void selection_sort(int a[], int n)
{
    int index, i, j, temp;
    for(i=0; i<n-1; i++)
    {
        index = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[index])
            {
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}

int main()
{
    int a[] = {25, 17, 31, 13, 2};
    int n = sizeof(a)/sizeof(a[0]);
    printData(a, n);
    selection_sort(a, n);
    printData(a, n);
    return 0;
}