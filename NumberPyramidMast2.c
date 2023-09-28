#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows in pattern : ");
    scanf("%d",&n);
    int a=0,j=0;
    for(int i=1;i<=n;i++)
    {        
        for(a=1; a<=(n*2-1); a++)
        {
            if ((i>1)&& ((a>n-j) && (a<n+j)))  
                printf("  "); 
            else
            printf("%d ",a);        
        }
        j++;
        printf("\n");          
    }
    return 0;
}