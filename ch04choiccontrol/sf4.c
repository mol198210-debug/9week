#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n/=10){
        case 10:
        case 9:
        printf("Excellent");
        break;
        case 8:
        printf("Good");
        break;
        case 7:
        printf("Pass");
        break;
        default:
        printf("Fail");
        break;
    }
}