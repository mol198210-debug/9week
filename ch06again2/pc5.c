#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int Even = 0;
    
    while(cnt<10){
        scanf("%d",&n);
        if(n%2==0){
            Even++;
        }
        cnt++;
    }
    printf("Even numbers = %d",Even);
    return 0;
}