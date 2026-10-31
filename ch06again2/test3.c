#include <stdio.h>

int main(){
    int i,n;
    int sum = 0;
    scanf("%d",&n);
    for(i = 5; i <= n; i+=5){
        sum += i;
    }
    printf("%d",sum);
    return 0;
}