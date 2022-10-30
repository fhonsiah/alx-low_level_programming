#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9
 * with the exception of 2 and 4
 *
 *Return:void
 *
 */

void print_most_numbers(void)
{
	cahr c;
	for (c = 0; c <= 9; c++)
	{
		if (!(c == 2 || c == 4))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
