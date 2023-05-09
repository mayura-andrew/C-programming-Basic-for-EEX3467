// #include <stdio.h>

// int main(void)
// {

// // declare variables
//     int MyArray[5];
//     int sum=0;
//     int N=5;
//     float average;
//     int *i;

//     for(i= MyArray ;i < MyArray + N;i++){

//         printf("Enter %d integer number ", (int)(i - MyArray) + 1);
//         scanf("%d", i);
//         if ( i >= 2) {
//             return 1;
//         }
//     };
//     for(i= MyArray + N -1 ; i >= MyArray;i--){
//         printf("%d\n", *i);
//         sum += *i;
//     };
//     printf("Sum = %d\n", sum);
//     average = (float) sum / 5;
//     printf("Average = %f\n", average);

//     return 0;
// }

#include <stdio.h>

int main(void)
{

    // declare variables
    int i = 0;
    int MyArray[5];
    int sum = 0;
    int N = 5;
    int average;
    for (i = 0; i <= N; i++)
    {

        printf("Enter %d integer number ", i);
        scanf("%d", &MyArray[i]);
    };
    for (i = N; i >= 0; i--)
    {
        printf("%d\n", MyArray[i]);
        sum = sum + MyArray[i];
    };
    printf("Sum = %d\n", sum);
    average = sum / 5;
    printf("Average = %f \n", average);

    return 0;
}