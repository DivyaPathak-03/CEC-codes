#include <stdio.h>
#include <stdlib.h>
float median(int [],int);
void swap(int *, int *);
int partion(int [], int , int  );
void quick(int [], int , int );

int main()
{
    int i,n;
    float med;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick(a,0,n-1);
    med=median(a,n);
    printf("Median = %f",med);
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

    int pivot=a[r];
    int i = p - 1;
    int j;

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

float median(int a[],int n)
{
    if(n%2!=0)
        return a[n/2];
    else
        return (float)(a[n/2]+a[(n/2)-1])/2;
}
