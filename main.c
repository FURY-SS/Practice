#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter the current time (hours, minutes, seconds): \n");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    if (seconds >= 30) {
        minutes++;
        if (minutes == 60) {
            hours++;
            minutes = 0;
        }
    }

    if (hours == 24) {
        hours = 0;
    }

    printf("Rounded current time: %d h. %d min.\n", hours, minutes);

    if (minutes >= 30) {
        hours++;
    }

    printf("Rounded current time: %d h.\n", hours);

    return 0;
}
