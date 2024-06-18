// Created by vadim on 18.06.2024.
#include <stdio.h>

#ifndef PRACTICE_4_TASK_H
#define PRACTICE_4_TASK_H

void output_array_(const float *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        printf("%.1f ", *(a + i));
    printf("\n");
}

void arithmetic_mean(float *A, int n) {
    float sum = 0;

    for(int i = 0; i < n; i++) {
        sum += A[i];
        float average = sum / (i + 1); // Вычисляем среднее значение первых i+1 элементов

        // Заменяем элемент x_i на среднее значение первых i элементов
        A[i] = average;
    }

    output_array_(A,n);
}

void task_4_test_1() {
    float A[]={3,6,9,12,15};

    arithmetic_mean(A,5);
}

void task_4_test_2() {
    float A[]={1,2,3,4,5};

    arithmetic_mean(A,5);
}

void task_4_test_3() {
    float A[]={1,1,1,1,1};

    arithmetic_mean(A,5);
}

void task_4_test() {
    task_4_test_1();
    task_4_test_2();
    task_4_test_3();

}

#endif //PRACTICE_4_TASK_H