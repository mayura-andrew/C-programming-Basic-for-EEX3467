#include <stdio.h>

int main(void) {
    double meters;
    double kilo = 0.621371;
    double mils;
    scanf("%lf", &meters);
    mils = (meters * kilo);
    printf("%.5lf", mils);

    return 0;
}