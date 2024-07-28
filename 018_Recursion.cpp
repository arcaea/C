#include <stdio.h>

int sum(int i){
   if (i != 0)
    return i + sum(i-1);
   else
    return i;
}

int main(){

    int result = sum(10);

    printf("sum 0 to 10 = %d", result);

    return 0;
} 