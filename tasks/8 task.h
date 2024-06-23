// Created by vadim on 18.06.2024.

#ifndef PRACTICE_8_TASK_H
#define PRACTICE_8_TASK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Point;

// Функция сравнения для сортировки по x-координате
int compare_x(const void* a, const void* b) {
    Point* p1 = (Point*)a;
    Point* p2 = (Point*)b;
    return (p1->x - p2->x);
}

// Функция сравнения для сортировки по y-координате
int compare_y(const void* a, const void* b) {
    Point* p1 = (Point*)a;
    Point* p2 = (Point*)b;
    return (p1->y - p2->y);
}

// Функция нахождения медианы по x-координате (вертикальная медиана)
int find_vertical_median(Point* points, int n) {
    qsort(points, n, sizeof(Point), compare_x);
    return points[n / 2].x;
}

// Функция нахождения медианы по y-координате (горизонтальная медиана)
int find_horizontal_median(Point* points, int n) {
    qsort(points, n, sizeof(Point), compare_y);
    return points[n / 2].y;
}

// Тестирование функции
int task_8_test_1() {
    Point points[] = { {2, 3}, {4, 1}, {6, 5}, {8, 4},{10, 2}};
    int n = sizeof(points) / sizeof(points[0]);

    int vertical_median = find_vertical_median(points, n);
    int horizontal_median = find_horizontal_median(points, n);

    printf("Вертикальная медиана: x = %d\n", vertical_median);
    printf("Горизонтальная медиана: y = %d\n", horizontal_median);

    return 0;
}

// Тестирование функции
int task_8_test_2() {
    Point points[] = { {1, 2}, {3, 5}, {6, 1}, {7, 4},{9, 2}};
    int n = sizeof(points) / sizeof(points[0]);

    int vertical_median = find_vertical_median(points, n);
    int horizontal_median = find_horizontal_median(points, n);

    printf("Вертикальная медиана: x = %d\n", vertical_median);
    printf("Горизонтальная медиана: y = %d\n", horizontal_median);

    return 0;
}

int task_8_test() {
    task_8_test_1();
    task_8_test_2();
}

#endif //PRACTICE_8_TASK_H