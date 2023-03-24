#include <stdio.h>
void reverse(int *);
int main() {
    //! showMemory(start=65520)
    int arr[6];
    scanf("%d", arr[]);

    reverse(arr);
    return 0;
}
void reverse(int * ptr){
    *(ptr + 0) = 0;
    *(ptr +1) = 0;
    *(ptr +2) = 0;
}
