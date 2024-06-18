#include <stdio.h>

void print_age(int age) {

    if ((age % 10 == 1) && (age != 11)) {
        printf("Мне %d год\n", age);

    } else if ((2 <= age % 10) && (age % 10 <= 4) && ((age < 10) || (age > 20))) {
        printf("Мне %d года\n", age);

    } else {
        printf("Мне %d лет\n", age);
    }
}

// Если "год"
void task_2_test_1() {
    int age = 21;
    print_age(age);
}

// Если "года"
void task_2_test_2() {
    int age = 32;
    print_age(age);
}

// Если "лет"
void task_2_test_3() {
    int age = 12;
    print_age(age);
}

void task_2_test() {
    task_2_test_1();
    task_2_test_2();
    task_2_test_3();
}