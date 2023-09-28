#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int nsp=0,nst=n;    //nsp=number of spaces    //nst=number of stars
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nst;j++)
            printf("*");
        for(int k=1;k<=nsp;k++)
            printf(" ");
        for(int l=1;l<=nst;l++)
            printf("*");
        nsp+=2;
        nst-=1;
        printf("\n");
    }
    return 0;
}