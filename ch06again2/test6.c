#include <stdio.h>

int main(){
    int n,i,t;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d",&n,&i);
    int max = (n>i)?n:i;
    int min = (n<i)?n:i;
    for(t=min; t<=max;t++){
        if(t%3==0 || t%5==0){
            sum += t;
            cnt++;
        }
    }
    printf("sum : %d\n",sum);
    printf("avg : %.1lf",(double)sum/cnt);
}