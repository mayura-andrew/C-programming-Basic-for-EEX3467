#include <stdio.h>

int main(void) {

    int arrayQ5[5] = {1, 2, 3, 4, 5};
    printf("%p\n", arrayQ5);
    int * ptr = arrayQ5;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
