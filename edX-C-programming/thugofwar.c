#include <stdio.h>

int main(void){

    int num_members, weight, total_weight_team1 =0, total_weight_team2 = 0;
    scanf("%d", &num_members);

    for (int i = 0; i < 2 * num_members; i++) {
        scanf("%d", &weight);

        if (i % 2 == 0){
            total_weight_team1 += weight;
        } else {
            total_weight_team2 += weight;

        }
    }

    if (total_weight_team1 > total_weight_team2) {
        printf("Team 1 has advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }

    printf("Total weight for team 1: %d\n", total_weight_team1);
    printf("Total weight for team 2: %d\n", total_weight_team2);


    return 0;
}