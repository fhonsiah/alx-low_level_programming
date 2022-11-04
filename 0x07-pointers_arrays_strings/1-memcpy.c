/**
 *Program: 1-memcpy.c
 *A function that copies memory area.
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *_memcpy - function that copies memory area.
 *@dest: the pointer parameter to fill.
 *@src: the bytes from memory area.
 *@n: the number of bytes.
 * 
 *Return: a character that represents number of bytes.
 */
char *_memcpy(char *dest,char *src, unsigned int n)
{
	unsigned int x;

	for(x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
