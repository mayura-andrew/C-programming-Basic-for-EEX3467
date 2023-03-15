#include <stdio.h>

int min(int numbers[], int n);


int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int smallest = min(numbers , n);
    printf("%d\n", smallest);


    return 0;
}

int min( int numbers[], int n) {
    int smallest = numbers[0];

    for(int i=1; i < n; i++){
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    return smallest;
}


















//in c programming there is no List data structure only array