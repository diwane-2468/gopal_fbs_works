#include <stdio.h>
#define PI 3.14159

int main() {
    double radius = 5.0;  
    double area;

    area = PI * radius * radius;

    printf("Radius of the circle: %.2f\n", radius);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
