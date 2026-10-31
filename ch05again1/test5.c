#include <stdio.h>

int main(){
    char n;
    int weight,height;
    double area = 0.0;
    while (1){
        scanf("%d %d", &weight, &height);
        area = (double)(height*weight)/2.0;
        printf("Triangle area = %.1f\n",area);
        printf("Continue?");
        scanf(" %c",&n);
        if(n != 'Y' && n != 'y'){
            break;
        }
    }
    return 0;
}