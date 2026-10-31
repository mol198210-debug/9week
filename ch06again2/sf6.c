#include <stdio.h>

int main(){
    int n,t;
    int cnt = 0;
    int sum = 0;
    double avg = 0.0;
    scanf("%d",&t);
    while(cnt<t){
        scanf("%d",&n);
        sum += n;
        cnt++;
    }
    avg = (double)sum/t;
    if(avg >= 80){
        printf("avg : %.1f\n",avg);
        printf("pass");
    }else{
        printf("avg : %.1f\n",avg);
        printf("fail");
    }
    return 0;
}