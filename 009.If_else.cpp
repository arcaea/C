/*
if(條件1){
    條件1為True
}else if(條件2){
    條件2為True
}else{
    條件1和條件2都為False
}
*/
 
#include <stdio.h>

int main(){

    int a=10, b=10;

    if(a == 10) {
        printf("a == 10\n");//當a=10時
    }

    if(b < 10) 
        printf("b < 10\n");//當b<10時
    else if(b > 10)
        printf("b > 10\n");//當b>10時
    else
        printf("b == 10\n");//當b=10時

    return 0;
}