#include <stdio.h>
int main() {
    int x = 2;          // 초기값
    int sum = 0;  
    while (x < 5) {     
         
        sum += x;
        x++;            // [A] 이 줄에 커서가 있을 때 x 값 확인
    }

            // [A] 줄에서 확인한 x값의 합으로 수정
    printf("%d\n", sum);  
    return 0;
}