#include <stdio.h>

int main(){
    int n,i,j,t;
    
    scanf("%d",&n);
    if(n<=10 && n>0){
    for(i=1;i<=n;i++){
        int cnt = 1;
            for(j=2*(n-i);j>=1;j--){
                printf(" ");
            }
            for(t=n;t>=n-i+1;t--){
                
                printf("%d ",cnt);
                cnt++;
            }
            printf("\n");
        }
    }
}
