#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=n;
        for(int j=1;j<=n;j++)
        {
            if((i==j) || (i==a))
            {
                printf("*");
                a--;
            }      
            else    
            {
                printf(" ");
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}