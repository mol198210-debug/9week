#include <stdio.h>

int main(){
    int n,i,j,t;
    char h = 'A';
    int cnt = 0;
    scanf("%d",&n);
    if(n<=10 && n>0){
    for(i=0;i<n;i++){
            for(j=n-i;j>=1;j--){
                printf("%c ",h);
                h++;
            }
            for(t=0;t<i;t++){
                printf("%d ",cnt);
                cnt++;
            }
            printf("\n");
        }
    }
}
