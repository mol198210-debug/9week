#include <stdio.h>

int main(){
    int n,m,i,t;
    scanf("%d %d",&n,&m);
    for(i=1;i<=9;i++){
        for(t=n;t>=m;t--){
            printf("%d * %d = %2d   ",t,i,t*i);
        }
        printf("\n");
    }
    return 0;
}