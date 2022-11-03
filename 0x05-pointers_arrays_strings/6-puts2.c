/**
 *Program: 6-puts2.c
 *A function that prints every other character of a string , starting
 *with the first character, followed by a new line.
 *Author: Faustina Honsiah
 */
#include "main.h"
#include <string.h>
/**
 *puts2 - function that prints the characters.
 *
 *@str: the parameter to be printed to std output
 *
 *Retrun: void
 *
 */
void puts2(char *str)
{
	int s = 0;
	int l = strlen(str);

	for (s = 0; s < 1; s++)
	{
		if (s % 2 == 0)
			_putchar(str[s]);
	}

	_putchar('\n');
}
