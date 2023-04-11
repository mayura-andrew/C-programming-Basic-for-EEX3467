#include <stdio.h>
int main(void){

    int numbers[] = {4, -1, 8, 3, 0, -11};

    int location = *numbers+4;
    printf("%d\n", location);
    return 0;
}