#include <stdio.h>


int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, i, temp, digit, sum;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        
        while (temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
