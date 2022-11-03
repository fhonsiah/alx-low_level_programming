/**
 *Program: 1-strncat.c
 *A function that concatenates strings
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *_strncat - function that concatenates strings. 
 *@dest: the pointer parameter for destination string
 *@src: the pointer parameter for source string
 *@n: the number of characters to concatenate.
 *Retrun: a pointer string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
