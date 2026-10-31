#include <stdio.h>

int main(){
    int age,nadult;
    scanf("%d",&age);
    nadult = 20 - age;
    if (nadult<=0)
    printf("adult");
    else
    printf("%d years later",nadult);
}