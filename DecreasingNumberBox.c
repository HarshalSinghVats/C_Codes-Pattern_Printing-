/*  print the following :
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else    return a;
}
int main(){
    int n,limit;
    printf("Enter maximum number : ");
    scanf("%d",&n);
    limit=(n*2)-1;
    for(int i=1;i<=limit;i++){
        for(int j=1;j<=limit;j++){
            int a=i,b=j;
            if(b>=n)    b=(n*2)-j;
            if(a>=n)     a=(n*2)-i;
            printf("%d ",(n+1)-min(a,b));
        }
        printf("\n");
    }
    return 0;
}
