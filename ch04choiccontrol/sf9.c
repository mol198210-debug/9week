#include <stdio.h>

int main(){
    int num1,num2,num3,min;
    scanf("%d %d %d",&num1,&num2,&num3);
    min = num1;
    if(min > num2){
        min = num2;
    }
    if(min > num3){
        min = num3;
    }
    printf("%d",min);
}