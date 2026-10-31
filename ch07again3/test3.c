#include <stdio.h>

int main(){
    int n,i,j,t;
    scanf("%d",&n);
    if(n<=10 && n>0){
    for(i=1;i<=n;i++){
            for(j=2*(n-i);j>=1;j--){
                printf(" ");
            }
            for(t=1;t<=2*i-1;t++){
                printf("*");
            }
            printf("\n");
        }
    }
}
