#include <stdio.h>

int main(){
    int n,i,j,t;
    scanf("%d",&n);
    if(n<=10 && n>0){
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                printf("# ");
            }  
            printf("\n");
        }
        for(i=1;i<=n-1;i++){
            for(j=1;j<=i*2;j++){
                printf(" ");
            }
            for(t=n-i;t>=1;t--){
                printf("# ");
            }
            printf("\n");
        }
    }
}
