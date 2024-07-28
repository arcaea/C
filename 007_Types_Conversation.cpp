#include <stdio.h>

int main(){

    char c = '5';//ascii = 53
    double a = 5.67;
    int b = 9;
    int result_int = a + b;
    double result_double = a + b;
    int result_int_2 = (int)a + b;
    double result_double_2 = (int)a + b;
 
    printf("c = %c\ta = %f\tb = %d\n", c, a, b);

    printf("c + b = %d\n", c + b);
    printf("a + b <in int result> = %d\n", result_int);
    printf("a + b <in double result> = %lf\n", result_double);
    printf("(int)a + b <in int result>= %d\n", result_int_2);
    printf("(int)a + b <in double result>= %lf\n", result_double_2);


    return 0;
}