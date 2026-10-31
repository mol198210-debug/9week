#include <stdio.h>

int main(){
    int i,n;
    for(i=2;i<=4;i++){
        for(n=1;n<=5;n++){
            printf("%d * %d = %2d   ",i,n,n*i);
        }
        printf("\n");
    }
}