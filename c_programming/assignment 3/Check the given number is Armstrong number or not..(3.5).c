#include <stdio.h>
#include <math.h>

int main() {
    int n = 153;
    int original = n;
    int sum = 0;
    int digits = 0;

    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit,digits);
        temp /= 10;
        
    }
    if (sum==original)
    printf("Arsmstrong");
    else
    printf("Not Armstrong/n");
    
    
    return 0;
    
}