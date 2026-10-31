#include <stdio.h>

int main(){
    int i,n;
    int even = 0;
    int odd = 0;
    for(i=1;i<=10;i++){
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even : %d\n",even);
    printf("odd : %d\n",odd);
}