#ifndef S21_MATRIX_H_
#define S21_MATRIX_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

int s21_create_matrix(int rows, int columns, matrix_t *result);
void s21_remove_matrix(matrix_t *A);
int s21_eq_matrix(matrix_t *A, matrix_t *B);
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_mult_number(matrix_t *A, double number, matrix_t *result);
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_transpose(matrix_t *A, matrix_t *result);
int s21_calc_complements(matrix_t *A, matrix_t *result);
int s21_determinant(matrix_t *A, double *result);
int s21_inverse_matrix(matrix_t *A, matrix_t *result);

// 0 - OK
// 1 - Ошибка, некорректная матрица
int s21_error_uncorrect(matrix_t *A, matrix_t *B, matrix_t *result);
// 0 - OK
// 2 - Ошибка вычисления (несовпадающие размеры матриц; матрица, для которой
// нельзя провести вычисления и т.д.);
int s21_error_compare_sum_sub(matrix_t *A, matrix_t *B);
int s21_error_compare_mult(matrix_t *A, matrix_t *B);
int s21_error_compare_calc(matrix_t *A);
int s21_error_compare_determinant(matrix_t *A, double *B);
int s21_error_compare_inv(matrix_t *A);

void create_minor(int row, int column, matrix_t *A, matrix_t *result);

#endif  // S21_MATRIX_H_
