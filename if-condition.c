#include <stdio.h>

int main() {
    int passengers;
    float gas_cost, cost;
    
    scanf("%d", &passengers);
    scanf("%f", &gas_cost);
    
    if (passengers == 0) {
        cost = gas_cost;
    } else {
        cost = (gas_cost + 1) / (passengers + 1);
    }
    
    printf("%.2f\n", cost);
    
    return 0;
}

#include <stdio.h>
int main() {
    int nbPassengers = 0;
    double totalCost = 0.0;
    scanf("%d %lf", &nbPassengers, &totalCost);
    int alone = nbPassengers == 0;
    if(alone){
        printf("%.2lf", totalCost);
    }else{
        totalCost = totalCost + 1; //car pooling site fees
        printf("%.2lf", totalCost/(nbPassengers+1));
    }
    return 0;
}