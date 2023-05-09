#include <stdio.h>

void computePay(FILE *file);

int main(void) {
    int num_workers, i;
    FILE *file;

    printf("Enter number of workers: ");
    scanf("%d", &num_workers);
    if (num_workers < 1) {
        printf("Invalid number of workers.\n");
        return 1;
    }

    file = fopen("payroll.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < num_workers; i++) {
        computePay(file);
    }

    fclose(file);
    return 0;
}

void computePay(FILE *file) {
    int worker_id, rate_per_hour, hours_worked, total_pay;

    printf("Enter worker ID: ");
    scanf("%d", &worker_id);
    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%d", &rate_per_hour);
    printf("Enter total hours worked in a week: ");
    scanf("%d", &hours_worked);

    if (hours_worked <= 48) {
        total_pay = hours_worked * rate_per_hour;
    } else {
        total_pay = (48 * rate_per_hour) + ((hours_worked - 48) * (rate_per_hour * 2));
    }

    printf("Worker ID: %d\n", worker_id);
    printf("Gross Pay: $%d.00\n", total_pay);

    fprintf(file, "%d: $%d.00\n", worker_id, total_pay);
}
