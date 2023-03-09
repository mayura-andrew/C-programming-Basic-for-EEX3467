#include <stdio.h>
int main(void) {
    //! showArray(ages, cursors=[i])
    int ingredients;
    int i;
    double price = 0;
    double cost[10];
    double pounds[10];

    scanf("%d", &ingredients);

    for (i=0; i< ingredients; i++) {
        scanf("%lf", &cost[i]);

    }
    for(i=0;i<ingredients;i++){
        scanf("%lf", &pounds[i]);
        price += cost[i] * pounds[i];
    }

    printf("%.6lf", price);
    return 0;
}