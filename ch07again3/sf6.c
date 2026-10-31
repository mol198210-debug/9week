#include <stdio.h>

int main(){
    int i,j,n;
    char cnt = 'A';
    int num = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf("%d ",num);
            num++;
        }for(j=1;j<=i;j++){
            printf("%c ",cnt);
            cnt++;
        }
        printf("\n");
    }
}