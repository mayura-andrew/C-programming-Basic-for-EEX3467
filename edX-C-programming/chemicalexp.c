#include <stdio.h>

int main() {
    int minTemp, maxTemp, temp;

    scanf("%d %d", &minTemp, &maxTemp);

    while (1) {
        scanf("%d", &temp);
        if (temp == -999) {
            break;
        }
        if (temp < minTemp || temp > maxTemp) {
            printf("Alert!\n");
            break;
        }
        printf("Nothing to report\n");
    }

    return 0;
}
