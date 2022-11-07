/**
 *Program: 4-strpbrk.c
 *A function that seardches a string for any of a set of bytes.
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *_strpbrk - function that locates a character in a string.
 *@s: the pointer string.
 *@accept: the character occured.
 *Return: a character found in a string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while(accept[j])
		{
			if(s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
