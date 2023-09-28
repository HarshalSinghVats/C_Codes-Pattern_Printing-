#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of columns in pattern : ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}