/**
 *Program: 1-swap.c
 *A function that swaps the values of two intergers.
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *swap_int - Swap to integers
 *
 *@a: first parameter.
 *@b: second parameter.
 *
 *Retrun: void
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
