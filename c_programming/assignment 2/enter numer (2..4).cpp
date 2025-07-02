#include <stdio.h>

int main() {
    int marks;

    5
    printf("Enter your marks: ");
    scanf("%d", &marks);

    
    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    }
    else if (marks > 75) {
        printf("Distinction\n");
    }
    else if (marks > 65) {
        printf("First Class\n");
    }
    else if (marks > 55) {
        printf("Second Class\n");
    }
    else if (marks >= 40) {
        printf("Pass Class\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
