/*
資料型態 陣列名[陣列大小]
資料型態 陣列名[列大小(rows)][欄大小(columns)]
*/

#include <stdio.h>

int main(){

    int num[5] = {1,2,3,4,5};
    int multinum[2][3] = {{10,11,12}, {13,14,15}};

    for (int i = 0; i < 5; i++) 
        printf("num[%d] = %d\n", i, num[i]);

    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 3; j++) 
            printf("num[%d][%d] = %d\n", i, j, multinum[i][j]);

    return 0;
}