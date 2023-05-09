#include <stdio.h>
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}


#include <stdio.h>

int main(void)
{
    // declare variables
    int MyArray[5];
    int sum = 0;
    int N = 5;
    float average;
    int *p;

    for (p = MyArray; p < MyArray + N; p++) {
        printf("Enter integer number %d: ", (int)(p - MyArray) + 1);
        scanf("%d", p);
    }

    for (p = MyArray + N - 1; p >= MyArray; p--) {
        printf("%d\n", *p);
        sum += *p;
    }

    printf("Sum = %d\n", sum);
    average = (float)sum / N;
    printf("Average = %f\n", average);

    return 0;
}
