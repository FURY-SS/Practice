// Created by vadim on 21.06.2024.

#ifndef PRACTICE_10_TASK_H
#define PRACTICE_10_TASK_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_and_fix_punctuation(char *text) {
    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        if (strchr(".,;:!?)]}", text[i]) && (i == 0 || !isspace(text[i - 1]))) {
            // Если символ пунктуации идет после текста и перед ним нет пробела
            memmove(text + i + 1, text + i, length - i + 1);
            length++;
            i++;
            text[i] = ' ';
        } else if (strchr("([{", text[i]) && (i == length - 1 || !isspace(text[i + 1]))) {
            // Если символ пунктуации идет перед текстом и после него нет пробела
            memmove(text + i + 1, text + i, length - i + 1);
            text[i] = ' ';
            length++;
            i++;
        }
    }
}

void task_10_test_1() {
    char test[] = "Hello,world!";
    check_and_fix_punctuation(test);
    printf("%s\n", test);
}

void task_10_test_2() {
    char test[] = "This is a test(string)";
    check_and_fix_punctuation(test);
    printf("%s\n", test);
}

void task_10_test_3() {
    char test[] = "Check this out!Please!";
    check_and_fix_punctuation(test);
    printf("%s\n", test);
}

void task_10_test() {
    task_10_test_1();
    task_10_test_2();
    task_10_test_3();
}

#endif //PRACTICE_10_TASK_H