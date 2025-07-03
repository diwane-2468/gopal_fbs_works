#include <stdio.h>

int main() {
    int n = 12345;
    int lastDigit = n % 10;
    int firstDigit = n;

    
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
