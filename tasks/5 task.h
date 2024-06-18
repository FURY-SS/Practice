// Created by vadim on 18.06.2024.
#include <stdio.h>

#ifndef PRACTICE_5_TASK_H
#define PRACTICE_5_TASK_H

#include <stdio.h>

// Структура для представления многочлена
typedef struct {
    int degree;
    double coefficients[100]; // Максимальная степень многочлена
} Polynomial;

// Функция умножения двух многочленов
Polynomial multiplyPolynomials(Polynomial p1, Polynomial p2) {
    Polynomial result = {p1.degree + p2.degree, {0}};
    int i, j;

    for(i = 0; i <= p1.degree; i++) {
        for(j = 0; j <= p2.degree; j++) {
            result.coefficients[i + j] += p1.coefficients[i] * p2.coefficients[j];
        }
    }

    return result;
}

// Функция композиции многочленов
Polynomial composePolynomials(Polynomial p1, Polynomial p2) {
    Polynomial result = {p1.degree * p2.degree, {0}};
    int i, j;

    for(i = 0; i <= p1.degree; i++) {
        for(j = 0; j <= p2.degree; j++) {
            result.coefficients[i * p2.degree + j] += p1.coefficients[i] * p2.coefficients[j];
        }
    }

    return result;
}

// Функция для сравнения двух многочленов
int comparePolynomials(Polynomial p1, Polynomial p2) {
    int i;
    if (p1.degree != p2.degree) {
        return 0;
    }

    for(i = 0; i <= p1.degree; i++) {
        if (p1.coefficients[i] != p2.coefficients[i]) {
            return 0;
        }
    }

    return 1;
}

void task_5_test_1() {
    Polynomial P = {2, {1, 2, 3}}; // P(x) = x^2 + 2x + 3
    Polynomial Q = {1, {4, 5}}; // Q(x) = 4x + 5

    Polynomial expectedComposition = {2, {16, 27, 30}}; // Ожидаемый результат P(Q(x)) = 16x^2 + 27x + 30

    Polynomial actualComposition = composePolynomials(P, Q);
    if(comparePolynomials(expectedComposition, actualComposition)) {
        printf("Тест 1 пройден успешно!\n");
    } else {
        printf("Тест 1 не пройден.\n");
    }
}

#endif //PRACTICE_5_TASK_H