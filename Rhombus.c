#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    printf("Enter number of columns in pattern : ");
    scanf("%d",&m);    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i+j<=4 || i+j>=9)  printf(" ");
            else    printf("* ");
        }
        printf("\n");
    }
    return 0;
}