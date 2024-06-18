// Created by vadim on 18.06.2024.

#ifndef PRACTICE_7_TASK_H
#define PRACTICE_7_TASK_H

#include <stdio.h>
#include <stdbool.h>

bool check_in_creasing(int num) {
    int prev_digit = 10;

    while (num > 0) {
        int digit = num % 10;

        if (digit >= prev_digit) {
            return false;
        }

        prev_digit = digit;
        num /= 10;
    }

    return true;
}

bool check_decreasing(int num) {
    int prev_digit = -1;

    while (num > 0) {
        int digit = num % 10;

        if (digit <= prev_digit) {
            return false;
        }

        prev_digit = digit;
        num /= 10;
    }

    return true;
}

void get_num(int n) {

    printf("Числами со строго возрастающими цифрами до %d являются:\n", n);
    for (int i = 1; i <= n; i++) {
        if (check_in_creasing(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Числами со строго убывающими цифрами до %d являются:\n", n);
    for (int i = 10; i <= n; i++) {
        if (check_decreasing(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Если есть и убыв. и возраст. посл.
void task_7_test_1() {
    get_num(25);
}

// Если нет убывающей послед.
void task_7_test_2() {
    get_num(5);
}

// Если n = 0
void task_7_test_3() {
    get_num(0);
}

void task_7_test() {
    task_7_test_1();
    task_7_test_2();
    task_7_test_3();
}

#endif //PRACTICE_7_TASK_H