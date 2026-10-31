#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*srand(time(NULL));
    int dice1 = rand()%6+1;
    int dice2 = rand()%6+1;
    printf("주사위 값:%d %d\n",dice1,dice2);*/
    int dice1 = 3;
    int dice2 = 4;
    if (dice1 >=4 && dice2 >= 4)
    printf("WIN.");
    else if (dice1 >=4 || dice2 >= 4)
    printf("DRAW.");
    else
    printf("LOSE.");
}