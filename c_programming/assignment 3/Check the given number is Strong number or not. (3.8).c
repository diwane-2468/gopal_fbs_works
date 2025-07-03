#include <stdio.h>


int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 145;
    int original = n;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
    printf("strong/n");
    
    else
    printf("not strong/n");
    
    return 0;
}