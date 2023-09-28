#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows (odd) in pattern : ");
    scanf("%d",&n);
    int a=1;
    int mid=n/2+1;
    int nsp=n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
            printf(" ");
        for(int j=1;j<=a;j++)
            printf("*");
        
        if(i>=mid)
        {
            nsp++;
            a=a-2;
        }
        else
        {
            nsp--;
            a=a+2;   
        }
        printf("\n");
    }
    return 0;
}