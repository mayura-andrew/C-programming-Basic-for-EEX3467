#include <stdio.h>

int main(void){
    int num1 = 10;
    int num2 = 20;
  
    printf("before the swapping num1 = %d\n", num1);
    printf("=========================================>>>>>>>>\n");
    printf("before the swapping num2 = %d\n", num2);

    num1 = num2;
    num2 = num1;

    printf("after the swapping num1 = %d\n", num1);
    printf("=========================================>>>>>>>>\n");
    printf("after the swapping num2 = %d\n", num2);

    return 0;
}