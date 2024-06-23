// Created by vadim on 21.06.2024.

#ifndef PRACTICE_9_TASK_H
#define PRACTICE_9_TASK_H

#include <stdio.h>

void compress_bits(unsigned char* input, int input_size) {
    int i = 0;
    while(i < input_size) {
        unsigned char currBit = input[i];
        int count = 1;

        while(i + 1 < input_size && input[i + 1] == currBit && count < 15) {
            count++;
            i++;
        }

        printf("%d%d ", count, currBit);
        i++;
    }

    printf("\n");
}
// Тест 1
int task_9_test_1() {
    unsigned char input[] = {1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0,1,0}; // Пример неупакованного двоичного массива
    int input_size = sizeof(input) / sizeof(input[0]);

    compress_bits(input, input_size);

    return 0;
}

// Тест 2
int task_9_test_2() {
    unsigned char input[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,1,1}; // Пример неупакованного двоичного массива
    int input_size = sizeof(input) / sizeof(input[0]);

    compress_bits(input, input_size);

    return 0;
}

int task_9_test() {
    task_9_test_1();
    task_9_test_2();
}

#endif //PRACTICE_9_TASK_H