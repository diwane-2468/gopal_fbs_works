#include <stdio.h>

int main() {
    float basic, da, ta, hra, total_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total_salary = basic + da + ta + hra;

    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}
