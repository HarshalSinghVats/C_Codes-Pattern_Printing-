#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    printf("Enter number of columns in pattern : ");
    scanf("%d",&m);
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=m;i++)
            printf("*");
        printf("\n");
    }
    return 0;
}