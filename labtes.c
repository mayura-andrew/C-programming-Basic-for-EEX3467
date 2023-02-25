#include <stdio.h>

int main(void) {
    
    int rows, reduceRows, defaultValue;
    
    
    reduceRows = 5;
    defaultValue = 5;
    
    
   
    
    //Getting user input
    
    printf("Please Enter Number: ");
    
    scanf("%d", &rows);    
    
    if ( rows < 6 && rows == 5) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < rows; j++) {
                printf("#");
            };
            printf("\n");
        };
    }else {
        for(int i =0; i < defaultValue; i++){
            for(int j = 0; j< reduceRows-1; j++) {
                printf(" ");
            }
            for(int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            reduceRows--;
            printf("\n");
        }
    }
    return 0;
}
