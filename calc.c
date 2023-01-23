#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char opt;

    printf("Enter a number: \n");
    scanf("%lf", &num1);

    printf("Enter operator: \n");
    scanf(" %c", &opt);

    printf("Enter a number2: ");
    scanf("%lf", &num2);

    if (opt == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (opt == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (opt == '/')
    {
        printf("%f", num1 / num2);
    }
    else if (opt == '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("Invalid opterator");
    }
}