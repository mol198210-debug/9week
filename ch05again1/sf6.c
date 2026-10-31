#include <stdio.h>

int main(){
    int n;
    
    while(1){
        printf("\n1. Korea\n2. USA\n3. Japan\n4. China\nnumber?");
        scanf("%d",&n);
        if (n == 1){
            printf("\nSeoul\n");
        }
        else if (n == 2){
            printf("\nWashington, D.C\n");
        }
        else if (n == 3){
            printf("\nTokyo\n");
        }
        else if (n == 4){
            printf("\nBeijing\n");
        }
        else{
            printf("\nnone\n");
            break;
        }
    }
    return 0;
}