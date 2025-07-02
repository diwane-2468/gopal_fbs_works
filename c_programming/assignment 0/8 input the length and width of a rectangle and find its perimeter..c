#include <stdio.h>

int main() {
    float length = 5.0;
    float width = 3.0;
    float perimeter;

    
    perimeter = 2 * (length + width);

    
    printf("Length = %.2f, Width = %.2f\n", length, width);
    printf("Perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
