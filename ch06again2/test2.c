#include <stdio.h>

int main(){
    int n,i,t;
    scanf("%d %d",&n,&i);
    if(n<=100){
        if(n>i){
            for(t=i;t<=n;t++){
                printf("%d ",t);
            }
        }
        if(n<i){
            for(t=n;t<=i;t++){
                printf("%d ",t);
            }
        }
    }
}