#include <stdio.h>
#include <stdlib.h>

double* calc(double* matrix1, double* matrix2, int n, char op) {
    double* result = (double*)malloc(n * n * sizeof(double));
    int i, j, k;

    if (op == '+') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i * n + j] = matrix1[i * n + j] + matrix2[i * n + j];
            }
        }
    }

    if (op == '-') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i * n + j] = matrix1[i * n + j] - matrix2[i * n + j];
            }
        }
    }

    if (op == '*') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i * n + j] = 0.0;
                for (k = 0; k < n; k++) {
                    result[i * n + j] += matrix1[i * n + k] * matrix2[k * n + j];
                }
            }
        }
    }

    return result;
}

