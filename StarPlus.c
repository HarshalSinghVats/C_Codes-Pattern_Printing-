#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows in pattern (odd) : ");
    scanf("%d",&n);
    m=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==m || i==m)    printf("*");
            else    printf(" ");
        }
        printf("\n");
    }
    return 0;
}