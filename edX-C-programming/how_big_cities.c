#include <stdio.h>

int main(void){

    int number, population, count = 0;

    scanf("%d", &number);

    for (int i = 0; i < number; i++){
        scanf("%d", &population);
        if (population > 10000){
            count += 1;
        }
    }
    printf("%d", count);   
    return 0;
}
