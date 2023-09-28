#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int nsp=n-1;
    int b=64;
    for(int i=1;i<=n;i++)
    {
        int a=i-1;

        for(int k=1;k<=nsp;k++)     //spaces
            printf(" ");
        nsp--;
        for (int j=1;j<=i;j++)      //alphabets
            printf("%c",j+b);
        for(int l=a;l>=1;l--)       //decreasing alphabetd
            printf("%c",b+l);
        printf("\n");
    }
    return 0;
}