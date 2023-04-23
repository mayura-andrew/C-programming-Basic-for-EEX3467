#include <stdio.h>

#define x 32

// Compute the averages of consecutive sets of four numbers in Arr[x]
void compute_averages(unsigned char Arr[x], float Avg[x/4]) {
    int i, j;
    for (i = 0, j = 0; i < x; i += 4, j++) {
        Avg[j] = (Arr[i] + Arr[i+1] + Arr[i+2] + Arr[i+3]) / 4.0f;
    }
}

int main() {
    unsigned char Arr[x] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    float Avg[x/4];
    int i, max_num = -1, max_avg_num = -1, num_zeros_Arr = 0, num_zeros_Avg = 0;

    // Compute the averages of consecutive sets of four numbers in Arr[x]
    compute_averages(Arr, Avg);

    // Find the maximum number in Arr[x]
    for (i = 0; i < x; i++) {
        if (Arr[i] > max_num) {
            max_num = Arr[i];
        }
        if (Arr[i] == 0) {
            num_zeros_Arr++;
        }
    }

    // Find the maximum averaged number in Avg[]
    for (i = 0; i < x/4; i++) {
        if (Avg[i] > max_avg_num) {
            max_avg_num = Avg[i];
        }
        if (Avg[i] == 0) {
            num_zeros_Avg++;
        }
    }

    // Print the results
    printf("Maximum number in Arr[x]: %d\n", max_num);
    printf("Maximum averaged number in Avg[]: %.2f\n", max_avg_num);
    printf("Number of zeros in Arr[x]: %d\n", num_zeros_Arr);
    printf("Number of zeros in Avg[]: %d\n", num_zeros_Avg);

    return 0;
}
