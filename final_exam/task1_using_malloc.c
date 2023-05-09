#include <stdio.h>
#include <stdlib.h>

void computePay(int *worker_id, float *rate_per_hour, float *hours_worked, float *total_pay);

int main() {
    int num_of_workers, i;
    printf("Enter number of workers: ");
    scanf("%d", &num_of_workers);
    
    // Allocate memory for 2D array
    float **payroll = (float **) malloc(num_of_workers * sizeof(float *));
    for (i = 0; i < num_of_workers; i++) {
        payroll[i] = (float *) malloc(3 * sizeof(float));
    }
    
    // Calculate pay for each worker and store in array
    for (i = 0; i < num_of_workers; i++) {
        int worker_id;
        float rate_per_hour, hours_worked, total_pay;
        
        printf("\nWorker %d:\n", i+1);
        printf("Enter worker ID: ");
        scanf("%d", &worker_id);
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate_per_hour);
        printf("Enter total hours worked in a week: ");
        scanf("%f", &hours_worked);
        
        computePay(&worker_id, &rate_per_hour, &hours_worked, &total_pay);
        
        // Store results in array
        payroll[i][0] = (float) worker_id;
        payroll[i][1] = hours_worked;
        payroll[i][2] = total_pay;
    }
    
    // Print and write results to file
    FILE *file = fopen("payroll.txt", "w");
    printf("\nWorker ID\tHours Worked\tGross Pay\n");
    fprintf(file, "Worker ID\tHours Worked\tGross Pay\n");
    for (i = 0; i < num_of_workers; i++) {
        printf("%.0f\t\t%.2f\t\t%.2f\n", payroll[i][0], payroll[i][1], payroll[i][2]);
        fprintf(file, "%.0f\t\t\t%.2f\t\t\t%.2f\n", payroll[i][0], payroll[i][1], payroll[i][2]);
    }
    fclose(file);
    
    // Free memory allocated for 2D array
    for (i = 0; i < num_of_workers; i++) {
        free(payroll[i]);
    }
    free(payroll);
    
    return 0;
}

void computePay(int *worker_id, float *rate_per_hour, float *hours_worked, float *total_pay) {
    if (*hours_worked <= 40) {
        *total_pay = *hours_worked * *rate_per_hour;
    } else {
        *total_pay = (40 * *rate_per_hour) + ((*hours_worked - 40) * (*rate_per_hour * 2));
    }
    
    printf("Gross Pay for worker %d is $%.2f\n", *worker_id, *total_pay);
}
