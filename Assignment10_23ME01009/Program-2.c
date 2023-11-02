#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    difference.seconds = endTime.seconds - startTime.seconds;

    if (difference.seconds < 0) {
        difference.seconds += 60;
        endTime.minutes--;
    }

    difference.minutes = endTime.minutes - startTime.minutes;

    if (difference.minutes < 0) {
        difference.minutes += 60;
        endTime.hours--;
    }

    difference.hours = endTime.hours - startTime.hours;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("Time Difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}