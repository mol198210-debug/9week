#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int sum = 0;
    double average = 0.0;
    
    while(1){
        scanf("%d",&n);
        if (n == 0){
            break;
        }
        sum += n;
        cnt++;
    }
    if(cnt > 0){
        average = (double)sum/cnt;
    }
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", average);

    return 0;
}