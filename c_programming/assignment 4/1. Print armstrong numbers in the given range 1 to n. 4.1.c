#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp, digits, sum, remainder;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        digits = 0;

        
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        sum = 0;

       
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
