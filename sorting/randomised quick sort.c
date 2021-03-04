#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
int partion(int [], int , int  );
void quick(int [], int , int );

int main()
{
    int i,n;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;

}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int a[], int p, int r)
{
    int pIndex = p + rand()%(r - p + 1);
    int pivot;
    int i = p - 1;
    int j;
    pivot = a[pIndex];
    swap(&a[pIndex], &a[r]);
    for (j = p; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }

    }
    swap(&a[i+1], &a[r]);

    return i + 1;
}

void quick(int a[], int p, int q)
{
    int j;
    if (p < q)
    {
        j = partion(a, p, q);
        quick(a, p, j-1);
        quick(a, j+1, q);
    }
}

