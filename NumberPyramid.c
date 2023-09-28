#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int nsp=3;  //number of spaces
    int a=1;   //limiting value to print integers
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
            printf(" ");
        nsp--;
        for(int k=1;k<=a;k++)
            printf("%d",k);
        a=a+2;
        printf("\n");
    }
    return 0;
}