#include <stdio.h>


    
int main(void) {
    
    int num1 =4;
    int num2=5;
    int sum, product,swap;

    sum = addition(num1, num2);

    product = multiplication(num1, num2);


    printf("=================>\n");
    printf("Sum value = %d\n", sum );
    printf("=================>\n");
    printf("Product value = %d\n", product);
    printf("=================>\n");
    mySwap(&sum, &product);

    printf("After the swapping Sum is, %d and Product is %d", sum, product);

    


    return 0;
}

int addition(int num1, int num2) {
    int addition = num1 + num2;

    return addition;
}

int multiplication (int num1, int num2) {
    int multi = num1 * num2;

    return multi;
}

int mySwap (int *arg1, int *arg2){
    int temp;

    temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
    
}