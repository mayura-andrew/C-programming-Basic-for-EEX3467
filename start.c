#include <stdio.h>;

int main(void) {
    int rows, reduceRow;
    printf("Please Enter Number: ");
    scanf("%d", &rows);
    reduceRow = rows;

    for (int i = 0; i < rows; i++){
        
        for(int j=0; j < rows; j++){
            printf("*");

        };
        printf("\n");
        for (int k = 1; k <= i-rows; k++) {
        printf("  ");
        }
    }

    return 0;
}

