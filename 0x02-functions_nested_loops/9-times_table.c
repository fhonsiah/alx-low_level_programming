/*
 *Program: 9-times_table.c
 *The program printsthe 9 times table,
 *starting with 0.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *times-table - prints the 9 times table, starting with 0
 *
 *@void: Does return anything.
 *
 *Return: the return type is void i.e does not return anything.
 */
void times_table(void)
{
	int rows;
	int columns;
	int result = 0;
	int first_digit;
	int last_digit;

	for (rows = 0; rows < 10; rows++)
	{
		for (columns = 0; columns < 10; columns++)
		{
			result = rows * columns;
			first_digit = result / 10;
			last_digit = result % 10;

			if (first_digit > 0)
			{
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			if (first_digit == 0)
			{
				_putchar(last_digit + '0');
			}
			if (columns != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
