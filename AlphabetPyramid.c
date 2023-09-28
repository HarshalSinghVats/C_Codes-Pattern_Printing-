#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int nsp=3;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
            printf(" ");
        nsp--;
        for(int k=1;k<=a;k++)
            printf("%c",(64+k));
        a=a+2;
        printf("\n");
    }
    return 0;
}