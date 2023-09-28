#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=65;
        for(int j=1;j<=n;j++)
        {
            if(i+j>=(n+1))  
            {   
                printf("%c",a);
                a++;
            }
            else    printf(" ");
        }
        printf("\n");
    }
    return 0;
}