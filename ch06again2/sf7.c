#include <stdio.h>

int main(){
    int i,n;
    int t = 2;
    for(i=1;i<=5;i++){
        for(n=t;n<t+5;n++){
            printf("%d ",n);
               
        }
        t++; 
        printf("\n");
    }
}