#include <stdio.h>

void print(int a[], int n)
{
    int i;
    printf("(");
    for(i=0; i<n; i++)
    {
        printf("%3d", a[i]);
    }
    printf(" )");
    printf("\n");
}

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[21];

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
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
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for(i=low; i<=high; i++)
    {
        a[i] = b[i];
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
    int a[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int n = sizeof(a)/ sizeof(a[0]);
    print(a,n);
    merge_sort(a, 0, n-1);
    print(a,n);
    return 0;
}