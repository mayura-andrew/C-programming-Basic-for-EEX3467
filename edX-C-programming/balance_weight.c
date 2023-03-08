#include <stdio.h>

int main(void){
    int num_of_cars;
    double tot_cars[50];
    double tot_weight = 0;
    scanf("%d", &num_of_cars);

    for (int i=0; i < num_of_cars; i++) {
        scanf("%lf", &tot_cars[i]);
        tot_weight += tot_cars[i];
    }

    double avg_weight = tot_weight / num_of_cars;

    for (int i = 0; i < num_of_cars; i++) {
        printf("%.1lf\n", avg_weight - tot_cars[i]);

    }

    return 0;




}