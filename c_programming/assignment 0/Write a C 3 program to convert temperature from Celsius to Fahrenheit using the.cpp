#include <stdio.h>

int main() {
    float celsius = 200;  
    float fahrenheit;

    
    fahrenheit = (celsius * 9 / 5) + 32;


    printf("Celsius: %.2f°C\n", celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}
