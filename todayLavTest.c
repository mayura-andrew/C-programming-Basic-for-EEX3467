#include <stdio.h>


int main(void) {
    int value1, value2, value3, value4, sum, product, difference;
    float quotient;

    printf("Input value 1: ");
    scanf("%d", &value1);
    printf("Input value 2: ");
    scanf("%d", &value2);

    if (value1 > 25 || value2 > 25 ) {
        printf("can not process. you enterted  values are greater than 25 \n");
        return 0;
    } else if ( value1 < 0 || value2 < 0){
        printf("can not process. you enterted  values are less than 0 \n");
        return 0;
        
    }

    if (value1 % value2 == 2) {


        printf("Your values are %d and %d \n", value1, value2);


        value3 = cube(value1);
        printf("Cube number is %d \n", value3);

        value4 = xfive(value2);
        printf("Five times of the %d is %d \n", value2, value4);


        calculate(value3, value4, &sum, &product, &difference, &quotient);

        printf("Sum = %d\n", sum);
        printf("Product = %d\n", product);
        printf("Difference = %d\n", difference);
        printf("Quotient = %lf\n", quotient);

        return 0;
    } else {
        printf("input values are not valid Try again! \n");
        return 0;
        
    }
    return 0;
}

int cube( int value) {
    int cube = value * value * value;
    return cube;
}

int xfive(int value){
    int xfive = value * 5;
    return xfive;
}

int calculate(int number1, int number2, int *sum, int *product, int *difference, float *quotient) {
    *sum = number1 + number2;
    *product = number1 * number2;

    if (number1 > number2) {
        *difference = number1 - number2;
    } else {
        *difference = number2 - number1;
    }

    if (number1 > number2) {
        *quotient = (int) number1 / number2;
    } else {
        *quotient = (int) number2 / number1;

    }



}

