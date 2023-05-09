#include <stdio.h>

int computePay();
int main(void) {

    int num_0f_workrs, i = 0;
    printf("Enter number of workers: ");
    scanf("%d", &num_0f_workrs);
    if (num_0f_workrs < 1) {
        printf("Invalid number of workers.\n");
        return 1;
    };

    for (i = 0; i < num_0f_workrs; i++) {
        computePay();
    };


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
}