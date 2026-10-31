#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int sum = 0;
    double avg = 0.0;
    while (1){
        scanf("%d",&n);
        if(n >=0 && n <= 100){
            sum += n;
            cnt++;
        }else{
            avg = (double)sum/cnt;
            break;
        }
    }
    printf("sum : %d\n",sum);
    printf("avg : %.1f\n", avg);
    return 0;
}