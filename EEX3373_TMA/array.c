#include <stdio.h>

#define x 32

// Compute the averages of consecutive sets of four numbers in Arr[x]
void compute_averages(unsigned char Arr[x], float Avg[x/4]) {
    int i, j;
    for (i = 0, j = 0; i < x; i += 4, j++) {
        Avg[j] = (Arr[i] + Arr[i+1] + Arr[i+2] + Arr[i+3]) / 4.0f;
    }
}

// Count the number of zeros in an array of x 8-bit binary numbers
int count_zeros(unsigned char Arr[x]) {
    int i, num_zeros = 0;
    for (i = 0; i < x; i++) {
        unsigned char byte = Arr[i];
        int j;
        for (j = 0; j < 8; j++) {
            if ((byte & (1 << j)) == 0) {
                num_zeros++;
            }
        }
    }
    return num_zeros;
}

int main() {
    unsigned char Arr[x] = {0b00000000, 0b00000001, 0b00000010, 0b00000011, 0b00000100, 0b00000101, 0b00000110, 0b00000111, 0b00001000, 0b00001001, 0b00001010, 0b00001011, 0b00001100, 0b00001101, 0b00001110, 0b00001111, 0b00010000, 0b00010001, 0b00010010, 0b00010011, 0b00010100, 0b00010101, 0b00010110, 0b00010111, 0b00011000, 0b00011001, 0b00011010, 0b00011011, 0b00011100, 0b00011101, 0b00011110, 0b00011111};
    float Avg[x/4];
    int i, max_num = -1, max_avg_num = -1, num_zeros_Arr = 0, num_zeros_Avg = 0;

    // Compute the averages of consecutive sets of four numbers in Arr[x]
    compute_averages(Arr, Avg);

    // Find the maximum number in Arr[x]
    for (i = 0; i < x; i++) {
        if (Arr[i] > max_num) {
            max_num = Arr[i];
        }
    }

    // Find the maximum averaged number in Avg[]
    for (i = 0; i < x/4; i++) {
        if (Avg[i] > max_avg_num) {
            max_avg_num = Avg[i];
        }
    }

    // Count the number of zeros in Arr[x] and Avg[]
    num_zeros_Arr = count_zeros(Arr);
    num_zeros_Avg = count_zeros((unsigned char *) Avg);

    // Print the results
    printf("Maximum number in Arr[x]: %d\n", max_num);
    printf("Maximum averaged number in Avg[]: %.2f\n", max_avg_num);
    printf("Number of zeros in Arr[x]: %d\n", num_zeros_Arr);
    printf("Number of zeros in Avg[]: %d\n", num_zeros_Avg);

    return 0;
}
