#include <stdio.h>

int main(void){

    int number1, number2, sum, cost;
    scanf("%d", &number1);
    scanf("%d", &number2);

    if (number1 >=1 && number1 <=6 && number2 >=1 && number2 <=6){
        sum = number1 + number2;

        if(sum >= 10){
            cost = 36;
            printf("Special tax\n");
            printf("%d", cost);
            
        } else {
            cost = sum*2;
            printf("Regular tax\n");
            printf("%d", cost);
        }

    } else {
        return 0;
    }



    return 0;

}