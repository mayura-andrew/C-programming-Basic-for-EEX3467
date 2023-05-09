#include <stdio.h>

int computePay();

int main(void) {

    int num_of_workers, i = 0;
    printf("Enter number of workers: ");
    scanf("%d", &num_of_workers);
    if (num_of_workers < 1) {
        printf("Invalid number of workers.\n");
        return 1;
    };

    int pay_values[num_of_workers];
    int *pay_ptr = pay_values;

    for (i = 0; i < num_of_workers; i++) {
        *(pay_ptr + i) = computePay();
    };

    FILE *fp;
    fp = fopen("payroll.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    };

    fprintf(fp, "Worker ID\tPay\n");

    for (i = 0; i < num_of_workers; i++) {
        fprintf(fp, "%d\t\t%d\n", i+1, *(pay_ptr + i));
    };

    fclose(fp);

    return 0;
}

int computePay() {
    int worker_id, rate_per_hour, hours_worked, total_pay;
    printf("Enter worker ID : ");
    scanf("%d", &worker_id);
    printf("Enter hourly rate of the worker ($00.00) : ");
    scanf("%d", &rate_per_hour);
    printf("Enter total hours worked in a week : ");
    scanf("%d", &hours_worked);
    if (hours_worked <= 40) {
        total_pay = hours_worked * rate_per_hour;
    } else {
        total_pay = (40 * rate_per_hour) + ((hours_worked - 40) * (rate_per_hour * 2));
    };
    printf("Worker ID : %d\n", worker_id);
    printf("Hours worked : %d\n", hours_worked);
    printf("Gross Pay : %d\n", total_pay);
    return total_pay;
}
