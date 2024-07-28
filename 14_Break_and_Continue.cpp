#include <stdio.h>

int main(){

    for(int a = 0;a <= 10;a++){

        if(a == 2) continue; //跳過
        if(a == 6) break;//中斷

        printf("a = %d\n",  a);
    }

    return 0;
}