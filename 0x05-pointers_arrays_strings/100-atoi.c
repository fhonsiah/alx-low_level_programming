/**
 *Program: 100-atoi.c
 *A function that convert a string to an integer
 *Author: Faustina Honsiah
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *_atoi - function that copies the string
 *
 *@s: the pointer string parameter
 *
 *Return: an integer from a string
 */
int _atoi(char *s)
{
	int i;
        int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if(!isdigit(s[i]))
		{
			return (0);
		}
	}

	return ((int)*s);
}
