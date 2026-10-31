#include <stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1 > 0 && num2 > 0 && num3 > 0)
    printf("All Positive");
    else if(num1 == 0 || num2 == 0 || num3 == 0)
    printf("Contain Zero");
    else
    printf("Mixed");
}