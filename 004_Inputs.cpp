#include <stdio.h>

int main(){

    int intsc, multisc1;
    double doublesc, multisc2;
    char charsc;
 
    printf("plz enter int:"); 
    scanf("%d",&intsc);

    printf("plz enter double:"); 
    scanf("%lf",&doublesc);

    printf("plz enter char:"); 
    scanf("%c",&charsc);
    
    printf("plz enter multi var(int, double):"); 
    scanf("%d %lf",&multisc1, &multisc2);

    printf("int inputs = %d\n",intsc);
    printf("double inputs = %lf\n",doublesc);
    printf("char inputs = %c\n",charsc);
    printf("multi var inputs = %d , %lf\n", multisc1, multisc2);

    return 0;
}