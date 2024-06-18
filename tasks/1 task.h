#include <stdio.h>

void round_time(int hours,int minutes, int seconds) {
    if (seconds >= 30) {
        minutes++;

        if (minutes == 60) {
            hours++;
            minutes = 0;

            if (hours == 24) {
                hours = 0;
            }
        }
    }

    printf("Округленное время до минут: %d ч. %d м.\n", hours, minutes);

    if (minutes >= 30)
        hours++;

    printf("Округленное время до часов: %d ч.\n", hours, minutes);
}

// Если можно округлить только до минут
void task_1_test_1() {
    int hours = 14;
    int minutes = 21;
    int seconds = 45;

    round_time(hours,minutes,seconds);
}

// Если можно округлить только до часов
void task_1_test_2() {
    int hours = 9;
    int minutes = 59;
    int seconds = 23;

    round_time(hours,minutes,seconds);
}

// Если можно округлить до минут и часов
void task_1_test_3() {
    int hours = 9;
    int minutes = 30;
    int seconds = 31;

    round_time(hours,minutes,seconds);
}

void task_1_test() {
    task_1_test_1();
    task_1_test_2();
    task_1_test_3();
}