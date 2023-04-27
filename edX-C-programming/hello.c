// #include <stdio.h>
// double findFirstNumSet(double *numbers);
// int main(void)
// {
//     double x[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
//     double firstNumSet[4] = findFirstNumSet(x);
//     printf("%lf", findFirstNumSet);
//     return 0;

// }


// double findFirstNumSet(double *numbers) {

//     double firstNumSet[4];
//     int i; 
//     for (i = 0 ; i < 4; i++ ) {
//         firstNumSet[i] =  numbers[i]
//     }
//     return firstNumSet;

// }

#include <stdio.h>
#include <stdint.h> // for uint8_t library 
//prototyping
void divideArray(double *numbers, int size, int setSize, double (*sets)[setSize], double *averages, double *maxAverage, double *maxNumber);
void convert_to_8bit(double *src, uint8_t *dst, size_t len);
int count_zeros(uint8_t *arr, size_t len);



int main(void) {
    double x[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    uint8_t y[32];
    convert_to_8bit(x, y, 32);
    int zero_count = count_zeros(y, 32);
    double numSets[8][4];
    double averages[8];
    uint8_t z[8];
    convert_to_8bit(averages, z, 8);
    int zero_count_avg = count_zeros(z, 8);
    double maxAverage;
    double maxNumber;
    divideArray(x, 32, 4, numSets, averages, &maxAverage, &maxNumber);
    int i, j;
    for (i = 0; i < 8; i++) {
        printf("Set %d: ", i);
        for (j = 0; j < 4; j++) {
            printf("%.2lf ", numSets[i][j]);
        }
        printf("Average: %.2lf\n", averages[i]);
    }
    printf("Maximum average: %.2lf\n", maxAverage);
    printf("Maximum number: %.2lf\n", maxNumber);
    printf("Number of zeros: %d\n", zero_count);
    printf("Number of zeros in avg array: %d\n", zero_count_avg);

    return 0;
}

// divide array into sets, find average of each set, find maximum average and maximum number of array

void divideArray(double *numbers, int size, int setSize, double (*sets)[setSize], double *averages, double *maxAverage, double *maxNumber) {
    int i, j, k, maxIndex;
    k = 0;
    *maxNumber = 0;
    *maxAverage = 0;
    for (i = 0; i < size; i += setSize) {
        double sum = 0;
        for (j = 0; j < setSize; j++) {
            sets[k][j] = numbers[i + j];
            sum += sets[k][j];

            //finding maximum number of array

            if (sets[k][j] > *maxNumber) {
                *maxNumber = sets[k][j];

        }
        }

        //finding average of each set
        
        averages[k] = sum / setSize;
        if (averages[k] > *maxAverage) {
            *maxAverage = averages[k];
        }
        
        k++;
    }
}

// convert double array to uint8_t array

void convert_to_8bit(double *src, uint8_t *dst, size_t len) {
    for (size_t i = 0; i < len; i++) {
        dst[i] = (uint8_t)(src[i] + 0.5) & 0xFF;
    }
}

// couting zeros in array of uint8_tq

int count_zeros(uint8_t *arr, size_t len) {
    int count = 0;
    for (size_t i = 0; i < len; i++) {
        uint8_t val = arr[i];
        for (int j = 0; j < 8; j++) {
            if ((val & (1 << j)) == 0) {
                count++;
            }
        }
    }
    return count;
}

// #include <stdio.h>

// void divideArray(double *numbers, int size, int setSize, int (*sets)[setSize], int *averages, int *numZerosSrc, int *numZerosAvg);

// int main(void)
// {
//     double x[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
//     int numSets[8][4];
//     int averages[8];
//     int numZerosSrc = 0;
//     int numZerosAvg = 0;
//     int i, j;
//     for (i = 0; i < 32; i++) {
//         if ((int)x[i] == 0) {
//             numZerosSrc++;
//         }
//     }
//     divideArray(x, 32, 4, numSets, averages, &numZerosAvg, &numZerosSrc);
//     for (i = 0; i < 8; i++) {
//         printf("Set %d: ", i);
//         for (j = 0; j < 4; j++) {
//             printf("%d ", numSets[i][j]);
//         }
//         printf("Average: %d\n", averages[i]);
//     }
//     printf("Number of zeros in source array: %d\n", numZerosSrc);
//     printf("Number of zeros in Avg[]: %d\n", numZerosAvg);
//     return 0;
// }

// void divideArray(double *numbers, int size, int setSize, int (*sets)[setSize], int *averages, int *numZerosSrc, int *numZerosAvg) {
//     int i, j, k;
//     k = 0;
//     *numZerosAvg = 0;
//     for (i = 0; i < size; i += setSize) {
//         int sum = 0;
//         for (j = 0; j < setSize; j++) {
//             sets[k][j] = (int)numbers[i + j];
//             if (sets[k][j] == 0) {
//                 (*numZerosSrc)++;
//             }
//             sum += sets[k][j];
//         }
//         averages[k] = sum / setSize;
//         if (averages[k] == 0) {
//             (*numZerosAvg)++;
//         }
//         k++;
//     }
// }
