#include <stdio.h>

int main(){
    int n,num,sum;
    scanf("%d",&n);
    num = 1;
    sum = 0;
    while(num <= n){
        sum += num;
        num++;
    }
    printf("%d\n",sum);
    return 0;
}