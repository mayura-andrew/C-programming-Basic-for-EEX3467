#include <stdio.h>
int main(void) {
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 3;
    int totalSignatures = 3;
    while (totalSignatures < 1000) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}

