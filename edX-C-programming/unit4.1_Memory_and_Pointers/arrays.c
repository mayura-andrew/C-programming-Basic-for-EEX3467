#include <stdio.h>
int main(void) {
    int numberArray[10];
    int count;
    for (count = 0; count <10; count++) {
        numberArray[count] = 0;

    }
    printf("%s%13s\n", "Location", "Value");

    for (count = 0; count < 10; count++) {
        printf("%7d%13d\n", count, numberArray[count]);
    }
    return 0;

}