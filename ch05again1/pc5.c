#include <stdio.h>

int main(){
    int n;
    int MAX = 0;
    int MIN = 101;
    
    while(1){
        scanf("%d",&n);
        if(n >= 1 && n <= 100){
            if(MAX < n){
                MAX = n;
            }else if(n < MIN){
                MIN = n;
            }
        }
        if(n == 0){
            break;
        }
    }
    printf("MAX = %d\n", MAX);
    printf("MIN = %d\n", MIN);
    
    return 0;
}