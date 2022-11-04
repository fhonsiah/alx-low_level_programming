/**
 *Program: 3-strspn.c
 *A function that gets the length of a prefix substring.
 *Author:Faustina Honsiah
 */
#include "main.h"
/**
 *_strspn - function that gets the legnth of a prefix substring.
 *@s: the pointer string parameter.
 *@accept: the byte to be looked upon.
 *
 *Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
			k++;
			}

			j++;
		}
		
		i++;
	}

	return (k);
}
