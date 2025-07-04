#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isPalindrome(int num) {
    int reversed = 0, temp = num;
    while (temp != 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    return reversed == num;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int sumOfDigits(int num) {
    int sum = 0;
    if (num < 0) num = -num;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number, choice;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        printf("\n------ MENU ------\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime or Not\n");
        printf("3. Check Palindrome or Not\n");
        printf("4. Check Positive, Negative or Zero\n");
        printf("5. Reverse the Number\n");
        printf("6. Sum of Digits\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
          
                if (number % 2 == 0)
                    printf("%d is Even.\n", number);
                else
                    printf("%d is Odd.\n", number);
                break;

            
                if (isPrime(number))
                    printf("%d is a Prime Number.\n", number);
                else
                    printf("%d is Not a Prime Number.\n", number);
                break;

           
                if (isPalindrome(number))
                    printf("%d is a Palindrome.\n", number);
                else
                    printf("%d is Not a Palindrome.\n", number);
                break;

            
                if (number > 0)
                    printf("%d is Positive.\n", number);
                else if (number < 0)
                    printf("%d is Negative.\n", number);
                else
                    printf("The number is Zero.\n");
                break;

           
                printf("Reverse of %d is %d.\n", number, reverseNumber(number));
                break;

            case 6:
                printf("Sum of digits of %d is %d.\n", number, sumOfDigits(number));
                break;

            
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}
