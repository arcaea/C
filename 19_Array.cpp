/*
資料型態 陣列名[陣列大小]
*/

#include <stdio.h>

int main(){

    int num[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        printf("num(%d) = %d\n", i, num[i]);
    }

    return 0;
}