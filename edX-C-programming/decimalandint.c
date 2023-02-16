#include <stdio.h>

int main(void)
{
    int age;
    double height;
    printf("What is oyur age? ");
    scanf("%d %lf", &age, &height);

    printf("You are %d years old and %.2lf meters tall. ", age, height);
    return 0;
}