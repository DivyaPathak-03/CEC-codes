#include <stdio.h>
void msort(int[],int[],int,int);
void merge(int[],int[],int,int,int);
int main()
{

    int i,n;
    int inv=0,comp=0;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int a[n],t[n];
    printf("\nEnter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    msort(a,t,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;

}

void msort(int a[],int t[],int lb,int ub)
{   int mid=0;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        msort(a,t,lb,mid);
        msort(a,t,mid+1,ub);
        merge(a,t,lb,mid+1,ub);
    }
}
void merge(int a[],int t[],int lb,int mid,int ub)
{
    int i,j,k=lb,le=mid-1,n;
    while(lb<=le&&mid<=ub)
    {
        if(a[lb]<a[mid])
        {
            t[k]=a[lb];
            lb++;
            k++;
        }
        else
        {
            t[k]=a[mid];
            k++;
            mid++;
        }
    }
    while(lb<=le)
    {   t[k]=a[lb];
        k++;
        lb++;
    }
    while(mid<=ub)
    {   t[k]=a[mid];
        k++;
        mid++;
    }
    for(i=0;i<=ub;i++)
        a[i]=t[i];
}



