#include<stdio.h>
int main(){
    int n;
    printf("Enter max number in pattern : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        for(int k=a-1;k>=1;k--){
            printf("%d",k);
        }
        a++;
        printf("\n");
    }
    return 0;
}