#include <stdio.h>

int main(){
    int i,n;
    for(i=1;i<=9;i++){
        for(n=2;n<=4;n++){
            printf("%d * %d = %2d   ",n,i,n*i);
        }
        printf("\n");
    }
}