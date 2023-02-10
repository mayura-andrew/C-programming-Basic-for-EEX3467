#include <stdio.h>

int main(void)
{
    double height;
    printf("How tll are you (in meters)? ");
    scanf("%lf", &height);
    printf("I'm %lf meters tall.\n", height);
    printf("I'm %.1lf meters tall.\n", height);
    printf("I'm %.2lf meters tall.", height);

    return 0;
}