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


//given answer 
#include <stdio.h>
int main()
{
    int tempMin, tempMax, temperature;
    int tempIsValid = 1;
    int end = 0;
    scanf("%d%d", &tempMin, &tempMax);

    while (!end && tempIsValid){
        scanf("%d", &temperature);
        end = (temperature == -999);

        tempIsValid = (tempMin <= temperature && temperature <= tempMax);

        if(!end){
            if (tempIsValid){
                printf("Nothing to report\n");
            } else {
                printf("Alert!\n");
            }
        }
    }

    return 0;
}