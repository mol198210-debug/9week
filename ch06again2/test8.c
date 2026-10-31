#include <stdio.h>

int main(){
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= t; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}