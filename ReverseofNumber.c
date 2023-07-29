#include<stdio.h>
int main()
{
    int num,lastdigit=0;
    printf("Enter number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        lastdigit=lastdigit*10;
        lastdigit=lastdigit+num%10;
        num=num/10;
        
        
    }
    printf("Reverse of Number : %d",lastdigit);
    return 0;
}