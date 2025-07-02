#include <stdio.h>

int main() {
    float price, discount = 0.0, final_price;
    char isStudent;

    
    printf("Enter total purchase amount: ");
    scanf("%f", &price);

    
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500) {
            discount = 0.20 * price;
        } else {
            discount = 0.10 * price;
        }
    } else if (isStudent == 'n' || isStudent == 'N') {
        if (price > 600) {
            discount = 0.15 * price;
        } else {
            discount = 0.0;
        }
    } else {
        printf("Invalid input for student status.\n");
        return 1;
    }

    final_price = price - discount;

    // Display results
    printf("Discount: ?%.2f\n", discount);
    printf("Final price to pay: ?%.2f\n", final_price);

    return 0;
}

