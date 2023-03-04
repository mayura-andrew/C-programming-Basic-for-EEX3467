#include <stdio.h>


int main(void) {
    int num1, num2, num3, num4, sum, product, difference;
    float quotient;

    //getting user inputs
    printf("Enter Number 1: ");
    scanf("%d", &num1);

    //checking user inputs whether it greather than 10 or not
    if (num1 > 9) {
        printf("Sorry you enterted greater than 9 number \n");
        return 0;
    } 
    printf("Enter Number 2: ");
    scanf("%d", &num2);


    if (num2 > 9) {
        printf("Sorry you enterted greater than 9 number ;( \n");
        return 0;
    } 

    if (num1 % num2 == 1) {


        printf(" You entered %d and %d \n", num1, num2);


        num3 = square(num1);
        printf("Squre number of %d is %d \n", num1, num3);

        num4 = twice(num2);
        printf("Twice of the %d is %d \n", num2, num4);

    //  Calling the calculate function 

        calculate(num3, num4, &sum, &product, &difference, &quotient);

        printf("Sum of %d and %d: %d\n", num3, num4, sum);
        printf("Product of %d and %d: %d\n", num3, num4, product);
        printf("Difference of %d and %d: %d\n", num3, num4, difference);
        printf("Quotient of %d and %d: %lf\n", num3, num4, quotient);

        return 0;
    } else {
        printf("Your input numbers are not valid Try again! \n");
        return 0;
        
    }
    return 0;
}

// calculating square number function
int square( int num) {
    int square = num * num;
    return square;
}

int twice(int num){
    int twice = num * 2;
    return twice;
}

int calculate(int arg1, int arg2, int *sum, int *product, int *difference, float *quotient) {
   //Calculate the sum 
    *sum = arg1 + arg2;


    // Calculate the product

    *product = arg1 * arg2;

    // Calculate the difference

    *difference = arg1 - arg2;

    // Calculate the quotient
    *quotient = (int) arg1 / arg2;


}

// int sum(int arg1, int arg2, int *sum){
//     *sum = arg1 + arg2;
// }

// int product(int arg1, int arg2, int *product){
//     *product = arg1 * arg2;
// }
// int difference(int arg1, int arg2, int *difference){
//     *difference = arg1 - arg2;
// }
// int quotient(int arg1, int arg2, int *quotient){
//     *quotient = arg1 / arg2;
// }