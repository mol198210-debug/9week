#include <stdio.h>

int main() {
    int A = 0;          // [A]에서 확인한 값으로 수정
    int B = 0;          // [B]에서 확인한 값으로 수정 (두 군데중 하나만 해당)
    int C = 0; 
    int x = 50;         // 초기값
    scanf("%d", &x);    // [A] 이 줄에 커서가 있을 때 x 값 확인
    A = x;
    if (x >= 80) {      
        x += 10;  
        B = x;      // [B] 이 줄에 커서가 있을 때 x 값 확인
    } else {           
        x -= 5; 
        B = x;        // [B] 이 줄에 커서가 있을 때 x 값 확인
    }
    x--;  
    C = x;              // [C] 이 줄에 커서가 있을 때 x 값 확인

             // [C]에서 확인한 값으로 수정

    printf("%d %d %d\n", A, B, C);
    return 0;
}
