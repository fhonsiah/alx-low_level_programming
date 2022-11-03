/**
 *Program: 8-print_array.c
 *A function that prints n elements of an array of integers,
 *followed by a new line.
 *Author: Faustina Honsiah
 */
#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints the array
 *
 *@a: the pointer parameter
 *
 *@n: the number of elements in the array.
 *
 *Return:void
 */
voide print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(", ");
			a++;
		}
	}
	printf("\n");
}
