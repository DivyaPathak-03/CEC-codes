#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d",i+1-j);
        }
        printf("\n");
    }

}
