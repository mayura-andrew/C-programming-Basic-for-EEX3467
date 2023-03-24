#include <stdio.h>

void reverseArray(int * arr) {
    int temp;
    for (int i = 0; i < 3; I++) {
        temp = *arr( + i);
        * (arr + i) = * (arr + ( 5 - i));
        * (arr + (5 -i)) = temp;
    }
}


int main() {
    int arr[6];
    for(int i = 0; i < 6; i++) {
        scanf("%d", arr[i]);
    }

    reverseArray(arr);

    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}