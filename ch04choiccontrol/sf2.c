#include <stdio.h>

int main(){
    int height,weight,total;
    printf("몸무게 + 100 - 키는 비만수치 공식 키와 몸무게 입력:");
    scanf("%d %d",&height, &weight);
    total = weight + 100 - height;
    if (total < 0)
    printf("%d",total);
    else
    printf("%d\nObesity\nNeed control",total);
}