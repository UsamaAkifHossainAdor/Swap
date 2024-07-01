// using temp
#include <stdio.h>

int main () {
    int num1=10;
    int num2=17;

    num1=num1 - num2;// -7
    num2=num1 + num2;//10
    num1=num2 - num1;//17

    
     
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);
    return 0;
}