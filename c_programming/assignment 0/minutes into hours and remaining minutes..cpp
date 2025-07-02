#include <stdio.h>

int main() {
    int totalMinutes = 130;  
    int hours, minutes;

    
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    
    printf("Total Minutes: %d\n", totalMinutes);
    printf("Hours: %d\n", hours);
    printf("Remaining Minutes: %d\n", minutes);

    return 0;
}
