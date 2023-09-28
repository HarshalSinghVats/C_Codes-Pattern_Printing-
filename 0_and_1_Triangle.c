#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int a=1,b=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0))    printf("%d ",a);
            else    printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}