#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int sum = 0;
    double avg = 0.0;
    
    while(cnt<5){
        scanf("%d",&n);
        sum += n;
        cnt++;
    }
    avg = (double)sum/cnt;
    printf("sum : %d\n",sum);
    printf("avg : %.1f\n",avg);
    return 0;
}