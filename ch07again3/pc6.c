#include <stdio.h>

int main(){
    int i,j;
    char cnt = 'a';
    int num = 1;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c ",cnt);
            cnt++;
        }
        for(j=1;j<=5-i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}