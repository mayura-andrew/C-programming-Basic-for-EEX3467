#include <stdlib.h>

int max(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

int main()
{
    /*
    if(!(3 < 2)) {
        printf("True")  ///negation operator
    }*/
    printf("%d", max(4, 50, 100));
    return 0;
}
