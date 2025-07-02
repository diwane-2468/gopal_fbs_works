#include <stdio.h>

int main() {
    int number, original, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
	 {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    original = number;

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is Not a Palindrome.\n", original);
    }

    return 0;
}
