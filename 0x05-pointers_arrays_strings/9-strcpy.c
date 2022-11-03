/**
 *Program: 9-strcpy.c
 *A function that copoes the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *Author: Faustina Honsiah
 */
#include "main.h"
#include <string.h>
/**
 *_strcpy - function that copies the string
 *
 *@dest: the pointer parameter for destination string
 *
 *@src: the pointer parameter for source string
 *
 *Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
