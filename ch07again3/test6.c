#include <stdio.h>

int main(){
    int n,i,j,t;
    int cnt = 1;
    scanf("%d",&n);
    if(n<=10 && n>0){
        for(i=0;i<n;i++){
            for(t=0;t<i*2;t++){
                printf(" ");
            }
            for(j=n-i;j>=1;j--){
                printf("%d ",cnt);
                cnt++;
            }
            
            printf("\n");
        }
    }
}
