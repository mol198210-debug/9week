#include <stdio.h>

int main(){
    int num1,num2,total;
    scanf("%d %d",&num1,&num2);
    if(num1 > num2){
        total = num1 - num2;
        printf("%d",total);
    }
    else{
        total = num2 - num1;
        printf("%d",total);
    }
    return 0;
}