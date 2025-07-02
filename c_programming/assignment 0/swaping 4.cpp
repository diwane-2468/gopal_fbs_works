#include <stdio.h>

int main() {
    int a = 10;  
    int b = 20;  
    int temp;    

    
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    
    temp = a;
    a = b;
    b = temp;


    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
