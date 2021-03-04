#include<stdio.h>
int main()
{int n,i,j;
printf("enter n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
printf(" ");
for(j=1;j<=i+1;j++)
{printf("%d",j);
}
j=j-2;
for(;j>=1;j--)
{printf("%d",j);
}
printf("\n");}

for(i=1;i<n;i++)
{
    for(j=0;j<i;j++)
        printf(" ");
    for(j=0;j<n-i;j++)
        printf("%d",j+1);
    for(;j>1;j--)
        printf("%d",j-1);
    printf("\n");
}
return 0;
}
