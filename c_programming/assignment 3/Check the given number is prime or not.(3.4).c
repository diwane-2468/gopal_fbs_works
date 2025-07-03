#include <stdio.h>

int main() {
    int n = 7;
    int isPrime = 1; // Assume number is prime

    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
