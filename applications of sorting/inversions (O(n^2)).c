#include <stdio.h>
int inversionCount(int[],int);
int main()
{

    int i,n;
    int inv=0;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int a[n],t[n];
    printf("\nEnter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    inv= inversionCount(a,n);
    printf("\ninversions= %d",inv);
    return 0;

}

int inversionCount(int a[],int n)
{   int count=0;
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
               count++;
        }
    }
    return count;
}
