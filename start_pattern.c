#include <stdio.h>;

int main(void) {
    int rows, reduceRow;
    printf("Please Enter Number: ");
    scanf("%d", &rows);
    reduceRow = rows;

    if (rows %2 == 0) {
        for (int i = 0; i <= rows; i++){
            for(int j=0; j < rows; j++){
                printf("*");

            };
            printf("\n");
        };
    } else {
        for (int i = 0; i <= rows; i++) {
            for(int j = 0; j <= reduceRow-1;  j++) {
                printf(" ");
            }
            for(int k=1; k<=2 * i -1; k++) {
                printf("*");
            }
            reduceRow--;
            printf("\n");
        }
    }
    return 0;

}

