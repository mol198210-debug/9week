#include <stdio.h>

int main(){
    int num1,num2,max;
    scanf("%d %d",&num1,&num2);
    max = num1;
    if (max < num2){
        max = num2;
    }
    printf("%d",max);
}