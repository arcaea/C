/*
switch(變數/條件){
    case value 1:
        //body of value 1
        break;

    case value 2:
        //body of value 2
        break;
    
    ...
    case value N:
        //body of value N
        break;

    default:
        //body of default

}
*/

#include <stdio.h>

int main(){

    int a = 1;

    switch(a) {
    case 1:
        printf("a==1\n");
        break;

    case 2:
        printf("a==2\n");
        break;
    
    case 3:
        printf("a==3\n");
        break;
    
    default:
        printf("default\n");

    }

    return 0;
}