#include <windows.h>
#include "tasks/1 task.h"
#include "tasks/2 task.h"
#include "tasks/3 task.h"
#include "tasks/4 task.h"
#include "tasks/5 task.h"
#include "tasks/6 task.h"
#include "tasks/7 task.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    printf("Задание 1\n");
    task_1_test();
    printf("Задание 2\n");
    task_2_test();
    printf("Задание 3\n");
    task_3_test();
    printf("Задание 4\n");
    task_4_test();
    printf("Задание 5\n");
    task_5_test_1();
    printf("Задание 6\n");
    task_6_test();
    printf("Задание 7\n");
    task_7_test();

}