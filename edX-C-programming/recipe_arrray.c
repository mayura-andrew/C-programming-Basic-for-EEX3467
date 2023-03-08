#include <stdio.h>
int main(void){
    int array[10];
    int readValue = 0;
    int cellNumber = 0;
    int returnValue;
    int i = 0;
    for(i = 0 ; i < 10 ; i++){
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        cellNumber = cellNumber + 1;
    }

    scanf("%d", &returnValue);
    printf("%d", array[returnValue]);



    return 0;
}