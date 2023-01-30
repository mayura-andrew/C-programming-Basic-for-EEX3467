#include <stdio.h>

#include <stdlib.h>

int findLarge(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
        printf("Largest Number is %d", result);
    }
    else
    {
        result = num2;
         printf("Largest Number is %d", result);
    }
}

int main()
{
    int number1, number2;
    printf("Enter your first number\n");
    scanf("%d", &number1);
    printf("Enter your second number\n");
    scanf("%d", &number2);
    int Largest = findLarge(number1, number2);
    

    return 0;
}


