/**
 *Program: 8-print_diagsums.c
 *A function that prints the sum of the two diagonals of
 *a square matrix of integers.
 *Author:Faustina Honsiah
 */
#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals of
 *a square matrix of integers.
 *@a:the square matrix.
 *@size: the matrix size
 */
void print_diagsums(int a*, int size)
{
int i;
int sum = 0;
int sum1 = 0;

for (i = 0; i < size; i++)
{
	sum += a[(size * i) + i];
	sume1 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum1);
}
