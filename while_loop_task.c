#include <stdio.h>
int main(void) {
    int expence = 0, sum = 0;

    while (1){
        scanf("%d\n", &expence);

        if (expence == -1) {
            break;
        }
        
        sum += expence;

    }
    printf("%d", sum);
    return 0;
    
    
}
