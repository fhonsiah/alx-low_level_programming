/**
 *Program: 4-print_rev.c
 *A function that prints a string in reverse.
 */
#include "main.h"
#include <string.h>
/**
 *print_rev - function that prints a string in reverse.
 *
 *@s: the parameter to be printed to std output in reverse.
 *
 *Return:void
 */
void print_rev(char *s)
{
	int i = 0;
	int l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
