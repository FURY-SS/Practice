// Created by vadim on 18.06.2024.
#include <stdio.h>

#ifndef PRACTICE_3_TASK_H
#define PRACTICE_3_TASK_H

// p-объём (кубометров)
// k-прирост в процентах
// t-годовой план заготовки (кубометров)

void print_years(int age) {

    if ((age % 10 == 1) && (age != 11)) {
        printf("%d год\n", age);

    } else if ((2 <= age % 10) && (age % 10 <= 4) && ((age < 10) || (age > 20))) {
        printf("%d года\n", age);

    } else {
        printf("%d лет\n", age);
    }
}

void filling_of_trees(int p, int k, int t) {
    if (p/100 * k >= t) {
        printf("Можно пилить деревья бесконечно\n");

    } else {
        int year = 1;

        while ((p + p/100 * k - t) > 0) {
            p = p + p/100 * k - t;
            year++;
        }

        printf("Лес будет вырублен через ");
        print_years(year);
    }
}

// Если нет прироста
void task_3_test_1() {
    filling_of_trees(100,0,20);
}

// Если кол-во выруб. дерерьев в год больше, чем прирост
void task_3_test_2() {
    filling_of_trees(100,20,50);
}

// Если кол-во выруб. дерерьев в год маньше, чем прирост
void task_3_test_3() {
    filling_of_trees(300,20,10);
}

void task_3_test() {
    task_3_test_1();
    task_3_test_2();
    task_3_test_3();
}

#endif //PRACTICE_3_TASK_H