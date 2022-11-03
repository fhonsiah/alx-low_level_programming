/**
 *Program: 0-strcat.c
 *A function that concatenates strings
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *_strcat - function that concatentates strings.
 *
 *@dest: the pointer parameter for destination string
 *
 *@src: the pointer parameter for source string
 *
 *Retrun: a pointer string.
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
        
	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
