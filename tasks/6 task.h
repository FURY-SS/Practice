// Created by vadim on 18.06.2024.

#ifndef PRACTICE_6_TASK_H
#define PRACTICE_6_TASK_H

#include <stdio.h>
#include <stdlib.h>

// Функция для проверки, является ли подпоследовательность арифметической прогрессией
int is_arithmetic_progression(int* arr, int start, int end) {
    if (end - start < 2)
        return 0;

    int diff = arr[start + 1] - arr[start];
    for (int i = start + 2; i <= end; i++) {
        if (arr[i] - arr[i - 1] != diff)
            return 0;
    }

    return 1;
}

// Функция для проверки, является ли подпоследовательность геометрической прогрессией
int is_geometric_progression(int* arr, int start, int end) {
    if (end - start < 2)
        return 0;
    if (arr[start] == 0)
        return 0;

    double ratio = (double)arr[start + 1] / arr[start];
    for (int i = start + 2; i <= end; i++) {
        if (arr[i - 1] == 0 || (double)arr[i] / arr[i - 1] != ratio)
            return 0;
    }

    return 1;
}

// Функция для нахождения максимальной длины подпоследовательности, являющейся AP или GP
int find_longest_progression(int* arr, int n) {
    int max_length = 2; // Минимальная длина прогрессии - 2

    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) {
            if (is_arithmetic_progression(arr, i, j) || is_geometric_progression(arr, i, j)) {
                if (j - i + 1 > max_length) {
                    max_length = j - i + 1;
                }
            }
        }
    }

    return max_length;
}

// Если длина АП больше чем ГП
void task_6_test_1() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 28, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int longest = find_longest_progression(arr, n);

    printf("Длина самой длинной прогрессии: %d\n", longest);
}

// Если длина ГП больше чем АП
void task_6_test_2() {
    int arr[] = {2, 4, 6, 8, 10, 20, 40, 80, 160,320};
    int n = sizeof(arr) / sizeof(arr[0]);

    int longest = find_longest_progression(arr, n);

    printf("Длина самой длинной прогрессии: %d\n", longest);
}

// Если длина ГП = АП
void task_6_test_3() {
    int arr[] = {2, 4, 6, 8, 10, 20, 40, 80, 160};
    int n = sizeof(arr) / sizeof(arr[0]);

    int longest = find_longest_progression(arr, n);

    printf("Длина самой длинной прогрессии: %d\n", longest);
}

void task_6_test() {
    task_6_test_1();
    task_6_test_2();
    task_6_test_3();
}

#endif //PRACTICE_6_TASK_H
