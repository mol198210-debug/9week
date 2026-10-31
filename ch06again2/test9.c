#include <stdio.h>

int main(){
    int n,i,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(t=1;t<=n;t++){
            printf("(%d, %d) ",i,t);
        }
        printf("\n");
    }
    return 0;
}