#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        for(int i=65;i<(65+n);i++)
            printf("%c ",i);
        printf("\n");
    }
    return 0;
}