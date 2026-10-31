#include <stdio.h>

int main(){
    int i,n;
    for(i=1;i<=5;i++){
        for(n=i;n<i+5;n++){
            printf("%d ",i);    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++){
        for(n=1;n<=5;n++){
            printf("%d ",n);    
        }
        printf("\n");
    }
}