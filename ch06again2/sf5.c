#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int three = 0;
    int five = 0;
    
    while(cnt<10){
        scanf("%d",&n);
        if(n%3==0){
            three++;
        }
        if(n%5==0){
            five++;
        }
        cnt++;
    }
    printf("Multiples of 3 : %d\n",three);
    printf("Multiples of 5 : %d\n",five);
    return 0;
}