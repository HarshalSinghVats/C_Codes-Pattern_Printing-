#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int nst=1;  //number of stars
    int nsp=3; //number of spaces  
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=nst;j++)
            printf("*");
        nst=nst+2;
        printf("\n");
    }
    return 0;
}