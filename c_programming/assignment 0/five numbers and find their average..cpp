#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    int num5 = 50;
    float average;

    
    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("Numbers: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Average: %.2f\n", average);

    return 0;
}
