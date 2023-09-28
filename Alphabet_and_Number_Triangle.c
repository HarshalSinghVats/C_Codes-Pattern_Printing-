#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=64;
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)  printf("%d ",j);
            
            else    printf("%c ",j+a);
        }
        printf("\n");
    }
    return 0;
}