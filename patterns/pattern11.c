#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   for(j=0;j<n-i-1;j++)
        printf(" ");
        for(j=1;j<=2*i+1;j++)
        {   printf("*");
        }
        printf("\n");}

}
