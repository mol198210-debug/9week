#include <stdio.h>

int main(){
    int n,i,t;
    int sum = 0;
    scanf("%d",&n);
    if(n<=100 && n>0){
        for(i=1;i<=n;i++){
            scanf("%d",&t);
            sum += t;
        }
    }
    printf("%.2lf",(double)sum/n);
}