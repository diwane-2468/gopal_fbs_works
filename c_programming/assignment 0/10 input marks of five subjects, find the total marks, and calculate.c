
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("Usage: %s mark1 mark2 mark3 mark4 mark5\n", argv[0]);
        return 1;
    }

    int marks[5];
    int total = 0;
    for (int i = 0; i < 5; i++) {
        marks[i] = atoi(argv[i + 1]);  
        total += marks[i];
    }

    float percentage = total / 5.0;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
